export const msalConfig = {
  auth: {
    clientId: "ba0b9304-26aa-40b0-843e-6b3b840aaae1",
    authority: "https://login.microsoftonline.com/common",
    redirectUri: "http://localhost:3000/",
  },
  cache: {
    cacheLocation: "sessionStorage",
    storeAuthStateInCookie: false, 
  },
};

export const loginRequest = {
  scopes: ["User.Read"],
};

export const graphConfig = {
  graphMeEndpoint: "https://graph.microsoft.com/v1.0/me",
};