import React from 'react'
import {Link} from "react-router-dom";

const Navigation = (props) => {
    let path = "/dialogs/" + props.id;
    return (
        <div>
            <ul>
                {/*<li><Link to={"/"}>Main</Link></li>*/}
                <li><Link to={"/data"}>SomeData here</Link></li>
                <li><Link to={"/prop"}>propComp</Link></li>
                <li><Link to={"/head"}>Header</Link></li>
                <Link to="path">{props.name}</Link>
            </ul>
        </div>
    );
};

export default Navigation;