import './App.css';
import Header from "./components/Header";
import React from "react";
import SomeData from "./components/SomeData";
import {BrowserRouter as Router, Routes, Route} from "react-router-dom";
import PropComp from "./components/PropComp";
import Navigation from "./components/Navigation";

function App() {
  return (
    <div className="App-wrapper">
        <header>
          <Router>
            <Navigation/>
              <Routes>
                <Route path="/"/>
                <Route path="/data" element={<SomeData/>}/>
                <Route path="/head" element={<Header/>}/>
                <Route path="/prop" element={<PropComp post={{
                  id: 1,
                  title: "propComp",
                  body: "Description"
                }}/>}/>
              </Routes>
          </Router>
        </header>
    </div>
  );
}

export default App;
