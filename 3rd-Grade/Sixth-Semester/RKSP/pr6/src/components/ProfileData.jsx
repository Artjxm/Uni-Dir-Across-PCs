import React from "react";

export const ProfileData = (props) => {
    return (
        <div id="profile-div">
            <p><strong>Имя: </strong> {props.graphData.givenName}</p>
            <p><strong>Фамилия: </strong> {props.graphData.surname}</p>
            <p><strong>Email: </strong> {props.graphData.userPrincipalName}</p>
            <p><strong>Id: </strong> {props.graphData.id}</p>
        </div>
    );
};