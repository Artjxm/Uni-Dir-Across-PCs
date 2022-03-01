import './App.css';
import Header from "./components/Header";
import React from "react";
import SomeData from "./components/SomeData";
import {BrowserRouter, Route, Routes} from "react-router-dom";

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Header/>
        <p>
            <a href="/dialogs">Dialogs</a>
          Hello there mista!
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
            <img src="img.jpg" alt="pic broke"/>
          some link
        </a>
      </header>
      <SomeData/>
    </div>
  );
}

export default App;
