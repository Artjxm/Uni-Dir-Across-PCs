import React from 'react';
import '../styles/propComp.css';

const PropComp = (props) => {
    return (
        <div className={"forProp"}>
            <div className={"forPropContent"}>
                <strong>{props.post.id}. Новый компонент!! {props.post.title}</strong>
            </div>
        </div>
    )
};

export default PropComp;