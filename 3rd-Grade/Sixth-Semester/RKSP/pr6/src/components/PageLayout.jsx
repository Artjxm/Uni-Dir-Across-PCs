import React from "react";
import Navbar from "react-bootstrap/Navbar";
import { useIsAuthenticated } from "@azure/msal-react";
import { SignInButton } from "./SignInButton";
import { SignOutButton } from "./SignOutButton";

export const PageLayout = (props) => {
    const isAuthenticated = useIsAuthenticated();

    return (
        <>
            <Navbar bg="primary" variant="dark">
                <a className="navbar-brand" href="/">ПР6</a>
                { isAuthenticated ? <SignOutButton /> : <SignInButton /> }
            </Navbar>
            <h5><center>Добро пожаловать, это Практическая работа №6</center></h5>
            <br />
            <br />
            {props.children}
        </>
    );
};