import React, { useState } from "react";
import { PageLayout } from "./components/PageLayout";
import { AuthenticatedTemplate, UnauthenticatedTemplate, useMsal } from "@azure/msal-react";
import { loginRequest } from "./authConfig";
import Button from "react-bootstrap/Button";
import { ProfileData } from "./components/ProfileData";
import { callMsGraph } from "./graph";

function ProfileContent() {
  const { instance, accounts } = useMsal();
  const [graphData, setGraphData] = useState(null);

  const name = accounts[0] && accounts[0].name;

  function RequestProfileData() {
      const request = {
          ...loginRequest,
          account: accounts[0]
      };

      instance.acquireTokenSilent(request).then((response) => {
          callMsGraph(response.accessToken).then(response => setGraphData(response));
      }).catch((e) => {
          instance.acquireTokenPopup(request).then((response) => {
              callMsGraph(response.accessToken).then(response => setGraphData(response));
          });
      });
  }

  return (
      <>
          <h5 className="card-title">Добро пожаловать {name}</h5>
          {graphData ? 
              <ProfileData graphData={graphData} />
              :
              <Button variant="secondary" onClick={RequestProfileData}>Запрос информации о профиле</Button>
          }
      </>
  );
};


function App() {
  return (
      <PageLayout>
          <AuthenticatedTemplate>
              <ProfileContent />
          </AuthenticatedTemplate>
          <UnauthenticatedTemplate>
              <p>Вы не вошли, войдите пожалуйста</p>
          </UnauthenticatedTemplate>
      </PageLayout>
  );
}

export default App;
