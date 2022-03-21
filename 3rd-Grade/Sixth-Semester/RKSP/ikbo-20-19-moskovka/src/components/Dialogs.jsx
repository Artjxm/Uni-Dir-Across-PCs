import React from "react";
import { Link } from "react-router-dom";

function Dialog(props){
let path ='/$(prps.id)';
return (
<div>
<Link to={path} className='link'>{props.name}</Link>
</div>
)
}

export default Dialog