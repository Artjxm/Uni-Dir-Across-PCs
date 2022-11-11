(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var p;function aa(a){var b=0;return function(){return b<a.length?{done:!1,value:a[b++]}:{done:!0}}}
var ba="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};
function ca(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}
var fa=ca(this);function t(a,b){if(b)a:{var c=fa;a=a.split(".");for(var d=0;d<a.length-1;d++){var e=a[d];if(!(e in c))break a;c=c[e]}a=a[a.length-1];d=c[a];b=b(d);b!=d&&null!=b&&ba(c,a,{configurable:!0,writable:!0,value:b})}}
t("Symbol",function(a){function b(f){if(this instanceof b)throw new TypeError("Symbol is not a constructor");return new c(d+(f||"")+"_"+e++,f)}
function c(f,g){this.h=f;ba(this,"description",{configurable:!0,writable:!0,value:g})}
if(a)return a;c.prototype.toString=function(){return this.h};
var d="jscomp_symbol_"+(1E9*Math.random()>>>0)+"_",e=0;return b});
t("Symbol.iterator",function(a){if(a)return a;a=Symbol("Symbol.iterator");for(var b="Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "),c=0;c<b.length;c++){var d=fa[b[c]];"function"===typeof d&&"function"!=typeof d.prototype[a]&&ba(d.prototype,a,{configurable:!0,writable:!0,value:function(){return ha(aa(this))}})}return a});
function ha(a){a={next:a};a[Symbol.iterator]=function(){return this};
return a}
function u(a){var b="undefined"!=typeof Symbol&&Symbol.iterator&&a[Symbol.iterator];return b?b.call(a):{next:aa(a)}}
function ia(a){if(!(a instanceof Array)){a=u(a);for(var b,c=[];!(b=a.next()).done;)c.push(b.value);a=c}return a}
function ja(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
var ka="function"==typeof Object.assign?Object.assign:function(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(d)for(var e in d)ja(d,e)&&(a[e]=d[e])}return a};
t("Object.assign",function(a){return a||ka});
var la="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},ma;
if("function"==typeof Object.setPrototypeOf)ma=Object.setPrototypeOf;else{var na;a:{var oa={a:!0},pa={};try{pa.__proto__=oa;na=pa.a;break a}catch(a){}na=!1}ma=na?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var qa=ma;
function v(a,b){a.prototype=la(b.prototype);a.prototype.constructor=a;if(qa)qa(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.O=b.prototype}
function ra(){this.u=!1;this.l=null;this.i=void 0;this.h=1;this.o=this.m=0;this.G=this.j=null}
function ta(a){if(a.u)throw new TypeError("Generator is already running");a.u=!0}
ra.prototype.C=function(a){this.i=a};
function ua(a,b){a.j={Ua:b,Za:!0};a.h=a.m||a.o}
ra.prototype.return=function(a){this.j={return:a};this.h=this.o};
function w(a,b,c){a.h=c;return{value:b}}
ra.prototype.s=function(a){this.h=a};
function wa(a,b,c){a.m=b;void 0!=c&&(a.o=c)}
function xa(a,b){a.h=b;a.m=0}
function ya(a){a.m=0;var b=a.j.Ua;a.j=null;return b}
function za(a){a.G=[a.j];a.m=0;a.o=0}
function Ba(a){var b=a.G.splice(0)[0];(b=a.j=a.j||b)?b.Za?a.h=a.m||a.o:void 0!=b.s&&a.o<b.s?(a.h=b.s,a.j=null):a.h=a.o:a.h=0}
function Ca(a){this.h=new ra;this.i=a}
function Da(a,b){ta(a.h);var c=a.h.l;if(c)return Ea(a,"return"in c?c["return"]:function(d){return{value:d,done:!0}},b,a.h.return);
a.h.return(b);return Fa(a)}
function Ea(a,b,c,d){try{var e=b.call(a.h.l,c);if(!(e instanceof Object))throw new TypeError("Iterator result "+e+" is not an object");if(!e.done)return a.h.u=!1,e;var f=e.value}catch(g){return a.h.l=null,ua(a.h,g),Fa(a)}a.h.l=null;d.call(a.h,f);return Fa(a)}
function Fa(a){for(;a.h.h;)try{var b=a.i(a.h);if(b)return a.h.u=!1,{value:b.value,done:!1}}catch(c){a.h.i=void 0,ua(a.h,c)}a.h.u=!1;if(a.h.j){b=a.h.j;a.h.j=null;if(b.Za)throw b.Ua;return{value:b.return,done:!0}}return{value:void 0,done:!0}}
function Ga(a){this.next=function(b){ta(a.h);a.h.l?b=Ea(a,a.h.l.next,b,a.h.C):(a.h.C(b),b=Fa(a));return b};
this.throw=function(b){ta(a.h);a.h.l?b=Ea(a,a.h.l["throw"],b,a.h.C):(ua(a.h,b),b=Fa(a));return b};
this.return=function(b){return Da(a,b)};
this[Symbol.iterator]=function(){return this}}
function Ha(a){function b(d){return a.next(d)}
function c(d){return a.throw(d)}
return new Promise(function(d,e){function f(g){g.done?d(g.value):Promise.resolve(g.value).then(b,c).then(f,e)}
f(a.next())})}
function x(a){return Ha(new Ga(new Ca(a)))}
function Ia(){for(var a=Number(this),b=[],c=a;c<arguments.length;c++)b[c-a]=arguments[c];return b}
t("Reflect.setPrototypeOf",function(a){return a?a:qa?function(b,c){try{return qa(b,c),!0}catch(d){return!1}}:null});
t("Promise",function(a){function b(g){this.h=0;this.j=void 0;this.i=[];this.u=!1;var h=this.l();try{g(h.resolve,h.reject)}catch(k){h.reject(k)}}
function c(){this.h=null}
function d(g){return g instanceof b?g:new b(function(h){h(g)})}
if(a)return a;c.prototype.i=function(g){if(null==this.h){this.h=[];var h=this;this.j(function(){h.o()})}this.h.push(g)};
var e=fa.setTimeout;c.prototype.j=function(g){e(g,0)};
c.prototype.o=function(){for(;this.h&&this.h.length;){var g=this.h;this.h=[];for(var h=0;h<g.length;++h){var k=g[h];g[h]=null;try{k()}catch(l){this.l(l)}}}this.h=null};
c.prototype.l=function(g){this.j(function(){throw g;})};
b.prototype.l=function(){function g(l){return function(m){k||(k=!0,l.call(h,m))}}
var h=this,k=!1;return{resolve:g(this.Ia),reject:g(this.o)}};
b.prototype.Ia=function(g){if(g===this)this.o(new TypeError("A Promise cannot resolve to itself"));else if(g instanceof b)this.jb(g);else{a:switch(typeof g){case "object":var h=null!=g;break a;case "function":h=!0;break a;default:h=!1}h?this.Ha(g):this.m(g)}};
b.prototype.Ha=function(g){var h=void 0;try{h=g.then}catch(k){this.o(k);return}"function"==typeof h?this.kb(h,g):this.m(g)};
b.prototype.o=function(g){this.C(2,g)};
b.prototype.m=function(g){this.C(1,g)};
b.prototype.C=function(g,h){if(0!=this.h)throw Error("Cannot settle("+g+", "+h+"): Promise already settled in state"+this.h);this.h=g;this.j=h;2===this.h&&this.Ja();this.G()};
b.prototype.Ja=function(){var g=this;e(function(){if(g.V()){var h=fa.console;"undefined"!==typeof h&&h.error(g.j)}},1)};
b.prototype.V=function(){if(this.u)return!1;var g=fa.CustomEvent,h=fa.Event,k=fa.dispatchEvent;if("undefined"===typeof k)return!0;"function"===typeof g?g=new g("unhandledrejection",{cancelable:!0}):"function"===typeof h?g=new h("unhandledrejection",{cancelable:!0}):(g=fa.document.createEvent("CustomEvent"),g.initCustomEvent("unhandledrejection",!1,!0,g));g.promise=this;g.reason=this.j;return k(g)};
b.prototype.G=function(){if(null!=this.i){for(var g=0;g<this.i.length;++g)f.i(this.i[g]);this.i=null}};
var f=new c;b.prototype.jb=function(g){var h=this.l();g.wa(h.resolve,h.reject)};
b.prototype.kb=function(g,h){var k=this.l();try{g.call(h,k.resolve,k.reject)}catch(l){k.reject(l)}};
b.prototype.then=function(g,h){function k(r,q){return"function"==typeof r?function(y){try{l(r(y))}catch(A){m(A)}}:q}
var l,m,n=new b(function(r,q){l=r;m=q});
this.wa(k(g,l),k(h,m));return n};
b.prototype.catch=function(g){return this.then(void 0,g)};
b.prototype.wa=function(g,h){function k(){switch(l.h){case 1:g(l.j);break;case 2:h(l.j);break;default:throw Error("Unexpected state: "+l.h);}}
var l=this;null==this.i?f.i(k):this.i.push(k);this.u=!0};
b.resolve=d;b.reject=function(g){return new b(function(h,k){k(g)})};
b.race=function(g){return new b(function(h,k){for(var l=u(g),m=l.next();!m.done;m=l.next())d(m.value).wa(h,k)})};
b.all=function(g){var h=u(g),k=h.next();return k.done?d([]):new b(function(l,m){function n(y){return function(A){r[y]=A;q--;0==q&&l(r)}}
var r=[],q=0;do r.push(void 0),q++,d(k.value).wa(n(r.length-1),m),k=h.next();while(!k.done)})};
return b});
t("WeakMap",function(a){function b(k){this.h=(h+=Math.random()+1).toString();if(k){k=u(k);for(var l;!(l=k.next()).done;)l=l.value,this.set(l[0],l[1])}}
function c(){}
function d(k){var l=typeof k;return"object"===l&&null!==k||"function"===l}
function e(k){if(!ja(k,g)){var l=new c;ba(k,g,{value:l})}}
function f(k){var l=Object[k];l&&(Object[k]=function(m){if(m instanceof c)return m;Object.isExtensible(m)&&e(m);return l(m)})}
if(function(){if(!a||!Object.seal)return!1;try{var k=Object.seal({}),l=Object.seal({}),m=new a([[k,2],[l,3]]);if(2!=m.get(k)||3!=m.get(l))return!1;m.delete(k);m.set(l,4);return!m.has(k)&&4==m.get(l)}catch(n){return!1}}())return a;
var g="$jscomp_hidden_"+Math.random();f("freeze");f("preventExtensions");f("seal");var h=0;b.prototype.set=function(k,l){if(!d(k))throw Error("Invalid WeakMap key");e(k);if(!ja(k,g))throw Error("WeakMap key fail: "+k);k[g][this.h]=l;return this};
b.prototype.get=function(k){return d(k)&&ja(k,g)?k[g][this.h]:void 0};
b.prototype.has=function(k){return d(k)&&ja(k,g)&&ja(k[g],this.h)};
b.prototype.delete=function(k){return d(k)&&ja(k,g)&&ja(k[g],this.h)?delete k[g][this.h]:!1};
return b});
t("Map",function(a){function b(){var h={};return h.previous=h.next=h.head=h}
function c(h,k){var l=h.h;return ha(function(){if(l){for(;l.head!=h.h;)l=l.previous;for(;l.next!=l.head;)return l=l.next,{done:!1,value:k(l)};l=null}return{done:!0,value:void 0}})}
function d(h,k){var l=k&&typeof k;"object"==l||"function"==l?f.has(k)?l=f.get(k):(l=""+ ++g,f.set(k,l)):l="p_"+k;var m=h.data_[l];if(m&&ja(h.data_,l))for(h=0;h<m.length;h++){var n=m[h];if(k!==k&&n.key!==n.key||k===n.key)return{id:l,list:m,index:h,entry:n}}return{id:l,list:m,index:-1,entry:void 0}}
function e(h){this.data_={};this.h=b();this.size=0;if(h){h=u(h);for(var k;!(k=h.next()).done;)k=k.value,this.set(k[0],k[1])}}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var h=Object.seal({x:4}),k=new a(u([[h,"s"]]));if("s"!=k.get(h)||1!=k.size||k.get({x:4})||k.set({x:4},"t")!=k||2!=k.size)return!1;var l=k.entries(),m=l.next();if(m.done||m.value[0]!=h||"s"!=m.value[1])return!1;m=l.next();return m.done||4!=m.value[0].x||"t"!=m.value[1]||!l.next().done?!1:!0}catch(n){return!1}}())return a;
var f=new WeakMap;e.prototype.set=function(h,k){h=0===h?0:h;var l=d(this,h);l.list||(l.list=this.data_[l.id]=[]);l.entry?l.entry.value=k:(l.entry={next:this.h,previous:this.h.previous,head:this.h,key:h,value:k},l.list.push(l.entry),this.h.previous.next=l.entry,this.h.previous=l.entry,this.size++);return this};
e.prototype.delete=function(h){h=d(this,h);return h.entry&&h.list?(h.list.splice(h.index,1),h.list.length||delete this.data_[h.id],h.entry.previous.next=h.entry.next,h.entry.next.previous=h.entry.previous,h.entry.head=null,this.size--,!0):!1};
e.prototype.clear=function(){this.data_={};this.h=this.h.previous=b();this.size=0};
e.prototype.has=function(h){return!!d(this,h).entry};
e.prototype.get=function(h){return(h=d(this,h).entry)&&h.value};
e.prototype.entries=function(){return c(this,function(h){return[h.key,h.value]})};
e.prototype.keys=function(){return c(this,function(h){return h.key})};
e.prototype.values=function(){return c(this,function(h){return h.value})};
e.prototype.forEach=function(h,k){for(var l=this.entries(),m;!(m=l.next()).done;)m=m.value,h.call(k,m[1],m[0],this)};
e.prototype[Symbol.iterator]=e.prototype.entries;var g=0;return e});
function Ja(a,b,c){if(null==a)throw new TypeError("The 'this' value for String.prototype."+c+" must not be null or undefined");if(b instanceof RegExp)throw new TypeError("First argument to String.prototype."+c+" must not be a regular expression");return a+""}
t("String.prototype.endsWith",function(a){return a?a:function(b,c){var d=Ja(this,b,"endsWith");b+="";void 0===c&&(c=d.length);c=Math.max(0,Math.min(c|0,d.length));for(var e=b.length;0<e&&0<c;)if(d[--c]!=b[--e])return!1;return 0>=e}});
t("Array.prototype.find",function(a){return a?a:function(b,c){a:{var d=this;d instanceof String&&(d=String(d));for(var e=d.length,f=0;f<e;f++){var g=d[f];if(b.call(c,g,f,d)){b=g;break a}}b=void 0}return b}});
t("String.prototype.startsWith",function(a){return a?a:function(b,c){var d=Ja(this,b,"startsWith");b+="";var e=d.length,f=b.length;c=Math.max(0,Math.min(c|0,d.length));for(var g=0;g<f&&c<e;)if(d[c++]!=b[g++])return!1;return g>=f}});
t("Number.isFinite",function(a){return a?a:function(b){return"number"!==typeof b?!1:!isNaN(b)&&Infinity!==b&&-Infinity!==b}});
t("Number.isInteger",function(a){return a?a:function(b){return Number.isFinite(b)?b===Math.floor(b):!1}});
t("Number.MAX_SAFE_INTEGER",function(){return 9007199254740991});
function Ka(a,b){a instanceof String&&(a+="");var c=0,d=!1,e={next:function(){if(!d&&c<a.length){var f=c++;return{value:b(f,a[f]),done:!1}}d=!0;return{done:!0,value:void 0}}};
e[Symbol.iterator]=function(){return e};
return e}
t("Array.prototype.entries",function(a){return a?a:function(){return Ka(this,function(b,c){return[b,c]})}});
t("Array.from",function(a){return a?a:function(b,c,d){c=null!=c?c:function(h){return h};
var e=[],f="undefined"!=typeof Symbol&&Symbol.iterator&&b[Symbol.iterator];if("function"==typeof f){b=f.call(b);for(var g=0;!(f=b.next()).done;)e.push(c.call(d,f.value,g++))}else for(f=b.length,g=0;g<f;g++)e.push(c.call(d,b[g],g));return e}});
t("Array.prototype.keys",function(a){return a?a:function(){return Ka(this,function(b){return b})}});
t("Array.prototype.values",function(a){return a?a:function(){return Ka(this,function(b,c){return c})}});
t("Number.isNaN",function(a){return a?a:function(b){return"number"===typeof b&&isNaN(b)}});
t("Object.setPrototypeOf",function(a){return a||qa});
t("Set",function(a){function b(c){this.h=new Map;if(c){c=u(c);for(var d;!(d=c.next()).done;)this.add(d.value)}this.size=this.h.size}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var c=Object.seal({x:4}),d=new a(u([c]));if(!d.has(c)||1!=d.size||d.add(c)!=d||1!=d.size||d.add({x:4})!=d||2!=d.size)return!1;var e=d.entries(),f=e.next();if(f.done||f.value[0]!=c||f.value[1]!=c)return!1;f=e.next();return f.done||f.value[0]==c||4!=f.value[0].x||f.value[1]!=f.value[0]?!1:e.next().done}catch(g){return!1}}())return a;
b.prototype.add=function(c){c=0===c?0:c;this.h.set(c,c);this.size=this.h.size;return this};
b.prototype.delete=function(c){c=this.h.delete(c);this.size=this.h.size;return c};
b.prototype.clear=function(){this.h.clear();this.size=0};
b.prototype.has=function(c){return this.h.has(c)};
b.prototype.entries=function(){return this.h.entries()};
b.prototype.values=function(){return this.h.values()};
b.prototype.keys=b.prototype.values;b.prototype[Symbol.iterator]=b.prototype.values;b.prototype.forEach=function(c,d){var e=this;this.h.forEach(function(f){return c.call(d,f,f,e)})};
return b});
t("Object.entries",function(a){return a?a:function(b){var c=[],d;for(d in b)ja(b,d)&&c.push([d,b[d]]);return c}});
t("Object.is",function(a){return a?a:function(b,c){return b===c?0!==b||1/b===1/c:b!==b&&c!==c}});
t("Array.prototype.includes",function(a){return a?a:function(b,c){var d=this;d instanceof String&&(d=String(d));var e=d.length;c=c||0;for(0>c&&(c=Math.max(c+e,0));c<e;c++){var f=d[c];if(f===b||Object.is(f,b))return!0}return!1}});
t("String.prototype.includes",function(a){return a?a:function(b,c){return-1!==Ja(this,b,"includes").indexOf(b,c||0)}});
var z=this||self;function B(a,b,c){a=a.split(".");c=c||z;a[0]in c||"undefined"==typeof c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}:c[d]=b}
function C(a,b){a=a.split(".");b=b||z;for(var c=0;c<a.length;c++)if(b=b[a[c]],null==b)return null;return b}
function La(a){var b=typeof a;return"object"!=b?b:a?Array.isArray(a)?"array":b:"null"}
function Oa(a){var b=La(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function Pa(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function Qa(a){return Object.prototype.hasOwnProperty.call(a,Ra)&&a[Ra]||(a[Ra]=++Sa)}
var Ra="closure_uid_"+(1E9*Math.random()>>>0),Sa=0;function Ta(a,b,c){return a.call.apply(a.bind,arguments)}
function Ua(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}}
function Va(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?Va=Ta:Va=Ua;return Va.apply(null,arguments)}
function D(a,b){function c(){}
c.prototype=b.prototype;a.O=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.ac=function(d,e,f){for(var g=Array(arguments.length-2),h=2;h<arguments.length;h++)g[h-2]=arguments[h];return b.prototype[e].apply(d,g)}}
function Wa(a){return a}
;function Xa(a,b){if(Error.captureStackTrace)Error.captureStackTrace(this,Xa);else{var c=Error().stack;c&&(this.stack=c)}a&&(this.message=String(a));void 0!==b&&(this.cause=b)}
D(Xa,Error);Xa.prototype.name="CustomError";function Ya(a){a=a.url;var b=/[?&]dsh=1(&|$)/.test(a);this.j=!b&&/[?&]ae=1(&|$)/.test(a);this.l=!b&&/[?&]ae=2(&|$)/.test(a);if((this.h=/[?&]adurl=([^&]*)/.exec(a))&&this.h[1]){try{var c=decodeURIComponent(this.h[1])}catch(d){c=null}this.i=c}}
;function $a(){}
function ab(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}
;var bb=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if("string"===typeof a)return"string"!==typeof b||1!=b.length?-1:a.indexOf(b,0);
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},E=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"===typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},cb=Array.prototype.map?function(a,b){return Array.prototype.map.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=Array(c),e="string"===typeof a?a.split(""):a,f=0;f<c;f++)f in e&&(d[f]=b.call(void 0,e[f],f,a));
return d},db=Array.prototype.reduce?function(a,b,c){return Array.prototype.reduce.call(a,b,c)}:function(a,b,c){var d=c;
E(a,function(e,f){d=b.call(void 0,d,e,f,a)});
return d};
function eb(a,b){b=bb(a,b);var c;(c=0<=b)&&Array.prototype.splice.call(a,b,1);return c}
function fb(a){return Array.prototype.concat.apply([],arguments)}
function gb(a){var b=a.length;if(0<b){for(var c=Array(b),d=0;d<b;d++)c[d]=a[d];return c}return[]}
function hb(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(Oa(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function ib(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function jb(a){var b=kb,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function lb(a,b){for(var c in a)if(!(c in b)||a[c]!==b[c])return!1;for(var d in b)if(!(d in a))return!1;return!0}
function mb(a){if(!a||"object"!==typeof a)return a;if("function"===typeof a.clone)return a.clone();if("undefined"!==typeof Map&&a instanceof Map)return new Map(a);if("undefined"!==typeof Set&&a instanceof Set)return new Set(a);if(a instanceof Date)return new Date(a.getTime());var b=Array.isArray(a)?[]:"function"!==typeof ArrayBuffer||"function"!==typeof ArrayBuffer.isView||!ArrayBuffer.isView(a)||a instanceof DataView?{}:new a.constructor(a.length),c;for(c in a)b[c]=mb(a[c]);return b}
var nb="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function pb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<nb.length;f++)c=nb[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var qb;function rb(){}
function sb(a){return new rb(tb,a)}
var tb={};sb("");var zb=String.prototype.trim?function(a){return a.trim()}:function(a){return/^[\s\xa0]*([\s\S]*?)[\s\xa0]*$/.exec(a)[1]},Ab=/&/g,Bb=/</g,Cb=/>/g,Db=/"/g,Eb=/'/g,Fb=/\x00/g,Gb=/[\x00&<>"']/;function Hb(a,b){this.h=b===Ib?a:""}
Hb.prototype.toString=function(){return this.h.toString()};
var Ib={},Jb=new Hb("about:invalid#zClosurez",Ib);function Kb(){var a=z.navigator;return a&&(a=a.userAgent)?a:""}
function F(a){return-1!=Kb().indexOf(a)}
;function Lb(){return(F("Chrome")||F("CriOS"))&&!F("Edge")||F("Silk")}
;var Mb={};function Nb(a){this.h=Mb===Mb?a:""}
Nb.prototype.toString=function(){return this.h.toString()};var Ob=RegExp("^(?:([^:/?#.]+):)?(?://(?:([^\\\\/?#]*)@)?([^\\\\/?#]*?)(?::([0-9]+))?(?=[\\\\/?#]|$))?([^?#]+)?(?:\\?([^#]*))?(?:#([\\s\\S]*))?$");function Pb(a){return a?decodeURI(a):a}
function Qb(a){return Pb(a.match(Ob)[3]||null)}
function Rb(a){var b=a.match(Ob);a=b[1];var c=b[2],d=b[3];b=b[4];var e="";a&&(e+=a+":");d&&(e+="//",c&&(e+=c+"@"),e+=d,b&&(e+=":"+b));return e}
function Sb(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)Sb(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function Tb(a){var b=[],c;for(c in a)Sb(c,a[c],b);return b.join("&")}
var Ub=/#|$/;function Zb(a,b){var c=a.search(Ub);a:{var d=0;for(var e=b.length;0<=(d=a.indexOf(b,d))&&d<c;){var f=a.charCodeAt(d-1);if(38==f||63==f)if(f=a.charCodeAt(d+e),!f||61==f||38==f||35==f)break a;d+=e+1}d=-1}if(0>d)return null;e=a.indexOf("&",d);if(0>e||e>c)e=c;d+=b.length+1;return decodeURIComponent(a.slice(d,-1!==e?e:0).replace(/\+/g," "))}
;function $b(a){z.setTimeout(function(){throw a;},0)}
;function ac(){return F("iPhone")&&!F("iPod")&&!F("iPad")}
;function bc(a){bc[" "](a);return a}
bc[" "]=function(){};var cc=F("Opera"),dc=F("Trident")||F("MSIE"),ec=F("Edge"),fc=F("Gecko")&&!(-1!=Kb().toLowerCase().indexOf("webkit")&&!F("Edge"))&&!(F("Trident")||F("MSIE"))&&!F("Edge"),gc=-1!=Kb().toLowerCase().indexOf("webkit")&&!F("Edge");function hc(){var a=z.document;return a?a.documentMode:void 0}
var ic;a:{var jc="",kc=function(){var a=Kb();if(fc)return/rv:([^\);]+)(\)|;)/.exec(a);if(ec)return/Edge\/([\d\.]+)/.exec(a);if(dc)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(gc)return/WebKit\/(\S+)/.exec(a);if(cc)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
kc&&(jc=kc?kc[1]:"");if(dc){var lc=hc();if(null!=lc&&lc>parseFloat(jc)){ic=String(lc);break a}}ic=jc}var mc=ic,nc;if(z.document&&dc){var oc=hc();nc=oc?oc:parseInt(mc,10)||void 0}else nc=void 0;var pc=nc;var qc=ac()||F("iPod"),rc=F("iPad");!F("Android")||Lb();Lb();var sc=F("Safari")&&!(Lb()||F("Coast")||F("Opera")||F("Edge")||F("Edg/")||F("OPR")||F("Firefox")||F("FxiOS")||F("Silk")||F("Android"))&&!(ac()||F("iPad")||F("iPod"));var tc={},uc=null;function wc(a,b){Oa(a);void 0===b&&(b=0);xc();b=tc[b];for(var c=Array(Math.floor(a.length/3)),d=b[64]||"",e=0,f=0;e<a.length-2;e+=3){var g=a[e],h=a[e+1],k=a[e+2],l=b[g>>2];g=b[(g&3)<<4|h>>4];h=b[(h&15)<<2|k>>6];k=b[k&63];c[f++]=""+l+g+h+k}l=0;k=d;switch(a.length-e){case 2:l=a[e+1],k=b[(l&15)<<2]||d;case 1:a=a[e],c[f]=""+b[a>>2]+b[(a&3)<<4|l>>4]+k+d}return c.join("")}
function yc(a){var b=a.length,c=3*b/4;c%3?c=Math.floor(c):-1!="=.".indexOf(a[b-1])&&(c=-1!="=.".indexOf(a[b-2])?c-2:c-1);var d=new Uint8Array(c),e=0;zc(a,function(f){d[e++]=f});
return e!==c?d.subarray(0,e):d}
function zc(a,b){function c(k){for(;d<a.length;){var l=a.charAt(d++),m=uc[l];if(null!=m)return m;if(!/^[\s\xa0]*$/.test(l))throw Error("Unknown base64 encoding at char: "+l);}return k}
xc();for(var d=0;;){var e=c(-1),f=c(0),g=c(64),h=c(64);if(64===h&&-1===e)break;b(e<<2|f>>4);64!=g&&(b(f<<4&240|g>>2),64!=h&&b(g<<6&192|h))}}
function xc(){if(!uc){uc={};for(var a="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),b=["+/=","+/","-_=","-_.","-_"],c=0;5>c;c++){var d=a.concat(b[c].split(""));tc[c]=d;for(var e=0;e<d.length;e++){var f=d[e];void 0===uc[f]&&(uc[f]=e)}}}}
;var Ac="undefined"!==typeof Uint8Array;function Bc(a){return Ac&&null!=a&&a instanceof Uint8Array}
var Cc={};var Dc;function Ec(){if(Cc!==Cc)throw Error("illegal external caller");}
function Fc(a){Ec();this.pa=a;if(null!=a&&0===a.length)throw Error("ByteString should be constructed with non-empty values");}
Fc.prototype.Aa=function(){return null==this.pa};
Fc.prototype.sizeBytes=function(){Ec();var a=this.pa;null==a||Bc(a)||("string"===typeof a?a=yc(a):(La(a),a=null));return(a=null==a?a:this.pa=a)?a.length:0};var Gc="function"===typeof Symbol&&"symbol"===typeof Symbol()?Symbol():void 0;function Hc(a,b){Gc?a[Gc]|=b:void 0!==a.M?a.M|=b:Object.defineProperties(a,{M:{value:b,configurable:!0,writable:!0,enumerable:!1}})}
function Ic(a,b){Gc?a[Gc]&&(a[Gc]&=~b):void 0!==a.M&&(a.M&=~b)}
function G(a){var b;Gc?b=a[Gc]:b=a.M;return null==b?0:b}
function Jc(a,b){Gc?a[Gc]=b:void 0!==a.M?a.M=b:Object.defineProperties(a,{M:{value:b,configurable:!0,writable:!0,enumerable:!1}})}
function Kc(a){Hc(a,1);return a}
function Lc(a){return!!(G(a)&2)}
function Pc(a){Hc(a,16);return a}
function Qc(a){Hc(a,48);return a}
function Rc(a){var b=void 0===b?!0:b;var c=G(a);Jc(a,b?c|32:c&-33);return!!(c&32)}
function Sc(a,b){Jc(b,(G(a)|0)&-51)}
function Tc(a,b){Jc(b,(G(a)|18)&-41)}
;var Uc={};function Vc(a){return null!==a&&"object"===typeof a&&!Array.isArray(a)&&a.constructor===Object}
var Wc,Xc,Yc=[];Jc(Yc,23);Xc=Object.freeze(Yc);function Zc(a){if(Lc(a.v))throw Error("Cannot mutate an immutable Message");}
function $c(a){var b=a.length;(b=b?a[b-1]:void 0)&&Vc(b)?b.g=1:(b={},a.push((b.g=1,b)))}
;function ad(a){return a.displayName||a.name||"unknown type name"}
function bd(a,b){if(!(a instanceof b))throw Error("Expected instanceof "+ad(b)+" but got "+(a&&ad(a.constructor)));return a}
;var cd;function dd(a){switch(typeof a){case "number":return isFinite(a)?a:String(a);case "object":if(a)if(Array.isArray(a)){if(0!==(G(a)&128))return a=Array.prototype.slice.call(a),$c(a),a}else{if(Bc(a))return wc(a);if(a instanceof Fc){var b=a.pa;return null==b?"":"string"===typeof b?b:a.pa=wc(b)}}}return a}
;function ed(a,b,c,d){if(null!=a){if(Array.isArray(a))a=fd(a,b,c,void 0!==d);else if(Vc(a)){var e={},f;for(f in a)e[f]=ed(a[f],b,c,d);a=e}else a=b(a,d);return a}}
function fd(a,b,c,d){d=d?!!(G(a)&16):void 0;for(var e=Array.prototype.slice.call(a),f=0;f<e.length;f++)e[f]=ed(e[f],b,c,d);c(a,e);return e}
function gd(a){return a.Ba===Uc?a.toJSON():dd(a)}
function hd(a){if(!a)return a;if("object"===typeof a){if(Bc(a))return new Uint8Array(a);if(a.Ba===Uc)return a.clone()}return a}
function id(a,b){0!==(G(a)&128)&&$c(b)}
;function jd(a){return a.i||(a.i=a.v[a.j+a.W]={})}
function kd(a,b,c){return-1===b?null:b>=a.j?a.i?a.i[b]:void 0:c&&a.i&&(c=a.i[b],null!=c)?c:a.v[b+a.W]}
function I(a,b,c,d){Zc(a);return ld(a,b,c,d)}
function ld(a,b,c,d){a.l&&(a.l=void 0);if(b>=a.j||d)return jd(a)[b]=c,a;a.v[b+a.W]=c;(c=a.i)&&b in c&&delete c[b];return a}
function md(a,b){a&&Lc(b.v)&&Lc(a.v);return a}
function nd(a,b,c,d,e){var f=kd(a,b,d);Array.isArray(f)||(f=Xc);var g=G(f);g&1||Kc(f);if(e)g&2||Hc(f,2),c&1||Object.freeze(f);else{e=!(c&2);var h=g&2;c&1||!h?e&&g&16&&!h&&Ic(f,16):(f=Kc(Array.prototype.slice.call(f)),ld(a,b,f,d))}return f}
function od(a,b,c,d){Zc(a);(c=pd(a,c))&&c!==b&&null!=d&&ld(a,c,void 0,!1);ld(a,b,d)}
function pd(a,b){for(var c=0,d=0;d<b.length;d++){var e=b[d];null!=kd(a,e)&&(0!==c&&ld(a,c,void 0,!1),c=e)}return c}
function qd(a,b,c){var d=void 0===d?!1:d;var e=kd(a,c,d);var f=!1;var g=null==e||"object"!==typeof e||(f=Array.isArray(e))||e.Ba!==Uc?f?new b(e):void 0:e;g!==e&&null!=g&&(ld(a,c,g,d),Hc(g.v,G(a.v)&-33));b=md(g,a);if(null==b)return b;Lc(a.v)||(e=rd(b),e!==b&&(b=e,ld(a,c,b,d)));return md(b,a)}
function sd(a,b,c,d,e,f){a.h||(a.h={});var g=a.h[c],h=nd(a,c,3,d,f);if(g)f||(Object.isFrozen(g)?e||(g=Array.prototype.slice.call(g),a.h[c]=g):e&&Object.freeze(g));else{g=[];var k=!!(G(a.v)&16),l=Lc(h);!f&&l&&(h=Kc(Array.prototype.slice.call(h)),ld(a,c,h,d));d=l;for(var m=0;m<h.length;m++){var n=h[m];var r=b;var q=k,y=!1;y=void 0===y?!1:y;q=void 0===q?!1:q;r=Array.isArray(n)?new r(q?Pc(n):n):y?new r:void 0;void 0!==r&&(d=d||Lc(n),g.push(r),l&&Hc(r.v,2))}a.h[c]=g;a=h;b=!d;Object.isFrozen(a)||(c=G(a)|
33,Jc(a,b?c|8:c&-9));(f||e&&l)&&Hc(g,2);(f||e)&&Object.freeze(g)}return g}
function J(a,b,c,d){Zc(a);null!=d?bd(d,b):d=void 0;return ld(a,c,d)}
function td(a,b,c,d,e){Zc(a);null!=e?bd(e,b):e=void 0;od(a,c,d,e)}
function ud(a,b,c,d,e){Zc(a);if(null!=d){var f=Kc([]);for(var g=!1,h=0;h<d.length;h++)f[h]=bd(d[h],b).v,g=g||Lc(f[h]);a.h||(a.h={});a.h[c]=d;b=f;g?Ic(b,8):Hc(b,8)}else a.h&&(a.h[c]=void 0),f=Xc;return ld(a,c,f,e)}
function vd(a,b,c,d){Zc(a);var e=sd(a,c,b,void 0,!1,!1);c=null!=d?bd(d,c):new c;a=nd(a,b,2,void 0,!1);e.push(c);a.push(c.v);Lc(c.v)&&Ic(a,8)}
function wd(a,b){return kd(a,b)}
function xd(a,b){a=kd(a,b);return null==a?"":a}
;function yd(a,b){if(null!=a){if(Ac&&a instanceof Uint8Array)return a.length?new Fc(new Uint8Array(a)):Dc||(Dc=new Fc(null));if(Array.isArray(a)){if(Lc(a))return a;b&&(b=G(a),b=!(b&32)&&(!!(b&16)||0===b));if(b)return Hc(a,2),a;a=fd(a,yd,Tc);G(a)&4&&Object.freeze(a);return a}return a.Ba===Uc?zd(a):a}}
function Ad(a,b,c,d,e,f){(a=a.h&&a.h[c])?(d=0<a.length?a[0].constructor:void 0,Lc(a)&&Object.isFrozen(a)||(f=cb(a,zd),Tc(a,f),Object.freeze(f),a=f),ud(b,d,c,a,e)):I(b,c,yd(d,f),e)}
function zd(a){if(Lc(a.v))return a;a=Bd(a);Hc(a.v,2);return a}
function Bd(a){var b=a.v,c=Pc([]),d=a.constructor.h;d&&c.push(d);0!==(G(b)&128)&&$c(c);d=a.constructor;G(c);cd=c;c=new d(c);cd=void 0;a.ka&&(c.ka=a.ka.slice());d=!!(G(b)&16);for(var e=0;e<b.length;e++){var f=b[e];if(e===b.length-1&&Vc(f))for(var g in f){var h=+g;Number.isNaN(h)?jd(c)[h]=f[h]:Ad(a,c,h,f[g],!0,d)}else Ad(a,c,e-a.W,f,!1,d)}return c}
;function L(a,b,c){null==a&&(a=cd);cd=void 0;var d=this.constructor.i||0,e=0<d,f=this.constructor.h,g=!1,h=!1;if(null==a)a=Qc(f?[f]:[]),g=!0;else{if(!Array.isArray(a))throw Error();if(f&&f!==a[0])throw Error();if(g=!!(G(a)&16))h=Rc(a);if(e)if(0!==(G(a)&128))d=0;else if(0<a.length){var k=a[a.length-1];if(Vc(k)&&"g"in k){d=0;Hc(a,128);delete k.g;var l=!0,m;for(m in k){l=!1;break}l&&a.pop()}}}this.W=(f?0:-1)-d;this.h=void 0;this.v=a;Cd(this,b);if(!e){if(this.i&&"g"in this.i)throw Error('Unexpected "g" flag in sparse object of message that is not a group type.');
if(0!==(G(a)&128))throw Error();}if(c){var n=1|(g&&!h?16:0);a=function(r){if(Array.isArray(r)){var q=G(r);(q&n)===n||Object.isFrozen(r)||Jc(r,q|n)}};
for(b=0;b<c.length;b++)d=c[b],d<this.j?(d+=this.W,(e=this.v[d])?a(e):this.v[d]=Xc):(e=jd(this),(f=e[d])?a(f):e[d]=Xc)}}
L.prototype.toJSON=function(){var a=this.v,b;Wc?b=a:b=fd(a,gd,id);return b};
function Dd(a){Wc=!0;try{return JSON.stringify(a.toJSON(),Ed)}finally{Wc=!1}}
L.prototype.clone=function(){var a=fd(this.v,hd,Sc);Pc(a);cd=a;a=new this.constructor(a);cd=void 0;Fd(a,this);return a};
function rd(a){if(Lc(a.v)){var b=Bd(a);b.l=a;a=b}return a}
function Cd(a,b){var c=a.v.length,d=c-1;if(c&&(c=a.v[d],Vc(c))){a.i=c;a.j=d-a.W;return}void 0!==b&&-1<b?(a.j=Math.max(b,d+1-a.W),a.i=void 0):a.j=Number.MAX_VALUE}
L.prototype.Ba=Uc;L.prototype.toString=function(){return this.v.toString()};
function Ed(a,b){return dd(b)}
function Fd(a,b){b.ka&&(a.ka=b.ka.slice());var c=b.h;if(c){b=b.i;for(var d in c){var e=c[d];if(e){var f=!(!b||!b[d]),g=+d;if(Array.isArray(e)){if(e.length){var h=a,k=e[0].constructor,l=Lc(h.v);k=sd(h,k,g,f,l,l);f=nd(h,g,3,f,l);if(!l&&f&&!(G(f)&8)){for(l=0;l<k.length;l++)g=k[l],h=rd(g),g!==h&&(k[l]=h,f[l]=k[l].v);Hc(f,8)}for(l=0;l<Math.min(k.length,e.length);l++)Fd(k[l],e[l])}}else throw Error("unexpected object: type: "+La(e)+": "+e);}}}}
;var Gd=window;sb("csi.gstatic.com");sb("googleads.g.doubleclick.net");sb("partner.googleadservices.com");sb("pubads.g.doubleclick.net");sb("securepubads.g.doubleclick.net");sb("tpc.googlesyndication.com");function Hd(a,b){this.x=void 0!==a?a:0;this.y=void 0!==b?b:0}
p=Hd.prototype;p.clone=function(){return new Hd(this.x,this.y)};
p.equals=function(a){return a instanceof Hd&&(this==a?!0:this&&a?this.x==a.x&&this.y==a.y:!1)};
p.ceil=function(){this.x=Math.ceil(this.x);this.y=Math.ceil(this.y);return this};
p.floor=function(){this.x=Math.floor(this.x);this.y=Math.floor(this.y);return this};
p.round=function(){this.x=Math.round(this.x);this.y=Math.round(this.y);return this};function Id(a,b){this.width=a;this.height=b}
p=Id.prototype;p.clone=function(){return new Id(this.width,this.height)};
p.aspectRatio=function(){return this.width/this.height};
p.Aa=function(){return!(this.width*this.height)};
p.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
p.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
p.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};function Jd(){var a=document;var b="IFRAME";"application/xhtml+xml"===a.contentType&&(b=b.toLowerCase());return a.createElement(b)}
function Kd(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;function Ld(a){var b=C("window.location.href");null==a&&(a='Unknown Error of type "null/undefined"');if("string"===typeof a)return{message:a,name:"Unknown error",lineNumber:"Not available",fileName:b,stack:"Not available"};var c=!1;try{var d=a.lineNumber||a.line||"Not available"}catch(g){d="Not available",c=!0}try{var e=a.fileName||a.filename||a.sourceURL||z.$googDebugFname||b}catch(g){e="Not available",c=!0}b=Md(a);if(!(!c&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name)){c=a.message;if(null==
c){if(a.constructor&&a.constructor instanceof Function){if(a.constructor.name)c=a.constructor.name;else if(c=a.constructor,Nd[c])c=Nd[c];else{c=String(c);if(!Nd[c]){var f=/function\s+([^\(]+)/m.exec(c);Nd[c]=f?f[1]:"[Anonymous]"}c=Nd[c]}c='Unknown Error of type "'+c+'"'}else c="Unknown Error of unknown type";"function"===typeof a.toString&&Object.prototype.toString!==a.toString&&(c+=": "+a.toString())}return{message:c,name:a.name||"UnknownError",lineNumber:d,fileName:e,stack:b||"Not available"}}a.stack=
b;return{message:a.message,name:a.name,lineNumber:a.lineNumber,fileName:a.fileName,stack:a.stack}}
function Md(a,b){b||(b={});b[Od(a)]=!0;var c=a.stack||"";(a=a.cause)&&!b[Od(a)]&&(c+="\nCaused by: ",a.stack&&0==a.stack.indexOf(a.toString())||(c+="string"===typeof a?a:a.message+"\n"),c+=Md(a,b));return c}
function Od(a){var b="";"function"===typeof a.toString&&(b=""+a);return b+a.stack}
var Nd={};/*

 SPDX-License-Identifier: Apache-2.0
*/
var Pd;try{new URL("s://g"),Pd=!0}catch(a){Pd=!1}var Qd=Pd;function Rd(a,b){a.removeAttribute("srcdoc");if(b instanceof Hb)b instanceof Hb&&b.constructor===Hb?b=b.h:(La(b),b="type_error:SafeUrl");else{b:if(Qd){try{var c=new URL(b)}catch(d){c="https:";break b}c=c.protocol}else c:{c=document.createElement("a");try{c.href=b}catch(d){c=void 0;break c}c=c.protocol;c=":"===c||""===c?"https:":c}b="javascript:"!==c?b:void 0}void 0!==b&&(a.src=b);for(b="allow-same-origin allow-scripts allow-forms allow-popups allow-popups-to-escape-sandbox allow-storage-access-by-user-activation".split(" ");0<
a.sandbox.length;)a.sandbox.remove(a.sandbox.item(0));for(c=0;c<b.length;c++)a.sandbox.supports&&!a.sandbox.supports(b[c])||a.sandbox.add(b[c])}
;function Sd(a){this.yb=a}
function Td(a){return new Sd(function(b){return b.substr(0,a.length+1).toLowerCase()===a+":"})}
var Wd=[Td("data"),Td("http"),Td("https"),Td("mailto"),Td("ftp"),new Sd(function(a){return/^[^:]*([/?#]|$)/.test(a)})];
function Xd(a,b){b=void 0===b?Wd:b;for(var c=0;c<b.length;++c){var d=b[c];if(d instanceof Sd&&d.yb(a))return new Hb(a,Ib)}}
function Yd(a){var b=void 0===b?Wd:b;return Xd(a,b)||Jb}
;function Zd(a){var b=$d;if(b)for(var c in b)Object.prototype.hasOwnProperty.call(b,c)&&a(b[c],c,b)}
function ae(){var a=[];Zd(function(b){a.push(b)});
return a}
var $d={Ib:"allow-forms",Jb:"allow-modals",Kb:"allow-orientation-lock",Lb:"allow-pointer-lock",Mb:"allow-popups",Nb:"allow-popups-to-escape-sandbox",Ob:"allow-presentation",Pb:"allow-same-origin",Qb:"allow-scripts",Rb:"allow-top-navigation",Sb:"allow-top-navigation-by-user-activation"},be=ab(function(){return ae()});
function ce(){var a=de(),b={};E(be(),function(c){a.sandbox&&a.sandbox.supports&&a.sandbox.supports(c)&&(b[c]=!0)});
return b}
function de(){var a=void 0===a?document:a;return a.createElement("iframe")}
;var ee=(new Date).getTime();function fe(a){if(!a)return"";if(/^about:(?:blank|srcdoc)$/.test(a))return window.origin||"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));c=a.substring(0,a.indexOf("://"));if(!c)throw Error("URI is missing protocol: "+a);if("http"!==c&&"https"!==c&&"chrome-extension"!==c&&"moz-extension"!==c&&"file"!==c&&"android-app"!==
c&&"chrome-search"!==c&&"chrome-untrusted"!==c&&"chrome"!==c&&"app"!==c&&"devtools"!==c)throw Error("Invalid URI scheme in origin: "+c);a="";var d=b.indexOf(":");if(-1!=d){var e=b.substring(d+1);b=b.substring(0,d);if("http"===c&&"80"!==e||"https"===c&&"443"!==e)a=":"+e}return c+"://"+b+a}
;var ge="client_dev_domain client_dev_regex_map client_dev_root_url client_rollout_override expflag forcedCapability jsfeat jsmode mods".split(" ");ia(ge);function he(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;m=l=0}
function b(n){for(var r=g,q=0;64>q;q+=4)r[q/4]=n[q]<<24|n[q+1]<<16|n[q+2]<<8|n[q+3];for(q=16;80>q;q++)n=r[q-3]^r[q-8]^r[q-14]^r[q-16],r[q]=(n<<1|n>>>31)&4294967295;n=e[0];var y=e[1],A=e[2],H=e[3],K=e[4];for(q=0;80>q;q++){if(40>q)if(20>q){var M=H^y&(A^H);var P=1518500249}else M=y^A^H,P=1859775393;else 60>q?(M=y&A|H&(y|A),P=2400959708):(M=y^A^H,P=3395469782);M=((n<<5|n>>>27)&4294967295)+M+K+P+r[q]&4294967295;K=H;H=A;A=(y<<30|y>>>2)&4294967295;y=n;n=M}e[0]=e[0]+n&4294967295;e[1]=e[1]+y&4294967295;e[2]=
e[2]+A&4294967295;e[3]=e[3]+H&4294967295;e[4]=e[4]+K&4294967295}
function c(n,r){if("string"===typeof n){n=unescape(encodeURIComponent(n));for(var q=[],y=0,A=n.length;y<A;++y)q.push(n.charCodeAt(y));n=q}r||(r=n.length);q=0;if(0==l)for(;q+64<r;)b(n.slice(q,q+64)),q+=64,m+=64;for(;q<r;)if(f[l++]=n[q++],m++,64==l)for(l=0,b(f);q+64<r;)b(n.slice(q,q+64)),q+=64,m+=64}
function d(){var n=[],r=8*m;56>l?c(h,56-l):c(h,64-(l-56));for(var q=63;56<=q;q--)f[q]=r&255,r>>>=8;b(f);for(q=r=0;5>q;q++)for(var y=24;0<=y;y-=8)n[r++]=e[q]>>y&255;return n}
for(var e=[],f=[],g=[],h=[128],k=1;64>k;++k)h[k]=0;var l,m;a();return{reset:a,update:c,digest:d,pb:function(){for(var n=d(),r="",q=0;q<n.length;q++)r+="0123456789ABCDEF".charAt(Math.floor(n[q]/16))+"0123456789ABCDEF".charAt(n[q]%16);return r}}}
;function ie(a,b,c){var d=String(z.location.href);return d&&a&&b?[b,je(fe(d),a,c||null)].join(" "):null}
function je(a,b,c){var d=[],e=[];if(1==(Array.isArray(c)?2:1))return e=[b,a],E(d,function(h){e.push(h)}),ke(e.join(" "));
var f=[],g=[];E(c,function(h){g.push(h.key);f.push(h.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];E(d,function(h){e.push(h)});
a=ke(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function ke(a){var b=he();b.update(a);return b.pb().toLowerCase()}
;var le={};function me(a){this.h=a||{cookie:""}}
p=me.prototype;p.isEnabled=function(){if(!z.navigator.cookieEnabled)return!1;if(!this.Aa())return!0;this.set("TESTCOOKIESENABLED","1",{La:60});if("1"!==this.get("TESTCOOKIESENABLED"))return!1;this.remove("TESTCOOKIESENABLED");return!0};
p.set=function(a,b,c){var d=!1;if("object"===typeof c){var e=c.jc;d=c.secure||!1;var f=c.domain||void 0;var g=c.path||void 0;var h=c.La}if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');void 0===h&&(h=-1);c=f?";domain="+f:"";g=g?";path="+g:"";d=d?";secure":"";h=0>h?"":0==h?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(Date.now()+1E3*h)).toUTCString();this.h.cookie=a+"="+b+c+g+h+d+(null!=e?";samesite="+
e:"")};
p.get=function(a,b){for(var c=a+"=",d=(this.h.cookie||"").split(";"),e=0,f;e<d.length;e++){f=zb(d[e]);if(0==f.lastIndexOf(c,0))return f.slice(c.length);if(f==a)return""}return b};
p.remove=function(a,b,c){var d=void 0!==this.get(a);this.set(a,"",{La:0,path:b,domain:c});return d};
p.Aa=function(){return!this.h.cookie};
p.clear=function(){for(var a=(this.h.cookie||"").split(";"),b=[],c=[],d,e,f=0;f<a.length;f++)e=zb(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));for(a=b.length-1;0<=a;a--)this.remove(b[a])};
var ne=new me("undefined"==typeof document?null:document);function oe(a){return!!le.FPA_SAMESITE_PHASE2_MOD||!(void 0===a||!a)}
function pe(a,b,c,d){(a=z[a])||(a=(new me(document)).get(b));return a?ie(a,c,d):null}
function qe(a){var b=void 0===b?!1:b;var c=fe(String(z.location.href)),d=[];var e=b;e=void 0===e?!1:e;var f=z.__SAPISID||z.__APISID||z.__3PSAPISID||z.__OVERRIDE_SID;oe(e)&&(f=f||z.__1PSAPISID);if(f)e=!0;else{var g=new me(document);f=g.get("SAPISID")||g.get("APISID")||g.get("__Secure-3PAPISID")||g.get("SID");oe(e)&&(f=f||g.get("__Secure-1PAPISID"));e=!!f}e&&(e=(c=0==c.indexOf("https:")||0==c.indexOf("chrome-extension:")||0==c.indexOf("moz-extension:"))?z.__SAPISID:z.__APISID,e||(e=new me(document),
e=e.get(c?"SAPISID":"APISID")||e.get("__Secure-3PAPISID")),(e=e?ie(e,c?"SAPISIDHASH":"APISIDHASH",a):null)&&d.push(e),c&&oe(b)&&((b=pe("__1PSAPISID","__Secure-1PAPISID","SAPISID1PHASH",a))&&d.push(b),(a=pe("__3PSAPISID","__Secure-3PAPISID","SAPISID3PHASH",a))&&d.push(a)));return 0==d.length?null:d.join(" ")}
;function re(){this.j=this.j;this.o=this.o}
re.prototype.j=!1;re.prototype.dispose=function(){this.j||(this.j=!0,this.ca())};
re.prototype.ca=function(){if(this.o)for(;this.o.length;)this.o.shift()()};function se(a,b){this.type=a;this.h=this.target=b;this.defaultPrevented=this.j=!1}
se.prototype.stopPropagation=function(){this.j=!0};
se.prototype.preventDefault=function(){this.defaultPrevented=!0};var te=function(){if(!z.addEventListener||!Object.defineProperty)return!1;var a=!1,b=Object.defineProperty({},"passive",{get:function(){a=!0}});
try{z.addEventListener("test",function(){},b),z.removeEventListener("test",function(){},b)}catch(c){}return a}();function ue(a,b){se.call(this,a?a.type:"");this.relatedTarget=this.h=this.target=null;this.button=this.screenY=this.screenX=this.clientY=this.clientX=0;this.key="";this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.state=null;this.pointerId=0;this.pointerType="";this.i=null;a&&this.init(a,b)}
D(ue,se);var ve={2:"touch",3:"pen",4:"mouse"};
ue.prototype.init=function(a,b){var c=this.type=a.type,d=a.changedTouches&&a.changedTouches.length?a.changedTouches[0]:null;this.target=a.target||a.srcElement;this.h=b;if(b=a.relatedTarget){if(fc){a:{try{bc(b.nodeName);var e=!0;break a}catch(f){}e=!1}e||(b=null)}}else"mouseover"==c?b=a.fromElement:"mouseout"==c&&(b=a.toElement);this.relatedTarget=b;d?(this.clientX=void 0!==d.clientX?d.clientX:d.pageX,this.clientY=void 0!==d.clientY?d.clientY:d.pageY,this.screenX=d.screenX||0,this.screenY=d.screenY||
0):(this.clientX=void 0!==a.clientX?a.clientX:a.pageX,this.clientY=void 0!==a.clientY?a.clientY:a.pageY,this.screenX=a.screenX||0,this.screenY=a.screenY||0);this.button=a.button;this.keyCode=a.keyCode||0;this.key=a.key||"";this.charCode=a.charCode||("keypress"==c?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.pointerId=a.pointerId||0;this.pointerType="string"===typeof a.pointerType?a.pointerType:ve[a.pointerType]||"";this.state=a.state;
this.i=a;a.defaultPrevented&&ue.O.preventDefault.call(this)};
ue.prototype.stopPropagation=function(){ue.O.stopPropagation.call(this);this.i.stopPropagation?this.i.stopPropagation():this.i.cancelBubble=!0};
ue.prototype.preventDefault=function(){ue.O.preventDefault.call(this);var a=this.i;a.preventDefault?a.preventDefault():a.returnValue=!1};var we="closure_listenable_"+(1E6*Math.random()|0);var xe=0;function ye(a,b,c,d,e){this.listener=a;this.proxy=null;this.src=b;this.type=c;this.capture=!!d;this.za=e;this.key=++xe;this.la=this.va=!1}
function ze(a){a.la=!0;a.listener=null;a.proxy=null;a.src=null;a.za=null}
;function Ae(a){this.src=a;this.listeners={};this.h=0}
Ae.prototype.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.h++);var g=Be(a,b,d,e);-1<g?(b=a[g],c||(b.va=!1)):(b=new ye(b,this.src,f,!!d,e),b.va=c,a.push(b));return b};
Ae.prototype.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=Be(e,b,c,d);return-1<b?(ze(e[b]),Array.prototype.splice.call(e,b,1),0==e.length&&(delete this.listeners[a],this.h--),!0):!1};
function Ce(a,b){var c=b.type;c in a.listeners&&eb(a.listeners[c],b)&&(ze(b),0==a.listeners[c].length&&(delete a.listeners[c],a.h--))}
function Be(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.la&&f.listener==b&&f.capture==!!c&&f.za==d)return e}return-1}
;var De="closure_lm_"+(1E6*Math.random()|0),Ee={},Fe=0;function Ge(a,b,c,d,e){if(d&&d.once)He(a,b,c,d,e);else if(Array.isArray(b))for(var f=0;f<b.length;f++)Ge(a,b[f],c,d,e);else c=Ie(c),a&&a[we]?a.X(b,c,Pa(d)?!!d.capture:!!d,e):Je(a,b,c,!1,d,e)}
function Je(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var g=Pa(e)?!!e.capture:!!e,h=Ke(a);h||(a[De]=h=new Ae(a));c=h.add(b,c,d,g,f);if(!c.proxy){d=Le();c.proxy=d;d.src=a;d.listener=c;if(a.addEventListener)te||(e=g),void 0===e&&(e=!1),a.addEventListener(b.toString(),d,e);else if(a.attachEvent)a.attachEvent(Me(b.toString()),d);else if(a.addListener&&a.removeListener)a.addListener(d);else throw Error("addEventListener and attachEvent are unavailable.");Fe++}}
function Le(){function a(c){return b.call(a.src,a.listener,c)}
var b=Ne;return a}
function He(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)He(a,b[f],c,d,e);else c=Ie(c),a&&a[we]?a.h.add(String(b),c,!0,Pa(d)?!!d.capture:!!d,e):Je(a,b,c,!0,d,e)}
function Oe(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)Oe(a,b[f],c,d,e);else(d=Pa(d)?!!d.capture:!!d,c=Ie(c),a&&a[we])?a.h.remove(String(b),c,d,e):a&&(a=Ke(a))&&(b=a.listeners[b.toString()],a=-1,b&&(a=Be(b,c,d,e)),(c=-1<a?b[a]:null)&&Pe(c))}
function Pe(a){if("number"!==typeof a&&a&&!a.la){var b=a.src;if(b&&b[we])Ce(b.h,a);else{var c=a.type,d=a.proxy;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent?b.detachEvent(Me(c),d):b.addListener&&b.removeListener&&b.removeListener(d);Fe--;(c=Ke(b))?(Ce(c,a),0==c.h&&(c.src=null,b[De]=null)):ze(a)}}}
function Me(a){return a in Ee?Ee[a]:Ee[a]="on"+a}
function Ne(a,b){if(a.la)a=!0;else{b=new ue(b,this);var c=a.listener,d=a.za||a.src;a.va&&Pe(a);a=c.call(d,b)}return a}
function Ke(a){a=a[De];return a instanceof Ae?a:null}
var Qe="__closure_events_fn_"+(1E9*Math.random()>>>0);function Ie(a){if("function"===typeof a)return a;a[Qe]||(a[Qe]=function(b){return a.handleEvent(b)});
return a[Qe]}
;function Re(){re.call(this);this.h=new Ae(this);this.V=this;this.C=null}
D(Re,re);Re.prototype[we]=!0;Re.prototype.addEventListener=function(a,b,c,d){Ge(this,a,b,c,d)};
Re.prototype.removeEventListener=function(a,b,c,d){Oe(this,a,b,c,d)};
function Se(a,b){var c=a.C;if(c){var d=[];for(var e=1;c;c=c.C)d.push(c),++e}a=a.V;c=b.type||b;"string"===typeof b?b=new se(b,a):b instanceof se?b.target=b.target||a:(e=b,b=new se(c,a),pb(b,e));e=!0;if(d)for(var f=d.length-1;!b.j&&0<=f;f--){var g=b.h=d[f];e=Te(g,c,!0,b)&&e}b.j||(g=b.h=a,e=Te(g,c,!0,b)&&e,b.j||(e=Te(g,c,!1,b)&&e));if(d)for(f=0;!b.j&&f<d.length;f++)g=b.h=d[f],e=Te(g,c,!1,b)&&e}
Re.prototype.ca=function(){Re.O.ca.call(this);if(this.h){var a=this.h,b=0,c;for(c in a.listeners){for(var d=a.listeners[c],e=0;e<d.length;e++)++b,ze(d[e]);delete a.listeners[c];a.h--}}this.C=null};
Re.prototype.X=function(a,b,c,d){return this.h.add(String(a),b,!1,c,d)};
function Te(a,b,c,d){b=a.h.listeners[String(b)];if(!b)return!0;b=b.concat();for(var e=!0,f=0;f<b.length;++f){var g=b[f];if(g&&!g.la&&g.capture==c){var h=g.listener,k=g.za||g.src;g.va&&Ce(a.h,g);e=!1!==h.call(k,d)&&e}}return e&&!d.defaultPrevented}
;function Ue(a){Re.call(this);var b=this;this.G=this.l=0;this.J=null!=a?a:{L:function(e,f){return setTimeout(e,f)},
aa:function(e){clearTimeout(e)}};
var c,d;this.i=null!=(d=null==(c=window.navigator)?void 0:c.onLine)?d:!0;this.m=function(){return x(function(e){return w(e,Ve(b),0)})};
window.addEventListener("offline",this.m);window.addEventListener("online",this.m);this.G||We(this)}
v(Ue,Re);function Xe(){var a=Ye;Ue.h||(Ue.h=new Ue(a));return Ue.h}
Ue.prototype.dispose=function(){window.removeEventListener("offline",this.m);window.removeEventListener("online",this.m);this.J.aa(this.G);delete Ue.h};
Ue.prototype.I=function(){return this.i};
function We(a){a.G=a.J.L(function(){var b;return x(function(c){if(1==c.h)return a.i?(null==(b=window.navigator)?0:b.onLine)?c.s(3):w(c,Ve(a),3):w(c,Ve(a),3);We(a);c.h=0})},3E4)}
function Ve(a,b){return a.u?a.u:a.u=new Promise(function(c){var d,e,f,g;return x(function(h){switch(h.h){case 1:return d=window.AbortController?new window.AbortController:void 0,f=null==(e=d)?void 0:e.signal,g=!1,wa(h,2,3),d&&(a.l=a.J.L(function(){d.abort()},b||2E4)),w(h,fetch("/generate_204",{method:"HEAD",
signal:f}),5);case 5:g=!0;case 3:za(h);a.u=void 0;a.l&&(a.J.aa(a.l),a.l=0);g!==a.i&&(a.i=g,a.i?Se(a,"networkstatus-online"):Se(a,"networkstatus-offline"));c(g);Ba(h);break;case 2:ya(h),g=!1,h.s(3)}})})}
;function Ze(){this.data_=[];this.h=-1}
Ze.prototype.set=function(a,b){b=void 0===b?!0:b;0<=a&&52>a&&Number.isInteger(a)&&this.data_[a]!==b&&(this.data_[a]=b,this.h=-1)};
Ze.prototype.get=function(a){return!!this.data_[a]};
function $e(a){-1===a.h&&(a.h=db(a.data_,function(b,c,d){return c?b+Math.pow(2,d):b},0));
return a.h}
;function af(a){L.call(this,a,-1,bf)}
v(af,L);function cf(a,b){return I(a,2,b)}
function df(a,b){return I(a,3,b)}
function ef(a,b){return I(a,4,b)}
function ff(a,b){return I(a,5,b)}
function gf(a,b){return I(a,9,b)}
function hf(a,b){return ud(a,jf,10,b)}
function kf(a,b){return I(a,11,b)}
function lf(a,b){return I(a,1,b)}
function mf(a,b){return I(a,7,b)}
function jf(a){L.call(this,a)}
v(jf,L);var bf=[10,6];var nf="platform platformVersion architecture model uaFullVersion bitness fullVersionList wow64".split(" ");function of(a){var b;return null!=(b=a.google_tag_data)?b:a.google_tag_data={}}
function pf(a){var b,c;return"function"===typeof(null==(b=a.navigator)?void 0:null==(c=b.userAgentData)?void 0:c.getHighEntropyValues)}
function qf(){var a=window;if(!pf(a))return null;var b=of(a);if(b.uach_promise)return b.uach_promise;a=a.navigator.userAgentData.getHighEntropyValues(nf).then(function(c){null!=b.uach||(b.uach=c);return c});
return b.uach_promise=a}
function rf(a){var b;return kf(hf(ff(cf(lf(ef(mf(gf(df(new af,a.architecture||""),a.bitness||""),a.mobile||!1),a.model||""),a.platform||""),a.platformVersion||""),a.uaFullVersion||""),(null==(b=a.fullVersionList)?void 0:b.map(function(c){var d=new jf;d=I(d,1,c.brand);return I(d,2,c.version)}))||[]),a.wow64||!1)}
function sf(){var a,b;return null!=(b=null==(a=qf())?void 0:a.then(function(c){return rf(c)}))?b:null}
;function tf(a,b){this.j=a;this.l=b;this.i=0;this.h=null}
tf.prototype.get=function(){if(0<this.i){this.i--;var a=this.h;this.h=a.next;a.next=null}else a=this.j();return a};
function uf(a,b){a.l(b);100>a.i&&(a.i++,b.next=a.h,a.h=b)}
;var vf;function wf(){var a=z.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!F("Presto")&&(a=function(){var e=Jd();e.style.display="none";document.documentElement.appendChild(e);var f=e.contentWindow;e=f.document;e.open();e.close();var g="callImmediate"+Math.random(),h="file:"==f.location.protocol?"*":f.location.protocol+"//"+f.location.host;e=Va(function(k){if(("*"==h||k.origin==h)&&k.data==g)this.port1.onmessage()},this);
f.addEventListener("message",e,!1);this.port1={};this.port2={postMessage:function(){f.postMessage(g,h)}}});
if("undefined"!==typeof a&&!F("Trident")&&!F("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var e=c.Sa;c.Sa=null;e()}};
return function(e){d.next={Sa:e};d=d.next;b.port2.postMessage(0)}}return function(e){z.setTimeout(e,0)}}
;function xf(){this.i=this.h=null}
xf.prototype.add=function(a,b){var c=yf.get();c.set(a,b);this.i?this.i.next=c:this.h=c;this.i=c};
xf.prototype.remove=function(){var a=null;this.h&&(a=this.h,this.h=this.h.next,this.h||(this.i=null),a.next=null);return a};
var yf=new tf(function(){return new zf},function(a){return a.reset()});
function zf(){this.next=this.scope=this.h=null}
zf.prototype.set=function(a,b){this.h=a;this.scope=b;this.next=null};
zf.prototype.reset=function(){this.next=this.scope=this.h=null};var Af,Bf=!1,Cf=new xf;function Df(a,b){Af||Ef();Bf||(Af(),Bf=!0);Cf.add(a,b)}
function Ef(){if(z.Promise&&z.Promise.resolve){var a=z.Promise.resolve(void 0);Af=function(){a.then(Ff)}}else Af=function(){var b=Ff;
"function"!==typeof z.setImmediate||z.Window&&z.Window.prototype&&!F("Edge")&&z.Window.prototype.setImmediate==z.setImmediate?(vf||(vf=wf()),vf(b)):z.setImmediate(b)}}
function Ff(){for(var a;a=Cf.remove();){try{a.h.call(a.scope)}catch(b){$b(b)}uf(yf,a)}Bf=!1}
;function Gf(a,b){this.h=a[z.Symbol.iterator]();this.i=b}
Gf.prototype[Symbol.iterator]=function(){return this};
Gf.prototype.next=function(){var a=this.h.next();return{value:a.done?void 0:this.i.call(void 0,a.value),done:a.done}};
function Hf(a,b){return new Gf(a,b)}
;function If(){this.blockSize=-1}
;function Jf(){this.blockSize=-1;this.blockSize=64;this.h=[];this.o=[];this.m=[];this.j=[];this.j[0]=128;for(var a=1;a<this.blockSize;++a)this.j[a]=0;this.l=this.i=0;this.reset()}
D(Jf,If);Jf.prototype.reset=function(){this.h[0]=1732584193;this.h[1]=4023233417;this.h[2]=2562383102;this.h[3]=271733878;this.h[4]=3285377520;this.l=this.i=0};
function Kf(a,b,c){c||(c=0);var d=a.m;if("string"===typeof b)for(var e=0;16>e;e++)d[e]=b.charCodeAt(c)<<24|b.charCodeAt(c+1)<<16|b.charCodeAt(c+2)<<8|b.charCodeAt(c+3),c+=4;else for(e=0;16>e;e++)d[e]=b[c]<<24|b[c+1]<<16|b[c+2]<<8|b[c+3],c+=4;for(e=16;80>e;e++){var f=d[e-3]^d[e-8]^d[e-14]^d[e-16];d[e]=(f<<1|f>>>31)&4294967295}b=a.h[0];c=a.h[1];var g=a.h[2],h=a.h[3],k=a.h[4];for(e=0;80>e;e++){if(40>e)if(20>e){f=h^c&(g^h);var l=1518500249}else f=c^g^h,l=1859775393;else 60>e?(f=c&g|h&(c|g),l=2400959708):
(f=c^g^h,l=3395469782);f=(b<<5|b>>>27)+f+k+l+d[e]&4294967295;k=h;h=g;g=(c<<30|c>>>2)&4294967295;c=b;b=f}a.h[0]=a.h[0]+b&4294967295;a.h[1]=a.h[1]+c&4294967295;a.h[2]=a.h[2]+g&4294967295;a.h[3]=a.h[3]+h&4294967295;a.h[4]=a.h[4]+k&4294967295}
Jf.prototype.update=function(a,b){if(null!=a){void 0===b&&(b=a.length);for(var c=b-this.blockSize,d=0,e=this.o,f=this.i;d<b;){if(0==f)for(;d<=c;)Kf(this,a,d),d+=this.blockSize;if("string"===typeof a)for(;d<b;){if(e[f]=a.charCodeAt(d),++f,++d,f==this.blockSize){Kf(this,e);f=0;break}}else for(;d<b;)if(e[f]=a[d],++f,++d,f==this.blockSize){Kf(this,e);f=0;break}}this.i=f;this.l+=b}};
Jf.prototype.digest=function(){var a=[],b=8*this.l;56>this.i?this.update(this.j,56-this.i):this.update(this.j,this.blockSize-(this.i-56));for(var c=this.blockSize-1;56<=c;c--)this.o[c]=b&255,b/=256;Kf(this,this.o);for(c=b=0;5>c;c++)for(var d=24;0<=d;d-=8)a[b]=this.h[c]>>d&255,++b;return a};function Lf(){}
Lf.prototype.next=function(){return Mf};
var Mf={done:!0,value:void 0};function Nf(a){return{value:a,done:!1}}
Lf.prototype.K=function(){return this};function Of(a){if(a instanceof Pf||a instanceof Qf||a instanceof Rf)return a;if("function"==typeof a.next)return new Pf(function(){return a});
if("function"==typeof a[Symbol.iterator])return new Pf(function(){return a[Symbol.iterator]()});
if("function"==typeof a.K)return new Pf(function(){return a.K()});
throw Error("Not an iterator or iterable.");}
function Pf(a){this.i=a}
Pf.prototype.K=function(){return new Qf(this.i())};
Pf.prototype[Symbol.iterator]=function(){return new Rf(this.i())};
Pf.prototype.h=function(){return new Rf(this.i())};
function Qf(a){this.i=a}
v(Qf,Lf);Qf.prototype.next=function(){return this.i.next()};
Qf.prototype[Symbol.iterator]=function(){return new Rf(this.i)};
Qf.prototype.h=function(){return new Rf(this.i)};
function Rf(a){Pf.call(this,function(){return a});
this.j=a}
v(Rf,Pf);Rf.prototype.next=function(){return this.j.next()};function Sf(a,b){this.i={};this.h=[];this.j=this.size=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a)if(a instanceof Sf)for(c=Tf(a),d=0;d<c.length;d++)this.set(c[d],a.get(c[d]));else for(d in a)this.set(d,a[d])}
function Tf(a){Uf(a);return a.h.concat()}
p=Sf.prototype;p.has=function(a){return Vf(this.i,a)};
p.equals=function(a,b){if(this===a)return!0;if(this.size!=a.size)return!1;b=b||Wf;Uf(this);for(var c,d=0;c=this.h[d];d++)if(!b(this.get(c),a.get(c)))return!1;return!0};
function Wf(a,b){return a===b}
p.Aa=function(){return 0==this.size};
p.clear=function(){this.i={};this.j=this.size=this.h.length=0};
p.remove=function(a){return this.delete(a)};
p.delete=function(a){return Vf(this.i,a)?(delete this.i[a],--this.size,this.j++,this.h.length>2*this.size&&Uf(this),!0):!1};
function Uf(a){if(a.size!=a.h.length){for(var b=0,c=0;b<a.h.length;){var d=a.h[b];Vf(a.i,d)&&(a.h[c++]=d);b++}a.h.length=c}if(a.size!=a.h.length){var e={};for(c=b=0;b<a.h.length;)d=a.h[b],Vf(e,d)||(a.h[c++]=d,e[d]=1),b++;a.h.length=c}}
p.get=function(a,b){return Vf(this.i,a)?this.i[a]:b};
p.set=function(a,b){Vf(this.i,a)||(this.size+=1,this.h.push(a),this.j++);this.i[a]=b};
p.forEach=function(a,b){for(var c=Tf(this),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};
p.clone=function(){return new Sf(this)};
p.keys=function(){return Of(this.K(!0)).h()};
p.values=function(){return Of(this.K(!1)).h()};
p.entries=function(){var a=this;return Hf(this.keys(),function(b){return[b,a.get(b)]})};
p.K=function(a){Uf(this);var b=0,c=this.j,d=this,e=new Lf;e.next=function(){if(c!=d.j)throw Error("The map has changed since the iterator was created");if(b>=d.h.length)return Mf;var f=d.h[b++];return Nf(a?f:d.i[f])};
return e};
function Vf(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
;var tg=z.JSON.stringify;function ug(){var a=this;this.promise=new Promise(function(b,c){a.resolve=b;a.reject=c})}
;function vg(a){this.h=0;this.u=void 0;this.l=this.i=this.j=null;this.o=this.m=!1;if(a!=$a)try{var b=this;a.call(void 0,function(c){wg(b,2,c)},function(c){wg(b,3,c)})}catch(c){wg(this,3,c)}}
function xg(){this.next=this.context=this.i=this.j=this.h=null;this.l=!1}
xg.prototype.reset=function(){this.context=this.i=this.j=this.h=null;this.l=!1};
var yg=new tf(function(){return new xg},function(a){a.reset()});
function zg(a,b,c){var d=yg.get();d.j=a;d.i=b;d.context=c;return d}
vg.prototype.then=function(a,b,c){return Ag(this,"function"===typeof a?a:null,"function"===typeof b?b:null,c)};
vg.prototype.$goog_Thenable=!0;vg.prototype.cancel=function(a){if(0==this.h){var b=new Bg(a);Df(function(){Cg(this,b)},this)}};
function Cg(a,b){if(0==a.h)if(a.j){var c=a.j;if(c.i){for(var d=0,e=null,f=null,g=c.i;g&&(g.l||(d++,g.h==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.h&&1==d?Cg(c,b):(f?(d=f,d.next==c.l&&(c.l=d),d.next=d.next.next):Dg(c),Eg(c,e,3,b)))}a.j=null}else wg(a,3,b)}
function Fg(a,b){a.i||2!=a.h&&3!=a.h||Gg(a);a.l?a.l.next=b:a.i=b;a.l=b}
function Ag(a,b,c,d){var e=zg(null,null,null);e.h=new vg(function(f,g){e.j=b?function(h){try{var k=b.call(d,h);f(k)}catch(l){g(l)}}:f;
e.i=c?function(h){try{var k=c.call(d,h);void 0===k&&h instanceof Bg?g(h):f(k)}catch(l){g(l)}}:g});
e.h.j=a;Fg(a,e);return e.h}
vg.prototype.G=function(a){this.h=0;wg(this,2,a)};
vg.prototype.V=function(a){this.h=0;wg(this,3,a)};
function wg(a,b,c){if(0==a.h){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.h=1;a:{var d=c,e=a.G,f=a.V;if(d instanceof vg){Fg(d,zg(e||$a,f||null,a));var g=!0}else{if(d)try{var h=!!d.$goog_Thenable}catch(l){h=!1}else h=!1;if(h)d.then(e,f,a),g=!0;else{if(Pa(d))try{var k=d.then;if("function"===typeof k){Hg(d,k,e,f,a);g=!0;break a}}catch(l){f.call(a,l);g=!0;break a}g=!1}}}g||(a.u=c,a.h=b,a.j=null,Gg(a),3!=b||c instanceof Bg||Ig(a,c))}}
function Hg(a,b,c,d,e){function f(k){h||(h=!0,d.call(e,k))}
function g(k){h||(h=!0,c.call(e,k))}
var h=!1;try{b.call(a,g,f)}catch(k){f(k)}}
function Gg(a){a.m||(a.m=!0,Df(a.C,a))}
function Dg(a){var b=null;a.i&&(b=a.i,a.i=b.next,b.next=null);a.i||(a.l=null);return b}
vg.prototype.C=function(){for(var a;a=Dg(this);)Eg(this,a,this.h,this.u);this.m=!1};
function Eg(a,b,c,d){if(3==c&&b.i&&!b.l)for(;a&&a.o;a=a.j)a.o=!1;if(b.h)b.h.j=null,Jg(b,c,d);else try{b.l?b.j.call(b.context):Jg(b,c,d)}catch(e){Kg.call(null,e)}uf(yg,b)}
function Jg(a,b,c){2==b?a.j.call(a.context,c):a.i&&a.i.call(a.context,c)}
function Ig(a,b){a.o=!0;Df(function(){a.o&&Kg.call(null,b)})}
var Kg=$b;function Bg(a){Xa.call(this,a)}
D(Bg,Xa);Bg.prototype.name="cancel";function N(a){re.call(this);this.u=1;this.l=[];this.m=0;this.h=[];this.i={};this.C=!!a}
D(N,re);p=N.prototype;p.subscribe=function(a,b,c){var d=this.i[a];d||(d=this.i[a]=[]);var e=this.u;this.h[e]=a;this.h[e+1]=b;this.h[e+2]=c;this.u=e+3;d.push(e);return e};
function Lg(a,b,c){var d=Mg;if(a=d.i[a]){var e=d.h;(a=a.find(function(f){return e[f+1]==b&&e[f+2]==c}))&&d.oa(a)}}
p.oa=function(a){var b=this.h[a];if(b){var c=this.i[b];0!=this.m?(this.l.push(a),this.h[a+1]=function(){}):(c&&eb(c,a),delete this.h[a],delete this.h[a+1],delete this.h[a+2])}return!!b};
p.fa=function(a,b){var c=this.i[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.C)for(e=0;e<c.length;e++){var g=c[e];Ng(this.h[g+1],this.h[g+2],d)}else{this.m++;try{for(e=0,f=c.length;e<f&&!this.j;e++)g=c[e],this.h[g+1].apply(this.h[g+2],d)}finally{if(this.m--,0<this.l.length&&0==this.m)for(;c=this.l.pop();)this.oa(c)}}return 0!=e}return!1};
function Ng(a,b,c){Df(function(){a.apply(b,c)})}
p.clear=function(a){if(a){var b=this.i[a];b&&(b.forEach(this.oa,this),delete this.i[a])}else this.h.length=0,this.i={}};
p.ca=function(){N.O.ca.call(this);this.clear();this.l.length=0};function Og(a){this.h=a}
Og.prototype.set=function(a,b){void 0===b?this.h.remove(a):this.h.set(a,tg(b))};
Og.prototype.get=function(a){try{var b=this.h.get(a)}catch(c){return}if(null!==b)try{return JSON.parse(b)}catch(c){throw"Storage: Invalid value was encountered";}};
Og.prototype.remove=function(a){this.h.remove(a)};function Pg(a){this.h=a}
D(Pg,Og);function Qg(a){this.data=a}
function Rg(a){return void 0===a||a instanceof Qg?a:new Qg(a)}
Pg.prototype.set=function(a,b){Pg.O.set.call(this,a,Rg(b))};
Pg.prototype.i=function(a){a=Pg.O.get.call(this,a);if(void 0===a||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
Pg.prototype.get=function(a){if(a=this.i(a)){if(a=a.data,void 0===a)throw"Storage: Invalid value was encountered";}else a=void 0;return a};function Sg(a){this.h=a}
D(Sg,Pg);Sg.prototype.set=function(a,b,c){if(b=Rg(b)){if(c){if(c<Date.now()){Sg.prototype.remove.call(this,a);return}b.expiration=c}b.creation=Date.now()}Sg.O.set.call(this,a,b)};
Sg.prototype.i=function(a){var b=Sg.O.i.call(this,a);if(b){var c=b.creation,d=b.expiration;if(d&&d<Date.now()||c&&c>Date.now())Sg.prototype.remove.call(this,a);else return b}};function Tg(){}
;function Ug(){}
D(Ug,Tg);Ug.prototype[Symbol.iterator]=function(){return Of(this.K(!0)).h()};
Ug.prototype.clear=function(){var a=Array.from(this);a=u(a);for(var b=a.next();!b.done;b=a.next())this.remove(b.value)};function Vg(a){this.h=a}
D(Vg,Ug);p=Vg.prototype;p.set=function(a,b){try{this.h.setItem(a,b)}catch(c){if(0==this.h.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
p.get=function(a){a=this.h.getItem(a);if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
p.remove=function(a){this.h.removeItem(a)};
p.K=function(a){var b=0,c=this.h,d=new Lf;d.next=function(){if(b>=c.length)return Mf;var e=c.key(b++);if(a)return Nf(e);e=c.getItem(e);if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Nf(e)};
return d};
p.clear=function(){this.h.clear()};
p.key=function(a){return this.h.key(a)};function Wg(){var a=null;try{a=window.localStorage||null}catch(b){}this.h=a}
D(Wg,Vg);function Xg(a,b){this.i=a;this.h=null;var c;if(c=dc)c=!(9<=Number(pc));if(c){Yg||(Yg=new Sf);this.h=Yg.get(a);this.h||(b?this.h=document.getElementById(b):(this.h=document.createElement("userdata"),this.h.addBehavior("#default#userData"),document.body.appendChild(this.h)),Yg.set(a,this.h));try{this.h.load(this.i)}catch(d){this.h=null}}}
D(Xg,Ug);var Zg={".":".2E","!":".21","~":".7E","*":".2A","'":".27","(":".28",")":".29","%":"."},Yg=null;function $g(a){return"_"+encodeURIComponent(a).replace(/[.!~*'()%]/g,function(b){return Zg[b]})}
p=Xg.prototype;p.set=function(a,b){this.h.setAttribute($g(a),b);ah(this)};
p.get=function(a){a=this.h.getAttribute($g(a));if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
p.remove=function(a){this.h.removeAttribute($g(a));ah(this)};
p.K=function(a){var b=0,c=this.h.XMLDocument.documentElement.attributes,d=new Lf;d.next=function(){if(b>=c.length)return Mf;var e=c[b++];if(a)return Nf(decodeURIComponent(e.nodeName.replace(/\./g,"%")).slice(1));e=e.nodeValue;if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Nf(e)};
return d};
p.clear=function(){for(var a=this.h.XMLDocument.documentElement,b=a.attributes.length;0<b;b--)a.removeAttribute(a.attributes[b-1].nodeName);ah(this)};
function ah(a){try{a.h.save(a.i)}catch(b){throw"Storage mechanism: Quota exceeded";}}
;function bh(a,b){this.i=a;this.h=b+"::"}
D(bh,Ug);bh.prototype.set=function(a,b){this.i.set(this.h+a,b)};
bh.prototype.get=function(a){return this.i.get(this.h+a)};
bh.prototype.remove=function(a){this.i.remove(this.h+a)};
bh.prototype.K=function(a){var b=this.i[Symbol.iterator](),c=this,d=new Lf;d.next=function(){var e=b.next();if(e.done)return e;for(e=e.value;e.slice(0,c.h.length)!=c.h;){e=b.next();if(e.done)return e;e=e.value}return Nf(a?e.slice(c.h.length):c.i.get(e))};
return d};function ch(a){this.name=a}
;var dh=new ch("rawColdConfigGroup");var eh=new ch("rawHotConfigGroup");function fh(a){L.call(this,a)}
v(fh,L);fh.prototype.getKey=function(){return kd(this,1)};
fh.prototype.S=function(){return wd(this,2===pd(this,gh)?2:-1)};
var gh=[2,3,4,5,6];function hh(a){L.call(this,a)}
v(hh,L);function ih(a){L.call(this,a)}
v(ih,L);function jh(a){L.call(this,a,-1,kh)}
v(jh,L);var kh=[2];function lh(a){L.call(this,a,-1,mh)}
v(lh,L);lh.prototype.getPlayerType=function(){return kd(this,36)};
lh.prototype.setHomeGroupInfo=function(a){return J(this,jh,81,a)};
var mh=[9,66,24,32,86,100,101];function nh(a){L.call(this,a,-1,oh)}
v(nh,L);var oh=[15,26,28];function ph(a){L.call(this,a,-1,qh)}
v(ph,L);var qh=[5];function rh(a){L.call(this,a)}
v(rh,L);function sh(a){L.call(this,a,-1,th)}
v(sh,L);sh.prototype.setSafetyMode=function(a){return I(this,5,a)};
var th=[12];function uh(a){L.call(this,a,-1,vh)}
v(uh,L);var vh=[12];var wh={Xb:"WEB_DISPLAY_MODE_UNKNOWN",Tb:"WEB_DISPLAY_MODE_BROWSER",Vb:"WEB_DISPLAY_MODE_MINIMAL_UI",Wb:"WEB_DISPLAY_MODE_STANDALONE",Ub:"WEB_DISPLAY_MODE_FULLSCREEN"};function xh(a){L.call(this,a,-1,yh)}
v(xh,L);function zh(a){L.call(this,a)}
v(zh,L);zh.prototype.getKey=function(){return xd(this,1)};
zh.prototype.S=function(){return xd(this,2)};
var yh=[4,5];function Ah(a){L.call(this,a)}
v(Ah,L);function Bh(a){L.call(this,a)}
v(Bh,L);var Ch=[2,3,4];function Dh(a){L.call(this,a)}
v(Dh,L);function Eh(a){L.call(this,a)}
v(Eh,L);function Fh(a){L.call(this,a)}
v(Fh,L);function Gh(a){L.call(this,a,-1,Hh)}
v(Gh,L);var Hh=[10,17];function Ih(a){L.call(this,a)}
v(Ih,L);function Jh(a){L.call(this,a)}
v(Jh,L);function Kh(a){L.call(this,a)}
v(Kh,L);function Lh(a){L.call(this,a,449)}
v(Lh,L);
var Mh=[23,24,11,6,7,5,2,3,13,20,21,22,28,32,37,229,241,45,59,225,288,72,73,78,208,156,202,215,74,76,79,80,111,85,91,97,100,102,105,119,126,127,136,146,148,151,157,158,159,163,164,168,444,176,222,383,177,178,179,411,184,188,189,190,191,193,194,195,196,197,198,199,200,201,402,320,203,204,205,206,258,259,260,261,327,209,219,226,227,232,233,234,240,244,247,248,249,251,256,257,266,254,255,270,272,278,291,293,300,304,308,309,310,311,313,314,319,321,323,324,328,330,331,332,334,337,338,340,344,348,350,351,
352,353,354,355,356,357,358,361,363,364,368,369,370,373,374,375,378,380,381,388,389,403,410,412,429,413,414,415,416,417,418,430,423,424,425,426,427,431,117,439,441,448];function Nh(a){L.call(this,a)}
v(Nh,L);function Oh(a){L.call(this,a)}
v(Oh,L);Oh.prototype.getPlaylistId=function(){return wd(this,2===pd(this,Ph)?2:-1)};
var Ph=[1,2];function Qh(a){L.call(this,a,-1,Rh)}
v(Qh,L);var Rh=[3];var Sh=z.window,Th,Uh,Vh=(null==Sh?void 0:null==(Th=Sh.yt)?void 0:Th.config_)||(null==Sh?void 0:null==(Uh=Sh.ytcfg)?void 0:Uh.data_)||{};B("yt.config_",Vh);function Wh(){var a=arguments;1<a.length?Vh[a[0]]=a[1]:1===a.length&&Object.assign(Vh,a[0])}
function O(a,b){return a in Vh?Vh[a]:b}
function Xh(){return O("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS")}
function Yh(){var a=Vh.EXPERIMENT_FLAGS;return a?a.web_disable_gel_stp_ecatcher_killswitch:void 0}
;var Zh=[];function $h(a){Zh.forEach(function(b){return b(a)})}
function ai(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){bi(b)}}:a}
function bi(a,b,c,d){var e=C("yt.logging.errors.log");e?e(a,"ERROR",b,c,d):(e=O("ERRORS",[]),e.push([a,"ERROR",b,c,d]),Wh("ERRORS",e));$h(a)}
function ci(a,b,c,d){var e=C("yt.logging.errors.log");e?e(a,"WARNING",b,c,d):(e=O("ERRORS",[]),e.push([a,"WARNING",b,c,d]),Wh("ERRORS",e))}
;var di=0;B("ytDomDomGetNextId",C("ytDomDomGetNextId")||function(){return++di});var ei={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function fi(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.ctrlKey=this.altKey=!1;this.clientY=this.clientX=0;this.changedTouches=this.touches=null;try{if(a=a||window.event){this.event=a;for(var b in a)b in ei||(this[b]=a[b]);var c=a.target||a.srcElement;c&&3==c.nodeType&&(c=c.parentNode);this.target=c;var d=a.relatedTarget;if(d)try{d=d.nodeName?d:null}catch(e){d=null}else"mouseover"==
this.type?d=a.fromElement:"mouseout"==this.type&&(d=a.toElement);this.relatedTarget=d;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.h=a.pageX;this.i=a.pageY}}catch(e){}}
function gi(a){if(document.body&&document.documentElement){var b=document.body.scrollTop+document.documentElement.scrollTop;a.h=a.clientX+(document.body.scrollLeft+document.documentElement.scrollLeft);a.i=a.clientY+b}}
fi.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
fi.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
fi.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var kb=z.ytEventsEventsListeners||{};B("ytEventsEventsListeners",kb);var hi=z.ytEventsEventsCounter||{count:0};B("ytEventsEventsCounter",hi);
function ii(a,b,c,d){d=void 0===d?{}:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return jb(function(e){var f="boolean"===typeof e[4]&&e[4]==!!d,g=Pa(e[4])&&Pa(d)&&lb(e[4],d);return!!e.length&&e[0]==a&&e[1]==b&&e[2]==c&&(f||g)})}
function ji(a){a&&("string"==typeof a&&(a=[a]),E(a,function(b){if(b in kb){var c=kb[b],d=c[0],e=c[1],f=c[3];c=c[4];d.removeEventListener?ki()||"boolean"===typeof c?d.removeEventListener(e,f,c):d.removeEventListener(e,f,!!c.capture):d.detachEvent&&d.detachEvent("on"+e,f);delete kb[b]}}))}
var ki=ab(function(){var a=!1;try{var b=Object.defineProperty({},"capture",{get:function(){a=!0}});
window.addEventListener("test",null,b)}catch(c){}return a});
function li(a,b,c,d){d=void 0===d?{}:d;if(!a||!a.addEventListener&&!a.attachEvent)return"";var e=ii(a,b,c,d);if(e)return e;e=++hi.count+"";var f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document);var g=f?function(h){h=new fi(h);if(!Kd(h.relatedTarget,function(k){return k==a}))return h.currentTarget=a,h.type=b,c.call(a,h)}:function(h){h=new fi(h);
h.currentTarget=a;return c.call(a,h)};
g=ai(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),ki()||"boolean"===typeof d?a.addEventListener(b,g,d):a.addEventListener(b,g,!!d.capture)):a.attachEvent("on"+b,g);kb[e]=[a,b,c,g,d];return e}
;function mi(a,b){"function"===typeof a&&(a=ai(a));return window.setTimeout(a,b)}
function ni(a,b){"function"===typeof a&&(a=ai(a));return window.setInterval(a,b)}
;var oi=/^[\w.]*$/,pi={q:!0,search_query:!0};function qi(a,b){b=a.split(b);for(var c={},d=0,e=b.length;d<e;d++){var f=b[d].split("=");if(1==f.length&&f[0]||2==f.length)try{var g=ri(f[0]||""),h=ri(f[1]||"");g in c?Array.isArray(c[g])?hb(c[g],h):c[g]=[c[g],h]:c[g]=h}catch(n){var k=n,l=f[0],m=String(qi);k.args=[{key:l,value:f[1],query:a,method:si==m?"unchanged":m}];pi.hasOwnProperty(l)||ci(k)}}return c}
var si=String(qi);function ti(a){var b=[];ib(a,function(c,d){var e=encodeURIComponent(String(d)),f;Array.isArray(c)?f=c:f=[c];E(f,function(g){""==g?b.push(e):b.push(e+"="+encodeURIComponent(String(g)))})});
return b.join("&")}
function ui(a){"?"==a.charAt(0)&&(a=a.substr(1));return qi(a,"&")}
function vi(a,b,c){var d=a.split("#",2);a=d[0];d=1<d.length?"#"+d[1]:"";var e=a.split("?",2);a=e[0];e=ui(e[1]||"");for(var f in b)!c&&null!==e&&f in e||(e[f]=b[f]);b=a;a=Tb(e);a?(c=b.indexOf("#"),0>c&&(c=b.length),f=b.indexOf("?"),0>f||f>c?(f=c,e=""):e=b.substring(f+1,c),b=[b.slice(0,f),e,b.slice(c)],c=b[1],b[1]=a?c?c+"&"+a:a:c,a=b[0]+(b[1]?"?"+b[1]:"")+b[2]):a=b;return a+d}
function wi(a){if(!b)var b=window.location.href;var c=a.match(Ob)[1]||null,d=Qb(a);c&&d?(a=a.match(Ob),b=b.match(Ob),a=a[3]==b[3]&&a[1]==b[1]&&a[4]==b[4]):a=d?Qb(b)==d&&(Number(b.match(Ob)[4]||null)||null)==(Number(a.match(Ob)[4]||null)||null):!0;return a}
function ri(a){return a&&a.match(oi)?a:decodeURIComponent(a.replace(/\+/g," "))}
;function Q(a){a=xi(a);return"string"===typeof a&&"false"===a?!1:!!a}
function yi(a,b){a=xi(a);return void 0===a&&void 0!==b?b:Number(a||0)}
function xi(a){var b=O("EXPERIMENTS_FORCED_FLAGS",{})||{};return void 0!==b[a]?b[a]:O("EXPERIMENT_FLAGS",{})[a]}
function zi(){for(var a=[],b=O("EXPERIMENTS_FORCED_FLAGS",{}),c=u(Object.keys(b)),d=c.next();!d.done;d=c.next())d=d.value,a.push({key:d,value:String(b[d])});c=O("EXPERIMENT_FLAGS",{});var e=u(Object.keys(c));for(d=e.next();!d.done;d=e.next())d=d.value,d.startsWith("force_")&&void 0===b[d]&&a.push({key:d,value:String(c[d])});return a}
;function Ai(a){var b=Bi;a=void 0===a?C("yt.ads.biscotti.lastId_")||"":a;var c=Object,d=c.assign,e={};e.dt=ee;e.flash="0";a:{try{var f=b.h.top.location.href}catch(X){f=2;break a}f=f?f===b.i.location.href?0:1:2}e=(e.frm=f,e);try{e.u_tz=-(new Date).getTimezoneOffset();var g=void 0===g?Gd:g;try{var h=g.history.length}catch(X){h=0}e.u_his=h;var k;e.u_h=null==(k=Gd.screen)?void 0:k.height;var l;e.u_w=null==(l=Gd.screen)?void 0:l.width;var m;e.u_ah=null==(m=Gd.screen)?void 0:m.availHeight;var n;e.u_aw=null==
(n=Gd.screen)?void 0:n.availWidth;var r;e.u_cd=null==(r=Gd.screen)?void 0:r.colorDepth}catch(X){}h=b.h;try{var q=h.screenX;var y=h.screenY}catch(X){}try{var A=h.outerWidth;var H=h.outerHeight}catch(X){}try{var K=h.innerWidth;var M=h.innerHeight}catch(X){}try{var P=h.screenLeft;var ob=h.screenTop}catch(X){}try{K=h.innerWidth,M=h.innerHeight}catch(X){}try{var vc=h.screen.availWidth;var Aa=h.screen.availTop}catch(X){}q=[P,ob,q,y,vc,Aa,A,H,K,M];y=b.h.top;try{var sa=(y||window).document,Y="CSS1Compat"==
sa.compatMode?sa.documentElement:sa.body;var da=(new Id(Y.clientWidth,Y.clientHeight)).round()}catch(X){da=new Id(-12245933,-12245933)}sa=da;da={};var ea=void 0===ea?z:ea;Y=new Ze;ea.SVGElement&&ea.document.createElementNS&&Y.set(0);y=ce();y["allow-top-navigation-by-user-activation"]&&Y.set(1);y["allow-popups-to-escape-sandbox"]&&Y.set(2);ea.crypto&&ea.crypto.subtle&&Y.set(3);ea.TextDecoder&&ea.TextEncoder&&Y.set(4);ea=$e(Y);da.bc=ea;da.bih=sa.height;da.biw=sa.width;da.brdim=q.join();b=b.i;b=(da.vis=
b.prerendering?3:{visible:1,hidden:2,prerender:3,preview:4,unloaded:5}[b.visibilityState||b.webkitVisibilityState||b.mozVisibilityState||""]||0,da.wgl=!!Gd.WebGLRenderingContext,da);c=d.call(c,e,b);c.ca_type="image";a&&(c.bid=a);return c}
var Bi=new function(){var a=window.document;this.h=window;this.i=a};
B("yt.ads_.signals_.getAdSignalsString",function(a){return ti(Ai(a))});Date.now();var Ci="XMLHttpRequest"in z?function(){return new XMLHttpRequest}:null;
function Di(){if(!Ci)return null;var a=Ci();return"open"in a?a:null}
;var Ei={Authorization:"AUTHORIZATION","X-Goog-EOM-Visitor-Id":"EOM_VISITOR_DATA","X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-Youtube-Domain-Admin-State":"DOMAIN_ADMIN_STATE","X-Youtube-Chrome-Connected":"CHROME_CONNECTED_HEADER","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-YouTube-Delegation-Context":"INNERTUBE_CONTEXT_SERIALIZED_DELEGATION_CONTEXT","X-YouTube-Device":"DEVICE","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL",
"X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"},Fi="app debugcss debugjs expflag force_ad_params force_ad_encrypted force_viral_ad_response_params forced_experiments innertube_snapshots innertube_goldens internalcountrycode internalipoverride absolute_experiments conditional_experiments sbb sr_bns_address".split(" ").concat(ia(ge)),Gi=!1;
function Hi(a,b){b=void 0===b?{}:b;var c=wi(a),d=Q("web_ajax_ignore_global_headers_if_set"),e;for(e in Ei){var f=O(Ei[e]);"X-Goog-Visitor-Id"!==e||f||(f=O("VISITOR_DATA"));!f||!c&&Qb(a)||d&&void 0!==b[e]||(b[e]=f)}"X-Goog-EOM-Visitor-Id"in b&&"X-Goog-Visitor-Id"in b&&delete b["X-Goog-Visitor-Id"];if(c||!Qb(a))b["X-YouTube-Utc-Offset"]=String(-(new Date).getTimezoneOffset());if(c||!Qb(a)){try{var g=(new Intl.DateTimeFormat).resolvedOptions().timeZone}catch(h){}g&&(b["X-YouTube-Time-Zone"]=g)}document.location.hostname.endsWith("youtubeeducation.com")||
!c&&Qb(a)||(b["X-YouTube-Ad-Signals"]=ti(Ai()));return b}
function Ii(a){var b=window.location.search,c=Qb(a);Q("debug_handle_relative_url_for_query_forward_killswitch")||!c&&wi(a)&&(c=document.location.hostname);var d=Pb(a.match(Ob)[5]||null);d=(c=c&&(c.endsWith("youtube.com")||c.endsWith("youtube-nocookie.com")))&&d&&d.startsWith("/api/");if(!c||d)return a;var e=ui(b),f={};E(Fi,function(g){e[g]&&(f[g]=e[g])});
return vi(a,f||{},!1)}
function Ji(a,b){var c=b.format||"JSON";a=Ki(a,b);var d=Li(a,b),e=!1,f=Mi(a,function(k){if(!e){e=!0;h&&window.clearTimeout(h);a:switch(k&&"status"in k?k.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:var l=!0;break a;default:l=!1}var m=null,n=400<=k.status&&500>k.status,r=500<=k.status&&600>k.status;if(l||n||r)m=Ni(a,c,k,b.convertToSafeHtml);if(l)a:if(k&&204==k.status)l=!0;else{switch(c){case "XML":l=0==parseInt(m&&m.return_code,10);break a;case "RAW":l=!0;break a}l=
!!m}m=m||{};n=b.context||z;l?b.onSuccess&&b.onSuccess.call(n,k,m):b.onError&&b.onError.call(n,k,m);b.onFinish&&b.onFinish.call(n,k,m)}},b.method,d,b.headers,b.responseType,b.withCredentials);
d=b.timeout||0;if(b.onTimeout&&0<d){var g=b.onTimeout;var h=mi(function(){e||(e=!0,f.abort(),window.clearTimeout(h),g.call(b.context||z,f))},d)}}
function Ki(a,b){b.includeDomain&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=O("XSRF_FIELD_NAME");if(b=b.urlParams)b[c]&&delete b[c],a=vi(a,b||{},!0);return a}
function Li(a,b){var c=O("XSRF_FIELD_NAME"),d=O("XSRF_TOKEN"),e=b.postBody||"",f=b.postParams,g=O("XSRF_FIELD_NAME"),h;b.headers&&(h=b.headers["Content-Type"]);b.excludeXsrf||Qb(a)&&!b.withCredentials&&Qb(a)!=document.location.hostname||"POST"!=b.method||h&&"application/x-www-form-urlencoded"!=h||b.postParams&&b.postParams[g]||(f||(f={}),f[c]=d);(Q("ajax_parse_query_data_only_when_filled")&&f&&0<Object.keys(f).length||f)&&"string"===typeof e&&(e=ui(e),pb(e,f),e=b.postBodyFormat&&"JSON"==b.postBodyFormat?
JSON.stringify(e):Tb(e));if(!(a=e)&&(a=f)){a:{for(var k in f){f=!1;break a}f=!0}a=!f}!Gi&&a&&"POST"!=b.method&&(Gi=!0,bi(Error("AJAX request with postData should use POST")));return e}
function Ni(a,b,c,d){var e=null;switch(b){case "JSON":try{var f=c.responseText}catch(g){throw d=Error("Error reading responseText"),d.params=a,ci(d),g;}a=c.getResponseHeader("Content-Type")||"";f&&0<=a.indexOf("json")&&(")]}'\n"===f.substring(0,5)&&(f=f.substring(5)),e=JSON.parse(f));break;case "XML":if(a=(a=c.responseXML)?Oi(a):null)e={},E(a.getElementsByTagName("*"),function(g){e[g.tagName]=Pi(g)})}d&&Qi(e);
return e}
function Qi(a){if(Pa(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;sb("HTML that is escaped and sanitized server-side and passed through yt.net.ajax");var d=a[b];if(void 0===qb){var e=null;var f=z.trustedTypes;if(f&&f.createPolicy){try{e=f.createPolicy("goog#html",{createHTML:Wa,createScript:Wa,createScriptURL:Wa})}catch(g){z.console&&z.console.error(g.message)}qb=e}else qb=e}d=(e=qb)?e.createHTML(d):d;a[c]=new Nb(d)}else Qi(a[b])}}
function Oi(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function Pi(a){var b="";E(a.childNodes,function(c){b+=c.nodeValue});
return b}
function Mi(a,b,c,d,e,f,g){function h(){4==(k&&"readyState"in k?k.readyState:0)&&b&&ai(b)(k)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var k=Di();if(!k)return null;"onloadend"in k?k.addEventListener("loadend",h,!1):k.onreadystatechange=h;Q("debug_forward_web_query_parameters")&&(a=Ii(a));k.open(c,a,!0);f&&(k.responseType=f);g&&(k.withCredentials=!0);c="POST"==c&&(void 0===window.FormData||!(d instanceof FormData));if(e=Hi(a,e))for(var l in e)k.setRequestHeader(l,e[l]),"content-type"==l.toLowerCase()&&(c=!1);c&&k.setRequestHeader("Content-Type","application/x-www-form-urlencoded");k.send(d);
return k}
;function Ri(){if(!z.matchMedia)return"WEB_DISPLAY_MODE_UNKNOWN";try{return z.matchMedia("(display-mode: standalone)").matches?"WEB_DISPLAY_MODE_STANDALONE":z.matchMedia("(display-mode: minimal-ui)").matches?"WEB_DISPLAY_MODE_MINIMAL_UI":z.matchMedia("(display-mode: fullscreen)").matches?"WEB_DISPLAY_MODE_FULLSCREEN":z.matchMedia("(display-mode: browser)").matches?"WEB_DISPLAY_MODE_BROWSER":"WEB_DISPLAY_MODE_UNKNOWN"}catch(a){return"WEB_DISPLAY_MODE_UNKNOWN"}}
;B("ytglobal.prefsUserPrefsPrefs_",C("ytglobal.prefsUserPrefsPrefs_")||{});var Si={bluetooth:"CONN_DISCO",cellular:"CONN_CELLULAR_UNKNOWN",ethernet:"CONN_WIFI",none:"CONN_NONE",wifi:"CONN_WIFI",wimax:"CONN_CELLULAR_4G",other:"CONN_UNKNOWN",unknown:"CONN_UNKNOWN","slow-2g":"CONN_CELLULAR_2G","2g":"CONN_CELLULAR_2G","3g":"CONN_CELLULAR_3G","4g":"CONN_CELLULAR_4G"},Ti={CONN_DEFAULT:0,CONN_UNKNOWN:1,CONN_NONE:2,CONN_WIFI:3,CONN_CELLULAR_2G:4,CONN_CELLULAR_3G:5,CONN_CELLULAR_4G:6,CONN_CELLULAR_UNKNOWN:7,CONN_DISCO:8,CONN_CELLULAR_5G:9,CONN_WIFI_METERED:10,CONN_CELLULAR_5G_SA:11,
CONN_CELLULAR_5G_NSA:12,CONN_INVALID:31},Ui={EFFECTIVE_CONNECTION_TYPE_UNKNOWN:0,EFFECTIVE_CONNECTION_TYPE_OFFLINE:1,EFFECTIVE_CONNECTION_TYPE_SLOW_2G:2,EFFECTIVE_CONNECTION_TYPE_2G:3,EFFECTIVE_CONNECTION_TYPE_3G:4,EFFECTIVE_CONNECTION_TYPE_4G:5},Vi={"slow-2g":"EFFECTIVE_CONNECTION_TYPE_SLOW_2G","2g":"EFFECTIVE_CONNECTION_TYPE_2G","3g":"EFFECTIVE_CONNECTION_TYPE_3G","4g":"EFFECTIVE_CONNECTION_TYPE_4G"};function Wi(){var a=z.navigator;return a?a.connection:void 0}
;function Xi(){}
function Yi(a,b){return Zi(a,0,b)}
Xi.prototype.L=function(a,b){return Zi(a,1,b)};
function $i(a,b){Zi(a,2,b)}
;function aj(){Xi.apply(this,arguments)}
v(aj,Xi);function bj(){aj.h||(aj.h=new aj);return aj.h}
function Zi(a,b,c){void 0!==c&&Number.isNaN(Number(c))&&(c=void 0);var d=C("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):mi(a,c||0)}
aj.prototype.aa=function(a){if(void 0===a||!Number.isNaN(Number(a))){var b=C("yt.scheduler.instance.cancelJob");b?b(a):window.clearTimeout(a)}};
aj.prototype.start=function(){var a=C("yt.scheduler.instance.start");a&&a()};var Ye=bj();function cj(a){var b=Ia.apply(1,arguments);var c=Error.call(this,a);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.args=[].concat(ia(b))}
v(cj,Error);function dj(){try{return ej(),!0}catch(a){return!1}}
function ej(){if(void 0!==O("DATASYNC_ID"))return O("DATASYNC_ID");throw new cj("Datasync ID not set","unknown");}
;var fj=qc||rc;function gj(a){var b=new Wg;if(b.h)try{b.h.setItem("__sak","1");b.h.removeItem("__sak");var c=!0}catch(d){c=!1}else c=!1;(b=c?a?new bh(b,a):b:null)||(a=new Xg(a||"UserDataSharedStore"),b=a.h?a:null);this.h=(a=b)?new Sg(a):null;this.i=document.domain||window.location.hostname}
gj.prototype.set=function(a,b,c,d){c=c||31104E3;this.remove(a);if(this.h)try{this.h.set(a,b,Date.now()+1E3*c);return}catch(f){}var e="";if(d)try{e=escape(tg(b))}catch(f){return}else e=escape(b);b=this.i;ne.set(""+a,e,{La:c,path:"/",domain:void 0===b?"youtube.com":b,secure:!1})};
gj.prototype.get=function(a,b){var c=void 0,d=!this.h;if(!d)try{c=this.h.get(a)}catch(e){d=!0}if(d&&(c=ne.get(""+a,void 0))&&(c=unescape(c),b))try{c=JSON.parse(c)}catch(e){this.remove(a),c=void 0}return c};
gj.prototype.remove=function(a){this.h&&this.h.remove(a);var b=this.i;ne.remove(""+a,"/",void 0===b?"youtube.com":b)};var hj=function(){var a;return function(){a||(a=new gj("ytidb"));return a}}();
function ij(){var a;return null==(a=hj())?void 0:a.get("LAST_RESULT_ENTRY_KEY",!0)}
;var jj=[],kj=!1;function lj(a){kj||(jj.push({type:"ERROR",payload:a}),10<jj.length&&jj.shift())}
function mj(a,b){kj||(jj.push({type:"EVENT",eventType:a,payload:b}),10<jj.length&&jj.shift())}
;function nj(a){if(0<=a.indexOf(":"))throw Error("Database name cannot contain ':'");}
function oj(a){return a.substr(0,a.indexOf(":"))||a}
;var pj={},qj=(pj.AUTH_INVALID="No user identifier specified.",pj.EXPLICIT_ABORT="Transaction was explicitly aborted.",pj.IDB_NOT_SUPPORTED="IndexedDB is not supported.",pj.MISSING_INDEX="Index not created.",pj.MISSING_OBJECT_STORES="Object stores not created.",pj.DB_DELETED_BY_MISSING_OBJECT_STORES="Database is deleted because expected object stores were not created.",pj.DB_REOPENED_BY_MISSING_OBJECT_STORES="Database is reopened because expected object stores were not created.",pj.UNKNOWN_ABORT="Transaction was aborted for unknown reasons.",
pj.QUOTA_EXCEEDED="The current transaction exceeded its quota limitations.",pj.QUOTA_MAYBE_EXCEEDED="The current transaction may have failed because of exceeding quota limitations.",pj.EXECUTE_TRANSACTION_ON_CLOSED_DB="Can't start a transaction on a closed database",pj.INCOMPATIBLE_DB_VERSION="The binary is incompatible with the database version",pj),rj={},sj=(rj.AUTH_INVALID="ERROR",rj.EXECUTE_TRANSACTION_ON_CLOSED_DB="WARNING",rj.EXPLICIT_ABORT="IGNORED",rj.IDB_NOT_SUPPORTED="ERROR",rj.MISSING_INDEX=
"WARNING",rj.MISSING_OBJECT_STORES="ERROR",rj.DB_DELETED_BY_MISSING_OBJECT_STORES="WARNING",rj.DB_REOPENED_BY_MISSING_OBJECT_STORES="WARNING",rj.QUOTA_EXCEEDED="WARNING",rj.QUOTA_MAYBE_EXCEEDED="WARNING",rj.UNKNOWN_ABORT="WARNING",rj.INCOMPATIBLE_DB_VERSION="WARNING",rj),tj={},uj=(tj.AUTH_INVALID=!1,tj.EXECUTE_TRANSACTION_ON_CLOSED_DB=!1,tj.EXPLICIT_ABORT=!1,tj.IDB_NOT_SUPPORTED=!1,tj.MISSING_INDEX=!1,tj.MISSING_OBJECT_STORES=!1,tj.DB_DELETED_BY_MISSING_OBJECT_STORES=!1,tj.DB_REOPENED_BY_MISSING_OBJECT_STORES=
!1,tj.QUOTA_EXCEEDED=!1,tj.QUOTA_MAYBE_EXCEEDED=!0,tj.UNKNOWN_ABORT=!0,tj.INCOMPATIBLE_DB_VERSION=!1,tj);function S(a,b,c,d,e){b=void 0===b?{}:b;c=void 0===c?qj[a]:c;d=void 0===d?sj[a]:d;e=void 0===e?uj[a]:e;cj.call(this,c,Object.assign({},{name:"YtIdbKnownError",isSw:void 0===self.document,isIframe:self!==self.top,type:a},b));this.type=a;this.message=c;this.level=d;this.h=e;Object.setPrototypeOf(this,S.prototype)}
v(S,cj);function vj(a,b){S.call(this,"MISSING_OBJECT_STORES",{expectedObjectStores:b,foundObjectStores:a},qj.MISSING_OBJECT_STORES);Object.setPrototypeOf(this,vj.prototype)}
v(vj,S);function wj(a,b){var c=Error.call(this);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.index=a;this.objectStore=b;Object.setPrototypeOf(this,wj.prototype)}
v(wj,Error);var xj=["The database connection is closing","Can't start a transaction on a closed database","A mutation operation was attempted on a database that did not allow mutations"];
function yj(a,b,c,d){b=oj(b);var e=a instanceof Error?a:Error("Unexpected error: "+a);if(e instanceof S)return e;a={objectStoreNames:c,dbName:b,dbVersion:d};if("QuotaExceededError"===e.name)return new S("QUOTA_EXCEEDED",a);if(sc&&"UnknownError"===e.name)return new S("QUOTA_MAYBE_EXCEEDED",a);if(e instanceof wj)return new S("MISSING_INDEX",Object.assign({},a,{objectStore:e.objectStore,index:e.index}));if("InvalidStateError"===e.name&&xj.some(function(f){return e.message.includes(f)}))return new S("EXECUTE_TRANSACTION_ON_CLOSED_DB",
a);
if("AbortError"===e.name)return new S("UNKNOWN_ABORT",a,e.message);e.args=[Object.assign({},a,{name:"IdbError",hc:e.name})];e.level="WARNING";return e}
function zj(a,b,c){var d=ij();return new S("IDB_NOT_SUPPORTED",{context:{caller:a,publicName:b,version:c,hasSucceededOnce:null==d?void 0:d.hasSucceededOnce}})}
;function Aj(a){if(!a)throw Error();throw a;}
function Bj(a){return a}
function Cj(a){this.h=a}
function U(a){function b(e){if("PENDING"===d.state.status){d.state={status:"REJECTED",reason:e};e=u(d.i);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
function c(e){if("PENDING"===d.state.status){d.state={status:"FULFILLED",value:e};e=u(d.h);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
var d=this;this.state={status:"PENDING"};this.h=[];this.i=[];a=a.h;try{a(c,b)}catch(e){b(e)}}
U.all=function(a){return new U(new Cj(function(b,c){var d=[],e=a.length;0===e&&b(d);for(var f={Z:0};f.Z<a.length;f={Z:f.Z},++f.Z)Dj(U.resolve(a[f.Z]).then(function(g){return function(h){d[g.Z]=h;e--;0===e&&b(d)}}(f)),function(g){c(g)})}))};
U.resolve=function(a){return new U(new Cj(function(b,c){a instanceof U?a.then(b,c):b(a)}))};
U.reject=function(a){return new U(new Cj(function(b,c){c(a)}))};
U.prototype.then=function(a,b){var c=this,d=null!=a?a:Bj,e=null!=b?b:Aj;return new U(new Cj(function(f,g){"PENDING"===c.state.status?(c.h.push(function(){Ej(c,c,d,f,g)}),c.i.push(function(){Fj(c,c,e,f,g)})):"FULFILLED"===c.state.status?Ej(c,c,d,f,g):"REJECTED"===c.state.status&&Fj(c,c,e,f,g)}))};
function Dj(a,b){a.then(void 0,b)}
function Ej(a,b,c,d,e){try{if("FULFILLED"!==a.state.status)throw Error("calling handleResolve before the promise is fulfilled.");var f=c(a.state.value);f instanceof U?Gj(a,b,f,d,e):d(f)}catch(g){e(g)}}
function Fj(a,b,c,d,e){try{if("REJECTED"!==a.state.status)throw Error("calling handleReject before the promise is rejected.");var f=c(a.state.reason);f instanceof U?Gj(a,b,f,d,e):d(f)}catch(g){e(g)}}
function Gj(a,b,c,d,e){b===c?e(new TypeError("Circular promise chain detected.")):c.then(function(f){f instanceof U?Gj(a,b,f,d,e):d(f)},function(f){e(f)})}
;function Hj(a,b,c){function d(){c(a.error);f()}
function e(){b(a.result);f()}
function f(){try{a.removeEventListener("success",e),a.removeEventListener("error",d)}catch(g){}}
a.addEventListener("success",e);a.addEventListener("error",d)}
function Ij(a){return new Promise(function(b,c){Hj(a,b,c)})}
function Jj(a){return new U(new Cj(function(b,c){Hj(a,b,c)}))}
;function Kj(a,b){return new U(new Cj(function(c,d){function e(){var f=a?b(a):null;f?f.then(function(g){a=g;e()},d):c()}
e()}))}
;var Lj=window,V=Lj.ytcsi&&Lj.ytcsi.now?Lj.ytcsi.now:Lj.performance&&Lj.performance.timing&&Lj.performance.now&&Lj.performance.timing.navigationStart?function(){return Lj.performance.timing.navigationStart+Lj.performance.now()}:function(){return(new Date).getTime()};function Mj(a,b){this.h=a;this.options=b;this.transactionCount=0;this.j=Math.round(V());this.i=!1}
p=Mj.prototype;p.add=function(a,b,c){return Nj(this,[a],{mode:"readwrite",H:!0},function(d){return d.objectStore(a).add(b,c)})};
p.clear=function(a){return Nj(this,[a],{mode:"readwrite",H:!0},function(b){return b.objectStore(a).clear()})};
p.close=function(){this.h.close();var a;(null==(a=this.options)?0:a.closed)&&this.options.closed()};
function Oj(a,b,c){a=a.h.createObjectStore(b,c);return new Pj(a)}
p.delete=function(a,b){return Nj(this,[a],{mode:"readwrite",H:!0},function(c){return c.objectStore(a).delete(b)})};
p.get=function(a,b){return Nj(this,[a],{mode:"readonly",H:!0},function(c){return c.objectStore(a).get(b)})};
function Qj(a,b,c){return Nj(a,[b],{mode:"readwrite",H:!0},function(d){d=d.objectStore(b);return Jj(d.h.put(c,void 0))})}
p.objectStoreNames=function(){return Array.from(this.h.objectStoreNames)};
function Nj(a,b,c,d){var e,f,g,h,k,l,m,n,r,q,y,A;return x(function(H){switch(H.h){case 1:var K={mode:"readonly",H:!1,tag:"IDB_TRANSACTION_TAG_UNKNOWN"};"string"===typeof c?K.mode=c:Object.assign(K,c);e=K;a.transactionCount++;f=e.H?3:1;g=0;case 2:if(h){H.s(3);break}g++;k=Math.round(V());wa(H,4);l=a.h.transaction(b,e.mode);K=new Rj(l);K=Sj(K,d);return w(H,K,6);case 6:return m=H.i,n=Math.round(V()),Tj(a,k,n,g,void 0,b.join(),e),H.return(m);case 4:r=ya(H);q=Math.round(V());y=yj(r,a.h.name,b.join(),a.h.version);
if((A=y instanceof S&&!y.h)||g>=f)Tj(a,k,q,g,y,b.join(),e),h=y;H.s(2);break;case 3:return H.return(Promise.reject(h))}})}
function Tj(a,b,c,d,e,f,g){b=c-b;e?(e instanceof S&&("QUOTA_EXCEEDED"===e.type||"QUOTA_MAYBE_EXCEEDED"===e.type)&&mj("QUOTA_EXCEEDED",{dbName:oj(a.h.name),objectStoreNames:f,transactionCount:a.transactionCount,transactionMode:g.mode}),e instanceof S&&"UNKNOWN_ABORT"===e.type&&(c-=a.j,0>c&&c>=Math.pow(2,31)&&(c=0),mj("TRANSACTION_UNEXPECTEDLY_ABORTED",{objectStoreNames:f,transactionDuration:b,transactionCount:a.transactionCount,dbDuration:c}),a.i=!0),Uj(a,!1,d,f,b,g.tag),lj(e)):Uj(a,!0,d,f,b,g.tag)}
function Uj(a,b,c,d,e,f){mj("TRANSACTION_ENDED",{objectStoreNames:d,connectionHasUnknownAbortedTransaction:a.i,duration:e,isSuccessful:b,tryCount:c,tag:void 0===f?"IDB_TRANSACTION_TAG_UNKNOWN":f})}
p.getName=function(){return this.h.name};
function Pj(a){this.h=a}
p=Pj.prototype;p.add=function(a,b){return Jj(this.h.add(a,b))};
p.autoIncrement=function(){return this.h.autoIncrement};
p.clear=function(){return Jj(this.h.clear()).then(function(){})};
function Vj(a,b,c){a.h.createIndex(b,c,{unique:!1})}
function Wj(a,b){return Xj(a,{query:b},function(c){return c.delete().then(function(){return c.continue()})}).then(function(){})}
p.delete=function(a){return a instanceof IDBKeyRange?Wj(this,a):Jj(this.h.delete(a))};
p.get=function(a){return Jj(this.h.get(a))};
p.index=function(a){try{return new Mk(this.h.index(a))}catch(b){if(b instanceof Error&&"NotFoundError"===b.name)throw new wj(a,this.h.name);throw b;}};
p.getName=function(){return this.h.name};
p.keyPath=function(){return this.h.keyPath};
function Xj(a,b,c){a=a.h.openCursor(b.query,b.direction);return Nk(a).then(function(d){return Kj(d,c)})}
function Rj(a){var b=this;this.h=a;this.j=new Map;this.i=!1;this.done=new Promise(function(c,d){b.h.addEventListener("complete",function(){c()});
b.h.addEventListener("error",function(e){e.currentTarget===e.target&&d(b.h.error)});
b.h.addEventListener("abort",function(){var e=b.h.error;if(e)d(e);else if(!b.i){e=S;for(var f=b.h.objectStoreNames,g=[],h=0;h<f.length;h++){var k=f.item(h);if(null===k)throw Error("Invariant: item in DOMStringList is null");g.push(k)}e=new e("UNKNOWN_ABORT",{objectStoreNames:g.join(),dbName:b.h.db.name,mode:b.h.mode});d(e)}})})}
function Sj(a,b){var c=new Promise(function(d,e){try{Dj(b(a).then(function(f){d(f)}),e)}catch(f){e(f),a.abort()}});
return Promise.all([c,a.done]).then(function(d){return u(d).next().value})}
Rj.prototype.abort=function(){this.h.abort();this.i=!0;throw new S("EXPLICIT_ABORT");};
Rj.prototype.objectStore=function(a){a=this.h.objectStore(a);var b=this.j.get(a);b||(b=new Pj(a),this.j.set(a,b));return b};
function Mk(a){this.h=a}
p=Mk.prototype;p.delete=function(a){return Ok(this,{query:a},function(b){return b.delete().then(function(){return b.continue()})})};
p.get=function(a){return Jj(this.h.get(a))};
p.getKey=function(a){return Jj(this.h.getKey(a))};
p.keyPath=function(){return this.h.keyPath};
p.unique=function(){return this.h.unique};
function Ok(a,b,c){a=a.h.openCursor(void 0===b.query?null:b.query,void 0===b.direction?"next":b.direction);return Nk(a).then(function(d){return Kj(d,c)})}
function Pk(a,b){this.request=a;this.cursor=b}
function Nk(a){return Jj(a).then(function(b){return b?new Pk(a,b):null})}
p=Pk.prototype;p.advance=function(a){this.cursor.advance(a);return Nk(this.request)};
p.continue=function(a){this.cursor.continue(a);return Nk(this.request)};
p.delete=function(){return Jj(this.cursor.delete()).then(function(){})};
p.getKey=function(){return this.cursor.key};
p.S=function(){return this.cursor.value};
p.update=function(a){return Jj(this.cursor.update(a))};function Qk(a,b,c){return new Promise(function(d,e){function f(){r||(r=new Mj(g.result,{closed:n}));return r}
var g=void 0!==b?self.indexedDB.open(a,b):self.indexedDB.open(a);var h=c.lb,k=c.mb,l=c.Db,m=c.upgrade,n=c.closed,r;g.addEventListener("upgradeneeded",function(q){try{if(null===q.newVersion)throw Error("Invariant: newVersion on IDbVersionChangeEvent is null");if(null===g.transaction)throw Error("Invariant: transaction on IDbOpenDbRequest is null");q.dataLoss&&"none"!==q.dataLoss&&mj("IDB_DATA_CORRUPTED",{reason:q.dataLossMessage||"unknown reason",dbName:oj(a)});var y=f(),A=new Rj(g.transaction);m&&
m(y,function(H){return q.oldVersion<H&&q.newVersion>=H},A);
A.done.catch(function(H){e(H)})}catch(H){e(H)}});
g.addEventListener("success",function(){var q=g.result;k&&q.addEventListener("versionchange",function(){k(f())});
q.addEventListener("close",function(){mj("IDB_UNEXPECTEDLY_CLOSED",{dbName:oj(a),dbVersion:q.version});l&&l()});
d(f())});
g.addEventListener("error",function(){e(g.error)});
h&&g.addEventListener("blocked",function(){h()})})}
function Rk(a,b,c){c=void 0===c?{}:c;return Qk(a,b,c)}
function Sk(a,b){b=void 0===b?{}:b;var c,d,e,f;return x(function(g){if(1==g.h)return wa(g,2),c=self.indexedDB.deleteDatabase(a),d=b,(e=d.lb)&&c.addEventListener("blocked",function(){e()}),w(g,Ij(c),4);
if(2!=g.h)return xa(g,0);f=ya(g);throw yj(f,a,"",-1);})}
;function Tk(a){return new Promise(function(b){$i(function(){b()},a)})}
function Uk(a,b){this.name=a;this.options=b;this.l=!0;this.m=this.o=0;this.i=500}
Uk.prototype.j=function(a,b,c){c=void 0===c?{}:c;return Rk(a,b,c)};
Uk.prototype.delete=function(a){a=void 0===a?{}:a;return Sk(this.name,a)};
function Vk(a,b){return new S("INCOMPATIBLE_DB_VERSION",{dbName:a.name,oldVersion:a.options.version,newVersion:b})}
function Wk(a,b){if(!b)throw zj("openWithToken",oj(a.name));return Xk(a)}
function Xk(a){function b(){var f,g,h,k,l,m,n,r,q,y;return x(function(A){switch(A.h){case 1:return g=null!=(f=Error().stack)?f:"",wa(A,2),w(A,a.j(a.name,a.options.version,d),4);case 4:h=A.i;for(var H=a.options,K=[],M=u(Object.keys(H.ea)),P=M.next();!P.done;P=M.next()){P=P.value;var ob=H.ea[P],vc=void 0===ob.Bb?Number.MAX_VALUE:ob.Bb;!(h.h.version>=ob.ha)||h.h.version>=vc||h.h.objectStoreNames.contains(P)||K.push(P)}k=K;if(0===k.length){A.s(5);break}l=Object.keys(a.options.ea);m=h.objectStoreNames();
if(a.m<yi("ytidb_reopen_db_retries",0))return a.m++,h.close(),lj(new S("DB_REOPENED_BY_MISSING_OBJECT_STORES",{dbName:a.name,expectedObjectStores:l,foundObjectStores:m})),A.return(b());if(!(a.o<yi("ytidb_remake_db_retries",1))){A.s(6);break}a.o++;if(!Q("ytidb_remake_db_enable_backoff_delay")){A.s(7);break}return w(A,Tk(a.i),8);case 8:a.i*=2;case 7:return w(A,a.delete(),9);case 9:return lj(new S("DB_DELETED_BY_MISSING_OBJECT_STORES",{dbName:a.name,expectedObjectStores:l,foundObjectStores:m})),A.return(b());
case 6:throw new vj(m,l);case 5:return A.return(h);case 2:n=ya(A);if(n instanceof DOMException?"VersionError"!==n.name:"DOMError"in self&&n instanceof DOMError?"VersionError"!==n.name:!(n instanceof Object&&"message"in n)||"An attempt was made to open a database using a lower version than the existing version."!==n.message){A.s(10);break}return w(A,a.j(a.name,void 0,Object.assign({},d,{upgrade:void 0})),11);case 11:r=A.i;q=r.h.version;if(void 0!==a.options.version&&q>a.options.version+1)throw r.close(),
a.l=!1,Vk(a,q);return A.return(r);case 10:throw c(),n instanceof Error&&!Q("ytidb_async_stack_killswitch")&&(n.stack=n.stack+"\n"+g.substring(g.indexOf("\n")+1)),yj(n,a.name,"",null!=(y=a.options.version)?y:-1);}})}
function c(){a.h===e&&(a.h=void 0)}
if(!a.l)throw Vk(a);if(a.h)return a.h;var d={mb:function(f){f.close()},
closed:c,Db:c,upgrade:a.options.upgrade};var e=b();a.h=e;return a.h}
;var Yk=new Uk("YtIdbMeta",{ea:{databases:{ha:1}},upgrade:function(a,b){b(1)&&Oj(a,"databases",{keyPath:"actualName"})}});
function Zk(a,b){var c;return x(function(d){if(1==d.h)return w(d,Wk(Yk,b),2);c=d.i;return d.return(Nj(c,["databases"],{H:!0,mode:"readwrite"},function(e){var f=e.objectStore("databases");return f.get(a.actualName).then(function(g){if(g?a.actualName!==g.actualName||a.publicName!==g.publicName||a.userIdentifier!==g.userIdentifier:1)return Jj(f.h.put(a,void 0)).then(function(){})})}))})}
function $k(a,b){var c;return x(function(d){if(1==d.h)return a?w(d,Wk(Yk,b),2):d.return();c=d.i;return d.return(c.delete("databases",a))})}
function al(a,b){var c,d;return x(function(e){return 1==e.h?(c=[],w(e,Wk(Yk,b),2)):3!=e.h?(d=e.i,w(e,Nj(d,["databases"],{H:!0,mode:"readonly"},function(f){c.length=0;return Xj(f.objectStore("databases"),{},function(g){a(g.S())&&c.push(g.S());return g.continue()})}),3)):e.return(c)})}
function bl(a){return al(function(b){return"LogsDatabaseV2"===b.publicName&&void 0!==b.userIdentifier},a)}
;var cl,dl=new function(){}(new function(){});
function el(){var a,b,c,d;return x(function(e){switch(e.h){case 1:a=ij();if(null==(b=a)?0:b.hasSucceededOnce)return e.return(!0);var f;if(f=fj)f=/WebKit\/([0-9]+)/.exec(Kb()),f=!!(f&&600<=parseInt(f[1],10));f&&(f=/WebKit\/([0-9]+)/.exec(Kb()),f=!(f&&602<=parseInt(f[1],10)));if(f||ec)return e.return(!1);try{if(c=self,!(c.indexedDB&&c.IDBIndex&&c.IDBKeyRange&&c.IDBObjectStore))return e.return(!1)}catch(g){return e.return(!1)}if(!("IDBTransaction"in self&&"objectStoreNames"in IDBTransaction.prototype))return e.return(!1);
wa(e,2);d={actualName:"yt-idb-test-do-not-use",publicName:"yt-idb-test-do-not-use",userIdentifier:void 0};return w(e,Zk(d,dl),4);case 4:return w(e,$k("yt-idb-test-do-not-use",dl),5);case 5:return e.return(!0);case 2:return ya(e),e.return(!1)}})}
function fl(){if(void 0!==cl)return cl;kj=!0;return cl=el().then(function(a){kj=!1;var b;if(null!=(b=hj())&&b.h){var c;b={hasSucceededOnce:(null==(c=ij())?void 0:c.hasSucceededOnce)||a};var d;null==(d=hj())||d.set("LAST_RESULT_ENTRY_KEY",b,2592E3,!0)}return a})}
function gl(){return C("ytglobal.idbToken_")||void 0}
function hl(){var a=gl();return a?Promise.resolve(a):fl().then(function(b){(b=b?dl:void 0)&&B("ytglobal.idbToken_",b);return b})}
;new ug;function il(a){if(!dj())throw a=new S("AUTH_INVALID",{dbName:a}),lj(a),a;var b=ej();return{actualName:a+":"+b,publicName:a,userIdentifier:b}}
function jl(a,b,c,d){var e,f,g,h,k,l;return x(function(m){switch(m.h){case 1:return f=null!=(e=Error().stack)?e:"",w(m,hl(),2);case 2:g=m.i;if(!g)throw h=zj("openDbImpl",a,b),Q("ytidb_async_stack_killswitch")||(h.stack=h.stack+"\n"+f.substring(f.indexOf("\n")+1)),lj(h),h;nj(a);k=c?{actualName:a,publicName:a,userIdentifier:void 0}:il(a);wa(m,3);return w(m,Zk(k,g),5);case 5:return w(m,Rk(k.actualName,b,d),6);case 6:return m.return(m.i);case 3:return l=ya(m),wa(m,7),w(m,$k(k.actualName,g),9);case 9:xa(m,
8);break;case 7:ya(m);case 8:throw l;}})}
function kl(a,b,c){c=void 0===c?{}:c;return jl(a,b,!1,c)}
function ll(a,b,c){c=void 0===c?{}:c;return jl(a,b,!0,c)}
function ml(a,b){b=void 0===b?{}:b;var c,d;return x(function(e){if(1==e.h)return w(e,hl(),2);if(3!=e.h){c=e.i;if(!c)return e.return();nj(a);d=il(a);return w(e,Sk(d.actualName,b),3)}return w(e,$k(d.actualName,c),0)})}
function nl(a,b,c){a=a.map(function(d){return x(function(e){return 1==e.h?w(e,Sk(d.actualName,b),2):w(e,$k(d.actualName,c),0)})});
return Promise.all(a).then(function(){})}
function ol(){var a=void 0===a?{}:a;var b,c;return x(function(d){if(1==d.h)return w(d,hl(),2);if(3!=d.h){b=d.i;if(!b)return d.return();nj("LogsDatabaseV2");return w(d,bl(b),3)}c=d.i;return w(d,nl(c,a,b),0)})}
function pl(a,b){b=void 0===b?{}:b;var c;return x(function(d){if(1==d.h)return w(d,hl(),2);if(3!=d.h){c=d.i;if(!c)return d.return();nj(a);return w(d,Sk(a,b),3)}return w(d,$k(a,c),0)})}
;function ql(a,b){Uk.call(this,a,b);this.options=b;nj(a)}
v(ql,Uk);function rl(a,b){var c;return function(){c||(c=new ql(a,b));return c}}
ql.prototype.j=function(a,b,c){c=void 0===c?{}:c;return(this.options.Ga?ll:kl)(a,b,Object.assign({},c))};
ql.prototype.delete=function(a){a=void 0===a?{}:a;return(this.options.Ga?pl:ml)(this.name,a)};
function sl(a,b){return rl(a,b)}
;var tl={},ul=sl("ytGcfConfig",{ea:(tl.coldConfigStore={ha:1},tl.hotConfigStore={ha:1},tl),Ga:!1,upgrade:function(a,b){b(1)&&(Vj(Oj(a,"hotConfigStore",{keyPath:"key",autoIncrement:!0}),"hotTimestampIndex","timestamp"),Vj(Oj(a,"coldConfigStore",{keyPath:"key",autoIncrement:!0}),"coldTimestampIndex","timestamp"))},
version:1});function vl(a){return Wk(ul(),a)}
function wl(a,b,c){var d,e,f;return x(function(g){switch(g.h){case 1:return d={config:a,hashData:b,timestamp:V()},w(g,vl(c),2);case 2:return e=g.i,w(g,e.clear("hotConfigStore"),3);case 3:return w(g,Qj(e,"hotConfigStore",d),4);case 4:return f=g.i,g.return(f)}})}
function xl(a,b,c,d){var e,f,g;return x(function(h){switch(h.h){case 1:return e={config:a,hashData:b,configData:c,timestamp:V()},w(h,vl(d),2);case 2:return f=h.i,w(h,f.clear("coldConfigStore"),3);case 3:return w(h,Qj(f,"coldConfigStore",e),4);case 4:return g=h.i,h.return(g)}})}
;function yl(){}
function zl(a,b,c){var d,e;return x(function(f){if(!Q("gcf_config_store_update_enabled"))return f.s(0);a.h=b;B("yt.gcf.config.hotConfigGroup",a.h);a.hotHashData=c;B("yt.gcf.config.hotHashData",a.hotHashData);d=gl();return d?w(f,wl(b,c,d),0):(e=zj("updateHotConfig token error"),ci(e),f.s(0))})}
function Al(a,b,c){var d,e;return x(function(f){if(!Q("gcf_config_store_update_enabled"))return f.s(0);a.coldHashData=c;B("yt.gcf.config.coldHashData",a.coldHashData);d=gl();return d?b.configData?w(f,xl(b,c,b.configData,d),0):f.s(0):(e=zj("updateColdConfig token error"),ci(e),f.s(0))})}
;function Bl(){return"INNERTUBE_API_KEY"in Vh&&"INNERTUBE_API_VERSION"in Vh}
function Cl(){return{innertubeApiKey:O("INNERTUBE_API_KEY"),innertubeApiVersion:O("INNERTUBE_API_VERSION"),Ka:O("INNERTUBE_CONTEXT_CLIENT_CONFIG_INFO"),Wa:O("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),ub:O("INNERTUBE_CONTEXT_CLIENT_NAME",1),innertubeContextClientVersion:O("INNERTUBE_CONTEXT_CLIENT_VERSION"),Ya:O("INNERTUBE_CONTEXT_HL"),Xa:O("INNERTUBE_CONTEXT_GL"),vb:O("INNERTUBE_HOST_OVERRIDE")||"",xb:!!O("INNERTUBE_USE_THIRD_PARTY_AUTH",!1),wb:!!O("INNERTUBE_OMIT_API_KEY_WHEN_AUTH_HEADER_IS_PRESENT",
!1),appInstallData:O("SERIALIZED_CLIENT_CONFIG_DATA")}}
function Dl(a){var b={client:{hl:a.Ya,gl:a.Xa,clientName:a.Wa,clientVersion:a.innertubeContextClientVersion,configInfo:a.Ka}};navigator.userAgent&&(b.client.userAgent=String(navigator.userAgent));var c=z.devicePixelRatio;c&&1!=c&&(b.client.screenDensityFloat=String(c));c=O("EXPERIMENTS_TOKEN","");""!==c&&(b.client.experimentsToken=c);c=zi();0<c.length&&(b.request={internalExperimentFlags:c});El(a,void 0,b);Q("enable_third_party_info")&&Fl(void 0,b);Gl(void 0,b);Hl(a,void 0,b);Il(void 0,b);Q("start_sending_config_hash")&&
Jl(void 0,b);O("DELEGATED_SESSION_ID")&&!Q("pageid_as_header_web")&&(b.user={onBehalfOfUser:O("DELEGATED_SESSION_ID")});a=Object;c=a.assign;for(var d=b.client,e={},f=u(Object.entries(ui(O("DEVICE","")))),g=f.next();!g.done;g=f.next()){var h=u(g.value);g=h.next().value;h=h.next().value;"cbrand"===g?e.deviceMake=h:"cmodel"===g?e.deviceModel=h:"cbr"===g?e.browserName=h:"cbrver"===g?e.browserVersion=h:"cos"===g?e.osName=h:"cosver"===g?e.osVersion=h:"cplatform"===g&&(e.platform=h)}b.client=c.call(a,d,
e);return b}
function Kl(a){var b=new uh,c=new lh;I(c,1,a.Ya);I(c,2,a.Xa);I(c,16,a.ub);I(c,17,a.innertubeContextClientVersion);if(a.Ka){var d=a.Ka,e=new hh;d.coldConfigData&&I(e,1,d.coldConfigData);d.appInstallData&&I(e,6,d.appInstallData);d.coldHashData&&I(e,3,d.coldHashData);d.hotHashData&&I(e,5,d.hotHashData);J(c,hh,62,e)}(d=z.devicePixelRatio)&&1!=d&&I(c,65,d);d=O("EXPERIMENTS_TOKEN","");""!==d&&I(c,54,d);d=zi();if(0<d.length){e=new nh;for(var f=0;f<d.length;f++){var g=new fh;I(g,1,d[f].key);od(g,2,gh,d[f].value);
vd(e,15,fh,g)}J(b,nh,5,e)}El(a,c);Q("enable_third_party_info")&&Fl(b);Gl(c);Hl(a,c);Il(c);Q("start_sending_config_hash")&&Jl(c);O("DELEGATED_SESSION_ID")&&!Q("pageid_as_header_web")&&(a=new sh,I(a,3,O("DELEGATED_SESSION_ID")));a=u(Object.entries(ui(O("DEVICE",""))));for(d=a.next();!d.done;d=a.next())e=u(d.value),d=e.next().value,e=e.next().value,"cbrand"===d?I(c,12,e):"cmodel"===d?I(c,13,e):"cbr"===d?I(c,87,e):"cbrver"===d?I(c,88,e):"cos"===d?I(c,18,e):"cosver"===d?I(c,19,e):"cplatform"===d&&I(c,
42,e);J(b,lh,1,c);return b}
function El(a,b,c){a=a.Wa;if("WEB"===a||"MWEB"===a||1===a||2===a)if(b){c=qd(b,ih,96)||new ih;var d=Ri();d=Object.keys(wh).indexOf(d);d=-1===d?null:d;null!==d&&I(c,3,d);J(b,ih,96,c)}else c&&(c.client.mainAppWebInfo=null!=(d=c.client.mainAppWebInfo)?d:{},c.client.mainAppWebInfo.webDisplayMode=Ri())}
function Fl(a,b){var c=C("yt.embedded_player.embed_url");c&&(a?(b=qd(a,ph,7)||new ph,I(b,4,c),J(a,ph,7,b)):b&&(b.thirdParty={embedUrl:c}))}
function Gl(a,b){var c;if(Q("web_log_memory_total_kbytes")&&(null==(c=z.navigator)?0:c.deviceMemory)){var d;c=null==(d=z.navigator)?void 0:d.deviceMemory;a?I(a,95,1E6*c):b&&(b.client.memoryTotalKbytes=""+1E6*c)}}
function Hl(a,b,c){if(a.appInstallData)if(b){var d;c=null!=(d=qd(b,hh,62))?d:new hh;I(c,6,a.appInstallData);J(b,hh,62,c)}else c&&(c.client.configInfo=c.client.configInfo||{},c.client.configInfo.appInstallData=a.appInstallData)}
function Il(a,b){a:{var c=Wi();if(c){var d=Si[c.type||"unknown"]||"CONN_UNKNOWN";c=Si[c.effectiveType||"unknown"]||"CONN_UNKNOWN";"CONN_CELLULAR_UNKNOWN"===d&&"CONN_UNKNOWN"!==c&&(d=c);if("CONN_UNKNOWN"!==d)break a;if("CONN_UNKNOWN"!==c){d=c;break a}}d=void 0}d&&(a?I(a,61,Ti[d]):b&&(b.client.connectionType=d));Q("web_log_effective_connection_type")&&(d=Wi(),d=null!=d&&d.effectiveType?Vi.hasOwnProperty(d.effectiveType)?Vi[d.effectiveType]:"EFFECTIVE_CONNECTION_TYPE_UNKNOWN":void 0,d&&(a?I(a,94,Ui[d]):
b&&(b.client.effectiveConnectionType=d)))}
function Ll(a,b,c){c=void 0===c?{}:c;var d={};O("EOM_VISITOR_DATA")?d={"X-Goog-EOM-Visitor-Id":O("EOM_VISITOR_DATA")}:d={"X-Goog-Visitor-Id":c.visitorData||O("VISITOR_DATA","")};if(b&&b.includes("www.youtube-nocookie.com"))return d;(b=c.Zb||O("AUTHORIZATION"))||(a?b="Bearer "+C("gapi.auth.getToken")().Yb:b=qe([]));b&&(d.Authorization=b,d["X-Goog-AuthUser"]=O("SESSION_INDEX",0),Q("pageid_as_header_web")&&(d["X-Goog-PageId"]=O("DELEGATED_SESSION_ID")));return d}
function Jl(a,b){yl.h||(yl.h=new yl);var c=C("yt.gcf.config.coldConfigData");var d=C("yt.gcf.config.hotHashData");var e=C("yt.gcf.config.coldHashData");if(c&&e&&d)if(a){var f;b=null!=(f=qd(a,hh,62))?f:new hh;I(b,1,c);I(b,3,e);I(b,5,d);J(a,hh,62,b)}else b&&(b.client.configInfo=b.client.configInfo||{},b.client.configInfo.coldConfigData=c,b.client.configInfo.coldHashData=e,b.client.configInfo.hotHashData=d)}
;function Ml(a){a=Object.assign({},a);delete a.Authorization;var b=qe();if(b){var c=new Jf;c.update(O("INNERTUBE_API_KEY"));c.update(b);a.hash=wc(c.digest(),3)}return a}
;var Nl;function Ol(){Nl||(Nl=new gj("yt.innertube"));return Nl}
function Pl(a,b,c,d){if(d)return null;d=Ol().get("nextId",!0)||1;var e=Ol().get("requests",!0)||{};e[d]={method:a,request:b,authState:Ml(c),requestTime:Math.round(V())};Ol().set("nextId",d+1,86400,!0);Ol().set("requests",e,86400,!0);return d}
function Ql(a){var b=Ol().get("requests",!0)||{};delete b[a];Ol().set("requests",b,86400,!0)}
function Rl(a){var b=Ol().get("requests",!0);if(b){for(var c in b){var d=b[c];if(!(6E4>Math.round(V())-d.requestTime)){var e=d.authState,f=Ml(Ll(!1));lb(e,f)&&(e=d.request,"requestTimeMs"in e&&(e.requestTimeMs=Math.round(V())),Sl(a,d.method,e,{}));delete b[c]}}Ol().set("requests",b,86400,!0)}}
;function Tl(a){this.ta=this.h=!1;this.potentialEsfErrorCounter=this.i=0;this.handleError=function(){};
this.da=function(){};
this.now=Date.now;this.ja=!1;var b;this.hb=null!=(b=a.hb)?b:100;var c;this.gb=null!=(c=a.gb)?c:1;var d;this.eb=null!=(d=a.eb)?d:2592E6;var e;this.cb=null!=(e=a.cb)?e:12E4;var f;this.fb=null!=(f=a.fb)?f:5E3;var g;this.A=null!=(g=a.A)?g:void 0;this.ya=!!a.ya;var h;this.xa=null!=(h=a.xa)?h:.1;var k;this.Da=null!=(k=a.Da)?k:10;a.handleError&&(this.handleError=a.handleError);a.da&&(this.da=a.da);a.ja&&(this.ja=a.ja);a.ta&&(this.ta=a.ta);this.B=a.B;this.J=a.J;this.D=a.D;this.F=a.F;this.P=a.P;this.Oa=a.Oa;
this.Na=a.Na;Ul(this)&&(!this.B||this.B("networkless_logging"))&&Vl(this)}
function Vl(a){Ul(a)&&!a.ja&&(a.h=!0,a.ya&&Math.random()<=a.xa&&a.D.ob(a.A),Wl(a),a.F.I()&&a.na(),a.F.X(a.Oa,a.na.bind(a)),a.F.X(a.Na,a.Ra.bind(a)))}
p=Tl.prototype;p.writeThenSend=function(a,b){var c=this;b=void 0===b?{}:b;if(Ul(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.D.set(d,this.A).then(function(e){d.id=e;c.F.I()&&Xl(c,d)}).catch(function(e){Xl(c,d);
Yl(c,e)})}else this.P(a,b)};
p.sendThenWrite=function(a,b,c){var d=this;b=void 0===b?{}:b;if(Ul(this)&&this.h){var e={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.B&&this.B("nwl_skip_retry")&&(e.skipRetry=c);if(this.F.I()||this.B&&this.B("nwl_aggressive_send_then_write")&&!e.skipRetry){if(!e.skipRetry){var f=b.onError?b.onError:function(){};
b.onError=function(g,h){return x(function(k){if(1==k.h)return w(k,d.D.set(e,d.A).catch(function(l){Yl(d,l)}),2);
f(g,h);k.h=0})}}this.P(a,b,e.skipRetry)}else this.D.set(e,this.A).catch(function(g){d.P(a,b,e.skipRetry);
Yl(d,g)})}else this.P(a,b,this.B&&this.B("nwl_skip_retry")&&c)};
p.sendAndWrite=function(a,b){var c=this;b=void 0===b?{}:b;if(Ul(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0},e=!1,f=b.onSuccess?b.onSuccess:function(){};
d.options.onSuccess=function(g,h){void 0!==d.id?c.D.ba(d.id,c.A):e=!0;c.F.Y&&c.B&&c.B("vss_network_hint")&&c.F.Y(!0);f(g,h)};
this.P(d.url,d.options);this.D.set(d,this.A).then(function(g){d.id=g;e&&c.D.ba(d.id,c.A)}).catch(function(g){Yl(c,g)})}else this.P(a,b)};
p.na=function(){var a=this;if(!Ul(this))throw zj("throttleSend");this.i||(this.i=this.J.L(function(){var b;return x(function(c){if(1==c.h)return w(c,a.D.Va("NEW",a.A),2);if(3!=c.h)return b=c.i,b?w(c,Xl(a,b),3):(a.Ra(),c.return());a.i&&(a.i=0,a.na());c.h=0})},this.hb))};
p.Ra=function(){this.J.aa(this.i);this.i=0};
function Xl(a,b){var c,d;return x(function(e){switch(e.h){case 1:if(!Ul(a))throw c=zj("immediateSend"),c;if(void 0===b.id){e.s(2);break}return w(e,a.D.zb(b.id,a.A),3);case 3:(d=e.i)?b=d:a.da(Error("The request cannot be found in the database."));case 2:if(Zl(a,b,a.eb)){e.s(4);break}a.da(Error("Networkless Logging: Stored logs request expired age limit"));if(void 0===b.id){e.s(5);break}return w(e,a.D.ba(b.id,a.A),5);case 5:return e.return();case 4:b.skipRetry||(b=$l(a,b));if(!b){e.s(0);break}if(!b.skipRetry||
void 0===b.id){e.s(8);break}return w(e,a.D.ba(b.id,a.A),8);case 8:a.P(b.url,b.options,!!b.skipRetry),e.h=0}})}
function $l(a,b){if(!Ul(a))throw zj("updateRequestHandlers");var c=b.options.onError?b.options.onError:function(){};
b.options.onError=function(e,f){var g,h,k;return x(function(l){switch(l.h){case 1:g=am(f);if(!(a.B&&a.B("nwl_consider_error_code")&&g||a.B&&!a.B("nwl_consider_error_code")&&a.potentialEsfErrorCounter<=a.Da)){l.s(2);break}if(!a.F.Fa){l.s(3);break}return w(l,a.F.Fa(),3);case 3:if(a.F.I()){l.s(2);break}c(e,f);if(!a.B||!a.B("nwl_consider_error_code")||void 0===(null==(h=b)?void 0:h.id)){l.s(6);break}return w(l,a.D.Pa(b.id,a.A,!1),6);case 6:return l.return();case 2:if(a.B&&a.B("nwl_consider_error_code")&&
!g&&a.potentialEsfErrorCounter>a.Da)return l.return();a.potentialEsfErrorCounter++;if(void 0===(null==(k=b)?void 0:k.id)){l.s(8);break}return b.sendCount<a.gb?w(l,a.D.Pa(b.id,a.A),12):w(l,a.D.ba(b.id,a.A),8);case 12:a.J.L(function(){a.F.I()&&a.na()},a.fb);
case 8:c(e,f),l.h=0}})};
var d=b.options.onSuccess?b.options.onSuccess:function(){};
b.options.onSuccess=function(e,f){var g;return x(function(h){if(1==h.h)return void 0===(null==(g=b)?void 0:g.id)?h.s(2):w(h,a.D.ba(b.id,a.A),2);a.F.Y&&a.B&&a.B("vss_network_hint")&&a.F.Y(!0);d(e,f);h.h=0})};
return b}
function Zl(a,b,c){b=b.timestamp;return a.now()-b>=c?!1:!0}
function Wl(a){if(!Ul(a))throw zj("retryQueuedRequests");a.D.Va("QUEUED",a.A).then(function(b){b&&!Zl(a,b,a.cb)?a.J.L(function(){return x(function(c){if(1==c.h)return void 0===b.id?c.s(2):w(c,a.D.Pa(b.id,a.A),2);Wl(a);c.h=0})}):a.F.I()&&a.na()})}
function Yl(a,b){a.ib&&!a.F.I()?a.ib(b):a.handleError(b)}
function Ul(a){return!!a.A||a.ta}
function am(a){var b;return(a=null==a?void 0:null==(b=a.error)?void 0:b.code)&&400<=a&&599>=a?!1:!0}
;var bm=C("ytPubsub2Pubsub2Instance")||new N;N.prototype.subscribe=N.prototype.subscribe;N.prototype.unsubscribeByKey=N.prototype.oa;N.prototype.publish=N.prototype.fa;N.prototype.clear=N.prototype.clear;B("ytPubsub2Pubsub2Instance",bm);B("ytPubsub2Pubsub2SubscribedKeys",C("ytPubsub2Pubsub2SubscribedKeys")||{});B("ytPubsub2Pubsub2TopicToKeys",C("ytPubsub2Pubsub2TopicToKeys")||{});B("ytPubsub2Pubsub2IsAsync",C("ytPubsub2Pubsub2IsAsync")||{});B("ytPubsub2Pubsub2SkipSubKey",null);var cm;
function dm(){if(cm)return cm();var a={};cm=sl("LogsDatabaseV2",{ea:(a.LogsRequestsStore={ha:2},a),Ga:!1,upgrade:function(b,c,d){c(2)&&Oj(b,"LogsRequestsStore",{keyPath:"id",autoIncrement:!0});c(3);c(5)&&(d=d.objectStore("LogsRequestsStore"),d.h.indexNames.contains("newRequest")&&d.h.deleteIndex("newRequest"),Vj(d,"newRequestV2",["status","interface","timestamp"]));c(7)&&b.h.objectStoreNames.contains("sapisid")&&b.h.deleteObjectStore("sapisid");c(9)&&b.h.objectStoreNames.contains("SWHealthLog")&&b.h.deleteObjectStore("SWHealthLog")},
version:9});return cm()}
;function em(a){return Wk(dm(),a)}
function fm(a,b){var c,d,e,f;return x(function(g){if(1==g.h)return c={startTime:V(),transactionType:"YT_IDB_TRANSACTION_TYPE_WRITE"},w(g,em(b),2);if(3!=g.h)return d=g.i,e=Object.assign({},a,{options:JSON.parse(JSON.stringify(a.options)),interface:O("INNERTUBE_CONTEXT_CLIENT_NAME",0)}),w(g,Qj(d,"LogsRequestsStore",e),3);f=g.i;c.Eb=V();gm(c);return g.return(f)})}
function hm(a,b){var c,d,e,f,g,h,k;return x(function(l){if(1==l.h)return c={startTime:V(),transactionType:"YT_IDB_TRANSACTION_TYPE_READ"},w(l,em(b),2);if(3!=l.h)return d=l.i,e=O("INNERTUBE_CONTEXT_CLIENT_NAME",0),f=[a,e,0],g=[a,e,V()],h=IDBKeyRange.bound(f,g),k=void 0,w(l,Nj(d,["LogsRequestsStore"],{mode:"readwrite",H:!0},function(m){return Ok(m.objectStore("LogsRequestsStore").index("newRequestV2"),{query:h,direction:"prev"},function(n){n.S()&&(k=n.S(),"NEW"===a&&(k.status="QUEUED",n.update(k)))})}),
3);
c.Eb=V();gm(c);return l.return(k)})}
function im(a,b){var c;return x(function(d){if(1==d.h)return w(d,em(b),2);c=d.i;return d.return(Nj(c,["LogsRequestsStore"],{mode:"readwrite",H:!0},function(e){var f=e.objectStore("LogsRequestsStore");return f.get(a).then(function(g){if(g)return g.status="QUEUED",Jj(f.h.put(g,void 0)).then(function(){return g})})}))})}
function jm(a,b,c){c=void 0===c?!0:c;var d;return x(function(e){if(1==e.h)return w(e,em(b),2);d=e.i;return e.return(Nj(d,["LogsRequestsStore"],{mode:"readwrite",H:!0},function(f){var g=f.objectStore("LogsRequestsStore");return g.get(a).then(function(h){return h?(h.status="NEW",c&&(h.sendCount+=1),Jj(g.h.put(h,void 0)).then(function(){return h})):U.resolve(void 0)})}))})}
function km(a,b){var c;return x(function(d){if(1==d.h)return w(d,em(b),2);c=d.i;return d.return(c.delete("LogsRequestsStore",a))})}
function lm(a){var b,c;return x(function(d){if(1==d.h)return w(d,em(a),2);b=d.i;c=V()-2592E6;return w(d,Nj(b,["LogsRequestsStore"],{mode:"readwrite",H:!0},function(e){return Xj(e.objectStore("LogsRequestsStore"),{},function(f){if(f.S().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function mm(){x(function(a){return w(a,ol(),0)})}
function gm(a){if(!Q("nwl_csi_killswitch")&&.01>=Math.random()){var b=C("ytPubsub2Pubsub2Instance");b&&b.publish.call(b,"nwl_transaction_latency_payload".toString(),"nwl_transaction_latency_payload",a)}}
;var nm={},om=sl("ServiceWorkerLogsDatabase",{ea:(nm.SWHealthLog={ha:1},nm),Ga:!0,upgrade:function(a,b){b(1)&&Vj(Oj(a,"SWHealthLog",{keyPath:"id",autoIncrement:!0}),"swHealthNewRequest",["interface","timestamp"])},
version:1});function pm(a){return Wk(om(),a)}
function qm(a){var b,c;x(function(d){if(1==d.h)return w(d,pm(a),2);b=d.i;c=V()-2592E6;return w(d,Nj(b,["SWHealthLog"],{mode:"readwrite",H:!0},function(e){return Xj(e.objectStore("SWHealthLog"),{},function(f){if(f.S().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function rm(a){var b;return x(function(c){if(1==c.h)return w(c,pm(a),2);b=c.i;return w(c,b.clear("SWHealthLog"),0)})}
;var sm={},tm=0;function um(a){var b=new Image,c=""+tm++;sm[c]=b;b.onload=b.onerror=function(){delete sm[c]};
b.src=a}
;function W(){this.h=new Map;this.i=!1}
function vm(){if(!W.h){var a=C("yt.networkRequestMonitor.instance")||new W;B("yt.networkRequestMonitor.instance",a);W.h=a}return W.h}
W.prototype.requestComplete=function(a,b){b&&(this.i=!0);a=this.removeParams(a);this.h.get(a)||this.h.set(a,b)};
W.prototype.isEndpointCFR=function(a){a=this.removeParams(a);return(a=this.h.get(a))?!1:!1===a&&this.i?!0:null};
W.prototype.removeParams=function(a){return a.split("?")[0]};
W.prototype.removeParams=W.prototype.removeParams;W.prototype.isEndpointCFR=W.prototype.isEndpointCFR;W.prototype.requestComplete=W.prototype.requestComplete;W.getInstance=vm;var wm;function xm(){wm||(wm=new gj("yt.offline"));return wm}
function ym(a){if(Q("offline_error_handling")){var b=xm().get("errors",!0)||{};b[a.message]={name:a.name,stack:a.stack};a.level&&(b[a.message].level=a.level);xm().set("errors",b,2592E3,!0)}}
;function Z(){Re.call(this);var a=this;this.l=!1;this.i=Xe();this.i.X("networkstatus-online",function(){if(a.l&&Q("offline_error_handling")){var b=xm().get("errors",!0);if(b){for(var c in b)if(b[c]){var d=new cj(c,"sent via offline_errors");d.name=b[c].name;d.stack=b[c].stack;d.level=b[c].level;bi(d)}xm().set("errors",{},2592E3,!0)}}})}
v(Z,Re);function zm(){if(!Z.h){var a=C("yt.networkStatusManager.instance")||new Z;B("yt.networkStatusManager.instance",a);Z.h=a}return Z.h}
p=Z.prototype;p.I=function(){return this.i.I()};
p.Y=function(a){this.i.i=a};
p.tb=function(){var a=window.navigator.onLine;return void 0===a?!0:a};
p.qb=function(){this.l=!0};
p.X=function(a,b){return this.i.X(a,b)};
p.Fa=function(a){a=Ve(this.i,a);a.then(function(b){Q("use_cfr_monitor")&&vm().requestComplete("generate_204",b)});
return a};
Z.prototype.sendNetworkCheckRequest=Z.prototype.Fa;Z.prototype.listen=Z.prototype.X;Z.prototype.enableErrorFlushing=Z.prototype.qb;Z.prototype.getWindowStatus=Z.prototype.tb;Z.prototype.networkStatusHint=Z.prototype.Y;Z.prototype.isNetworkAvailable=Z.prototype.I;Z.getInstance=zm;function Am(a){a=void 0===a?{}:a;Re.call(this);var b=this;this.i=this.u=0;this.l=zm();var c=C("yt.networkStatusManager.instance.listen").bind(this.l);c&&(a.Ea?(this.Ea=a.Ea,c("networkstatus-online",function(){Bm(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){Bm(b,"publicytnetworkstatus-offline")})):(c("networkstatus-online",function(){Se(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){Se(b,"publicytnetworkstatus-offline")})))}
v(Am,Re);Am.prototype.I=function(){var a=C("yt.networkStatusManager.instance.isNetworkAvailable");return a?a.bind(this.l)():!0};
Am.prototype.Y=function(a){var b=C("yt.networkStatusManager.instance.networkStatusHint").bind(this.l);b&&b(a)};
Am.prototype.Fa=function(a){var b=this,c;return x(function(d){c=C("yt.networkStatusManager.instance.sendNetworkCheckRequest").bind(b.l);return Q("skip_network_check_if_cfr")&&vm().isEndpointCFR("generate_204")?d.return(new Promise(function(e){var f;b.Y((null==(f=window.navigator)?void 0:f.onLine)||!0);e(b.I())})):c?d.return(c(a)):d.return(!0)})};
function Bm(a,b){a.Ea?a.i?(Ye.aa(a.u),a.u=Ye.L(function(){a.m!==b&&(Se(a,b),a.m=b,a.i=V())},a.Ea-(V()-a.i))):(Se(a,b),a.m=b,a.i=V()):Se(a,b)}
;var Cm;function Dm(){var a=Tl.call;Cm||(Cm=new Am({ec:!0,dc:!0}));a.call(Tl,this,{D:{ob:lm,ba:km,Va:hm,zb:im,Pa:jm,set:fm},F:Cm,handleError:bi,da:ci,P:Em,now:V,ib:ym,J:bj(),Oa:"publicytnetworkstatus-online",Na:"publicytnetworkstatus-offline",ya:!0,xa:.1,Da:yi("potential_esf_error_limit",10),B:Q,ja:!(dj()&&"www.youtube-nocookie.com"!==Qb(document.location.toString()))});this.j=new ug;Q("networkless_immediately_drop_all_requests")&&mm();pl("LogsDatabaseV2")}
v(Dm,Tl);function Fm(){var a=C("yt.networklessRequestController.instance");a||(a=new Dm,B("yt.networklessRequestController.instance",a),Q("networkless_logging")&&hl().then(function(b){a.A=b;Vl(a);a.j.resolve();a.ya&&Math.random()<=a.xa&&a.A&&qm(a.A);Q("networkless_immediately_drop_sw_health_store")&&Gm(a)}));
return a}
Dm.prototype.writeThenSend=function(a,b){b||(b={});dj()||(this.h=!1);Tl.prototype.writeThenSend.call(this,a,b)};
Dm.prototype.sendThenWrite=function(a,b,c){b||(b={});dj()||(this.h=!1);Tl.prototype.sendThenWrite.call(this,a,b,c)};
Dm.prototype.sendAndWrite=function(a,b){b||(b={});dj()||(this.h=!1);Tl.prototype.sendAndWrite.call(this,a,b)};
Dm.prototype.awaitInitialization=function(){return this.j.promise};
function Gm(a){var b;x(function(c){if(!a.A)throw b=zj("clearSWHealthLogsDb"),b;return c.return(rm(a.A).catch(function(d){a.handleError(d)}))})}
function Em(a,b,c){Q("use_cfr_monitor")&&Hm(a,b);if(Q("use_request_time_ms_header"))b.headers&&(b.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(V())));else{var d;if(null==(d=b.postParams)?0:d.requestTimeMs)b.postParams.requestTimeMs=Math.round(V())}if(c&&0===Object.keys(b).length){var e=void 0===e?"":e;var f=void 0===f?!1:f;if(a)if(e)Mi(a,void 0,"POST",e);else if(O("USE_NET_AJAX_FOR_PING_TRANSPORT",!1))Mi(a,void 0,"GET","",void 0,void 0,f);else{b:{try{var g=new Ya({url:a});if(g.j&&g.i||
g.l){var h=Pb(a.match(Ob)[5]||null);var k=!(!h||!h.endsWith("/aclk")||"1"!==Zb(a,"ri"));break b}}catch(m){}k=!1}if(k){b:{try{if(window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,"")){var l=!0;break b}}catch(m){}l=!1}c=l?!0:!1}else c=!1;c||um(a)}}else Ji(a,b)}
function Hm(a,b){var c=b.onError?b.onError:function(){};
b.onError=function(e,f){vm().requestComplete(a,!1);c(e,f)};
var d=b.onSuccess?b.onSuccess:function(){};
b.onSuccess=function(e,f){vm().requestComplete(a,!0);d(e,f)}}
;var Im=z.ytNetworklessLoggingInitializationOptions||{isNwlInitialized:!1};B("ytNetworklessLoggingInitializationOptions",Im);function Jm(a){var b=this;this.config_=null;a?this.config_=a:Bl()&&(this.config_=Cl());Yi(function(){Rl(b)},5E3)}
Jm.prototype.isReady=function(){!this.config_&&Bl()&&(this.config_=Cl());return!!this.config_};
function Sl(a,b,c,d){function e(y){y=void 0===y?!1:y;var A;if(d.retry&&"www.youtube-nocookie.com"!=h&&(y||Q("skip_ls_gel_retry")||"application/json"!==g.headers["Content-Type"]||(A=Pl(b,c,l,k)),A)){var H=g.onSuccess,K=g.onFetchSuccess;g.onSuccess=function(M,P){Ql(A);H(M,P)};
c.onFetchSuccess=function(M,P){Ql(A);K(M,P)}}try{y&&d.retry&&!d.ab.bypassNetworkless?(g.method="POST",d.ab.writeThenSend?Fm().writeThenSend(q,g):Fm().sendAndWrite(q,g)):Q("web_all_payloads_via_jspb")?Ji(q,g):(g.method="POST",g.postParams||(g.postParams={}),Ji(q,g))}catch(M){if("InvalidAccessError"==M.name)A&&(Ql(A),A=0),ci(Error("An extension is blocking network request."));
else throw M;}A&&Yi(function(){Rl(a)},5E3)}
!O("VISITOR_DATA")&&"visitor_id"!==b&&.01>Math.random()&&ci(new cj("Missing VISITOR_DATA when sending innertube request.",b,c,d));if(!a.isReady()){var f=new cj("innertube xhrclient not ready",b,c,d);bi(f);throw f;}var g={headers:d.headers||{},method:"POST",postParams:c,postBody:d.postBody,postBodyFormat:d.postBodyFormat||"JSON",onTimeout:function(){d.onTimeout()},
onFetchTimeout:d.onTimeout,onSuccess:function(y,A){if(d.onSuccess)d.onSuccess(A)},
onFetchSuccess:function(y){if(d.onSuccess)d.onSuccess(y)},
onError:function(y,A){if(d.onError)d.onError(A)},
onFetchError:function(y){if(d.onError)d.onError(y)},
timeout:d.timeout,withCredentials:!0};g.headers["Content-Type"]||(g.headers["Content-Type"]="application/json");var h="";(f=a.config_.vb)&&(h=f);var k=a.config_.xb||!1,l=Ll(k,h,d);Object.assign(g.headers,l);(f=g.headers.Authorization)&&!h&&(g.headers["x-origin"]=window.location.origin);var m="/youtubei/"+a.config_.innertubeApiVersion+"/"+b,n={alt:"json"},r=a.config_.wb&&f;r=r&&f.startsWith("Bearer");r||(n.key=a.config_.innertubeApiKey);var q=vi(""+h+m,n||{},!0);C("ytNetworklessLoggingInitializationOptions")&&
Im.isNwlInitialized?fl().then(function(y){e(y)}):e(!1)}
;var Km=window.ytcsi&&window.ytcsi.now?window.ytcsi.now:window.performance&&window.performance.timing&&window.performance.now&&window.performance.timing.navigationStart?function(){return window.performance.timing.navigationStart+window.performance.now()}:function(){return(new Date).getTime()};function Lm(a){this.G=a;this.h=null;this.m=0;this.C=null;this.u=0;this.i=[];for(a=0;4>a;a++)this.i.push(0);this.l=0;this.Ha=li(window,"mousemove",Va(this.Ia,this));this.Ja=ni(Va(this.V,this),25)}
D(Lm,re);Lm.prototype.Ia=function(a){void 0===a.h&&gi(a);var b=a.h;void 0===a.i&&gi(a);this.h=new Hd(b,a.i)};
Lm.prototype.V=function(){if(this.h){var a=Km();if(0!=this.m){var b=this.C,c=this.h,d=b.x-c.x;b=b.y-c.y;d=Math.sqrt(d*d+b*b)/(a-this.m);this.i[this.l]=.5<Math.abs((d-this.u)/this.u)?1:0;for(c=b=0;4>c;c++)b+=this.i[c]||0;3<=b&&this.G();this.u=d}this.m=a;this.C=this.h;this.l=(this.l+1)%4}};
Lm.prototype.ca=function(){window.clearInterval(this.Ja);ji(this.Ha)};var Mm={};
function Nm(){var a={},b=void 0===a.Ab?!1:a.Ab;a=void 0===a.rb?!0:a.rb;if(null==C("_lact",window)){var c=parseInt(O("LACT"),10);c=isFinite(c)?Date.now()-Math.max(c,0):-1;B("_lact",c,window);B("_fact",c,window);-1==c&&Om();li(document,"keydown",Om);li(document,"keyup",Om);li(document,"mousedown",Om);li(document,"mouseup",Om);b?li(window,"touchmove",function(){Pm("touchmove",200)},{passive:!0}):(li(window,"resize",function(){Pm("resize",200)}),a&&li(window,"scroll",function(){Pm("scroll",200)}));
new Lm(function(){Pm("mouse",100)});
li(document,"touchstart",Om,{passive:!0});li(document,"touchend",Om,{passive:!0})}}
function Pm(a,b){Mm[a]||(Mm[a]=!0,Ye.L(function(){Om();Mm[a]=!1},b))}
function Om(){null==C("_lact",window)&&Nm();var a=Date.now();B("_lact",a,window);-1==C("_fact",window)&&B("_fact",a,window);(a=C("ytglobal.ytUtilActivityCallback_"))&&a()}
function Qm(){var a=C("_lact",window);return null==a?-1:Math.max(Date.now()-a,0)}
;var Rm=z.ytPubsubPubsubInstance||new N,Sm=z.ytPubsubPubsubSubscribedKeys||{},Tm=z.ytPubsubPubsubTopicToKeys||{},Um=z.ytPubsubPubsubIsSynchronous||{};N.prototype.subscribe=N.prototype.subscribe;N.prototype.unsubscribeByKey=N.prototype.oa;N.prototype.publish=N.prototype.fa;N.prototype.clear=N.prototype.clear;B("ytPubsubPubsubInstance",Rm);B("ytPubsubPubsubTopicToKeys",Tm);B("ytPubsubPubsubIsSynchronous",Um);B("ytPubsubPubsubSubscribedKeys",Sm);var Vm=Symbol("injectionDeps");function Wm(){this.i=new Map;this.h=new Map}
Wm.prototype.resolve=function(a){return Xm(this,a,[])};
function Xm(a,b,c){var d=void 0===d?!1:d;if(-1<c.indexOf(b))throw Error("Deps cycle for: "+b);if(a.h.has(b))return a.h.get(b);if(!a.i.has(b)){if(d)return;throw Error("No provider for: "+b);}d=a.i.get(b);c.push(b);if(d.Hb)var e=d.Hb;else if(d.Gb)e=d[Vm]?Ym(a,d[Vm],c):[],e=d.Gb.apply(d,ia(e));else if(d.Fb){e=d.Fb;var f=e[Vm]?Ym(a,e[Vm],c):[];e=new (Function.prototype.bind.apply(e,[null].concat(ia(f))))}else throw Error("Could not resolve providers for: "+b);c.pop();d.kc||a.h.set(b,e);return e}
function Ym(a,b,c){return b?b.map(function(d){return Xm(a,d,c)}):[]}
;var Zm;function $m(){this.store={};this.h={}}
$m.prototype.storePayload=function(a,b){a=an(a);this.store[a]?this.store[a].push(b):(this.h={},this.store[a]=[b]);return a};
$m.prototype.extractMatchingEntries=function(a){a=bn(this,a);for(var b=[],c=0;c<a.length;c++)this.store[a[c]]&&(b.push.apply(b,ia(this.store[a[c]])),delete this.store[a[c]]);return b};
$m.prototype.getSequenceCount=function(a){a=bn(this,a);for(var b=0,c=0;c<a.length;c++)b+=this.store[a[c]].length||0;return b};
function bn(a,b){var c=an(b);if(a.h[c])return a.h[c];var d=Object.keys(a.store)||[];if(1>=d.length&&an(b)===d[0])return d;for(var e=[],f=0;f<d.length;f++){var g=d[f].split("/");if(cn(b.auth,g[0])){var h=b.isJspb;cn(void 0===h?"undefined":h?"true":"false",g[1])&&cn(b.cttAuthInfo,g[2])&&e.push(d[f])}}return a.h[c]=e}
function cn(a,b){return void 0===a||"undefined"===a?!0:a===b}
$m.prototype.getSequenceCount=$m.prototype.getSequenceCount;$m.prototype.extractMatchingEntries=$m.prototype.extractMatchingEntries;$m.prototype.storePayload=$m.prototype.storePayload;function an(a){return[void 0===a.auth?"undefined":a.auth,void 0===a.isJspb?"undefined":a.isJspb,void 0===a.cttAuthInfo?"undefined":a.cttAuthInfo].join("/")}
;var dn=yi("initial_gel_batch_timeout",2E3),en=Math.pow(2,16)-1,fn=void 0;function gn(){this.j=this.h=this.i=0}
var hn=new gn,jn=new gn,kn,ln=!0,mn=z.ytLoggingTransportGELQueue_||new Map;B("ytLoggingTransportGELQueue_",mn);var nn=z.ytLoggingTransportGELProtoQueue_||new Map;B("ytLoggingTransportGELProtoQueue_",nn);var on=z.ytLoggingTransportTokensToCttTargetIds_||{};B("ytLoggingTransportTokensToCttTargetIds_",on);var pn=z.ytLoggingTransportTokensToJspbCttTargetIds_||{};B("ytLoggingTransportTokensToJspbCttTargetIds_",pn);var qn={};function rn(){var a=C("yt.logging.ims");a||(a=new $m,B("yt.logging.ims",a));return a}
function sn(a,b){Q("web_all_payloads_via_jspb")&&ci(new cj("transport.log called for JSON in JSPB only experiment"));if("log_event"===a.endpoint){tn(a);var c=un(a);if(Q("use_new_in_memory_storage")){qn[c]=!0;var d={cttAuthInfo:c,isJspb:!1};rn().storePayload(d,a.payload);vn(b,[],c,!1,d)}else d=mn.get(c)||[],mn.set(c,d),d.push(a.payload),vn(b,d,c)}}
function wn(a,b){if("log_event"===a.endpoint){tn(void 0,a);var c=un(a,!0);if(Q("use_new_in_memory_storage")){qn[c]=!0;var d={cttAuthInfo:c,isJspb:!0};rn().storePayload(d,a.payload.toJSON());vn(b,[],c,!0,d)}else d=nn.get(c)||[],nn.set(c,d),a=a.payload.toJSON(),d.push(a),vn(b,d,c,!0)}}
function vn(a,b,c,d,e){d=void 0===d?!1:d;a&&(fn=new a);a=yi("tvhtml5_logging_max_batch")||yi("web_logging_max_batch")||100;var f=V(),g=d?jn.j:hn.j;b=b.length;e&&(b=rn().getSequenceCount(e));b>=a?kn||(kn=xn(function(){yn({writeThenSend:!0},Q("flush_only_full_queue")?c:void 0,d);kn=void 0},0)):10<=f-g&&(zn(d),d?jn.j=f:hn.j=f)}
function An(a,b){Q("web_all_payloads_via_jspb")&&ci(new cj("transport.logIsolatedGelPayload called in JSPB only experiment"));if("log_event"===a.endpoint){tn(a);var c=un(a),d=new Map;d.set(c,[a.payload]);b&&(fn=new b);return new vg(function(e,f){fn&&fn.isReady()?Bn(d,fn,e,f,{bypassNetworkless:!0},!0):e()})}}
function Cn(a,b){if("log_event"===a.endpoint){tn(void 0,a);var c=un(a,!0),d=new Map;d.set(c,[a.payload.toJSON()]);b&&(fn=new b);return new vg(function(e){fn&&fn.isReady()?Dn(d,fn,e,{bypassNetworkless:!0},!0):e()})}}
function un(a,b){var c="";if(a.ia)c="visitorOnlyApprovedKey";else if(a.cttAuthInfo){if(void 0===b?0:b){b=a.cttAuthInfo.token;c=a.cttAuthInfo;var d=new Oh;c.videoId?od(d,1,Ph,c.videoId):c.playlistId&&od(d,2,Ph,c.playlistId);pn[b]=d}else b=a.cttAuthInfo,c={},b.videoId?c.videoId=b.videoId:b.playlistId&&(c.playlistId=b.playlistId),on[a.cttAuthInfo.token]=c;c=a.cttAuthInfo.token}return c}
function yn(a,b,c){a=void 0===a?{}:a;c=void 0===c?!1:c;!c&&Q("web_all_payloads_via_jspb")&&ci(new cj("transport.flushLogs called for JSON in JSPB only experiment"));new vg(function(d,e){c?(En(jn.i),En(jn.h),jn.h=0):(En(hn.i),En(hn.h),hn.h=0);if(fn&&fn.isReady())if(Q("use_new_in_memory_storage")){var f=a,g=c,h=fn;f=void 0===f?{}:f;g=void 0===g?!1:g;var k=new Map,l=new Map;if(void 0!==b)g?(e=rn().extractMatchingEntries({isJspb:g,cttAuthInfo:b}),k.set(b,e),Dn(k,h,d,f)):(k=rn().extractMatchingEntries({isJspb:g,
cttAuthInfo:b}),l.set(b,k),Bn(l,h,d,e,f));else if(g){e=u(Object.keys(qn));for(g=e.next();!g.done;g=e.next())l=g.value,g=rn().extractMatchingEntries({isJspb:!0,cttAuthInfo:l}),0<g.length&&k.set(l,g),delete qn[l];Dn(k,h,d,f)}else{k=u(Object.keys(qn));for(g=k.next();!g.done;g=k.next()){g=g.value;var m=rn().extractMatchingEntries({isJspb:!1,cttAuthInfo:g});0<m.length&&l.set(g,m);delete qn[g]}Bn(l,h,d,e,f)}}else f=a,k=c,h=fn,f=void 0===f?{}:f,k=void 0===k?!1:k,void 0!==b?k?(e=new Map,k=nn.get(b)||[],e.set(b,
k),Dn(e,h,d,f),nn.delete(b)):(k=new Map,l=mn.get(b)||[],k.set(b,l),Bn(k,h,d,e,f),mn.delete(b)):k?(Dn(nn,h,d,f),nn.clear()):(Bn(mn,h,d,e,f),mn.clear());else zn(c),d()})}
function zn(a){a=void 0===a?!1:a;if(Q("web_gel_timeout_cap")&&(!a&&!hn.h||a&&!jn.h)){var b=xn(function(){yn({writeThenSend:!0},void 0,a)},6E4);
a?jn.h=b:hn.h=b}En(a?jn.i:hn.i);b=O("LOGGING_BATCH_TIMEOUT",yi("web_gel_debounce_ms",1E4));Q("shorten_initial_gel_batch_timeout")&&ln&&(b=dn);b=xn(function(){yn({writeThenSend:!0},void 0,a)},b);
a?jn.i=b:hn.i=b}
function Bn(a,b,c,d,e,f){e=void 0===e?{}:e;var g=Math.round(V()),h=a.size,k={};a=u(a);for(var l=a.next();!l.done;k={qa:k.qa,U:k.U,ga:k.ga,sa:k.sa,ra:k.ra},l=a.next()){var m=u(l.value);l=m.next().value;m=m.next().value;k.U=mb({context:Dl(b.config_||Cl())});if(!Oa(m)&&!Q("throw_err_when_logevent_malformed_killswitch")){d();break}k.U.events=m;(m=on[l])&&Fn(k.U,l,m);delete on[l];k.ga="visitorOnlyApprovedKey"===l;Gn(k.U,g,k.ga);Hn(e);k.sa=function(n){Q("update_log_event_config")&&Ye.L(function(){return x(function(r){return w(r,
In(n),0)})});
h--;h||c()};
k.qa=0;k.ra=function(n){return function(){n.qa++;if(e.bypassNetworkless&&1===n.qa)try{Sl(b,"log_event",n.U,Jn({writeThenSend:!0},n.ga,n.sa,n.ra,f)),ln=!1}catch(r){bi(r),d()}h--;h||c()}}(k);
try{Sl(b,"log_event",k.U,Jn(e,k.ga,k.sa,k.ra,f)),ln=!1}catch(n){bi(n),d()}}}
function Dn(a,b,c,d,e){d=void 0===d?{}:d;var f=Math.round(V()),g=a.size,h=new Map([].concat(ia(a)));h=u(h);for(var k=h.next();!k.done;k=h.next()){var l=u(k.value).next().value,m=a.get(l);k=new Qh;var n=Kl(b.config_||Cl());J(k,uh,1,n);m=m?Kn(m):[];m=u(m);for(n=m.next();!n.done;n=m.next())vd(k,3,Lh,n.value);(m=pn[l])&&Ln(k,l,m);delete pn[l];l="visitorOnlyApprovedKey"===l;Mn(k,f,l);Hn(d);k=Dd(k);l=Jn(d,l,function(r){Q("update_log_event_config")&&Ye.L(function(){return x(function(q){return w(q,In(r),
0)})});
g--;g||c()},function(){g--;
g||c()},e);
l.headers["Content-Type"]="application/json+protobuf";l.postBodyFormat="JSPB";l.postBody=k;Sl(b,"log_event","",l);ln=!1}}
function Hn(a){Q("always_send_and_write")&&(a.writeThenSend=!1)}
function Jn(a,b,c,d,e){a={retry:!0,onSuccess:c,onError:d,ab:a,ia:b,cc:!!e,headers:{},postBodyFormat:"",postBody:""};Nn()&&(a.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(V())));return a}
function Gn(a,b,c){Nn()||(a.requestTimeMs=String(b));Q("unsplit_gel_payloads_in_logs")&&(a.unsplitGelPayloadsInLogs=!0);!c&&(b=O("EVENT_ID"))&&(c=On(),a.serializedClientEventId={serializedEventId:b,clientCounter:String(c)})}
function Mn(a,b,c){Nn()||I(a,2,b);if(!c&&(b=O("EVENT_ID"))){c=On();var d=new Nh;I(d,1,b);I(d,2,c);J(a,Nh,5,d)}}
function On(){var a=O("BATCH_CLIENT_COUNTER")||0;a||(a=Math.floor(Math.random()*en/2));a++;a>en&&(a=1);Wh("BATCH_CLIENT_COUNTER",a);return a}
function Fn(a,b,c){if(c.videoId)var d="VIDEO";else if(c.playlistId)d="PLAYLIST";else return;a.credentialTransferTokenTargetId=c;a.context=a.context||{};a.context.user=a.context.user||{};a.context.user.credentialTransferTokens=[{token:b,scope:d}]}
function Ln(a,b,c){if(wd(c,1===pd(c,Ph)?1:-1))var d=1;else if(c.getPlaylistId())d=2;else return;J(a,Oh,4,c);a=qd(a,uh,1)||new uh;c=qd(a,sh,3)||new sh;var e=new rh;I(e,2,b);I(e,1,d);vd(c,12,rh,e);J(a,sh,3,c)}
function Kn(a){for(var b=[],c=0;c<a.length;c++)try{b.push(new Lh(a[c]))}catch(d){bi(new cj("Transport failed to deserialize "+String(a[c])))}return b}
function tn(a,b){if(C("yt.logging.transport.enableScrapingForTest")){var c=C("yt.logging.transport.scrapedPayloadsForTesting"),d=C("yt.logging.transport.payloadToScrape","");b&&(b=C("yt.logging.transport.getScrapedPayloadFromClientEventsFunction").bind(b.payload)())&&c.push(b);a&&a.payload[d]&&c.push((null==a?void 0:a.payload)[d]);B("yt.logging.transport.scrapedPayloadsForTesting",c)}}
function Nn(){return Q("use_request_time_ms_header")||Q("lr_use_request_time_ms_header")}
function xn(a,b){return Q("transport_use_scheduler")?Yi(a,b):mi(a,b)}
function En(a){Q("transport_use_scheduler")?Ye.aa(a):window.clearTimeout(a)}
function In(a){var b,c,d,e,f,g,h,k,l,m;return x(function(n){if(1==n.h){d=null==(b=a)?void 0:null==(c=b.responseContext)?void 0:c.globalConfigGroup;var r=d?d[eh.name]:void 0;e=r;g=null==(f=d)?void 0:f.hotHashData;r=d?d[dh.name]:void 0;h=r;l=null==(k=d)?void 0:k.coldHashData;Zm||(Zm=new Wm);m=Zm.resolve(yl);return e&&g?w(n,zl(m,e,g),2):n.s(2)}return h&&l?w(n,Al(m,h,l),0):n.s(0)})}
;var Pn=z.ytLoggingGelSequenceIdObj_||{};B("ytLoggingGelSequenceIdObj_",Pn);
function Qn(a,b,c,d){d=void 0===d?{}:d;var e={},f=Math.round(d.timestamp||V());e.eventTimeMs=f<Number.MAX_SAFE_INTEGER?f:0;e[a]=b;Q("enable_unknown_lact_fix_on_html5")&&Nm();a=Qm();e.context={lastActivityMs:String(d.timestamp||!isFinite(a)?-1:a)};Q("log_sequence_info_on_gel_web")&&d.ma&&(a=e.context,b=d.ma,b={index:Rn(b),groupKey:b},a.sequence=b,d.sb&&delete Pn[d.ma]);(d.Cb?An:sn)({endpoint:"log_event",payload:e,cttAuthInfo:d.cttAuthInfo,ia:d.ia},c)}
function Sn(a){yn(void 0,void 0,void 0===a?!1:a)}
function Rn(a){Pn[a]=a in Pn?Pn[a]+1:0;return Pn[a]}
;var Tn=[];var Un=z.ytLoggingGelSequenceIdObj_||{};B("ytLoggingGelSequenceIdObj_",Un);function Vn(a){var b=void 0;b=void 0===b?{}:b;var c=!1;O("ytLoggingEventsDefaultDisabled",!1)&&(c=!0);c=c?null:Jm;b=void 0===b?{}:b;var d=Math.round(b.timestamp||V());I(a,1,d<Number.MAX_SAFE_INTEGER?d:0);var e=Qm();d=new Kh;I(d,1,b.timestamp||!isFinite(e)?-1:e);if(Q("log_sequence_info_on_gel_web")&&b.ma){e=b.ma;var f=Rn(e),g=new Jh;I(g,2,f);I(g,1,e);J(d,Jh,3,g);b.sb&&delete Un[b.ma]}J(a,Kh,33,d);(b.Cb?Cn:wn)({endpoint:"log_event",payload:a,cttAuthInfo:b.cttAuthInfo,ia:b.ia},c)}
;function Wn(a,b){var c=void 0===c?{}:c;if(Q("migrate_events_to_ts")){c=void 0===c?{}:c;var d=Jm;O("ytLoggingEventsDefaultDisabled",!1)&&Jm===Jm&&(d=null);Q("web_all_payloads_via_jspb")?Tn.push({ic:a,payload:b,options:c}):Qn(a,b,d,c)}else d=Jm,O("ytLoggingEventsDefaultDisabled",!1)&&Jm==Jm&&(d=null),Qn(a,b,d,c)}
;var Xn=[{Ma:function(a){return"Cannot read property '"+a.key+"'"},
Ca:{Error:[{regexp:/(Permission denied) to access property "([^']+)"/,groups:["reason","key"]}],TypeError:[{regexp:/Cannot read property '([^']+)' of (null|undefined)/,groups:["key","value"]},{regexp:/\u65e0\u6cd5\u83b7\u53d6\u672a\u5b9a\u4e49\u6216 (null|undefined) \u5f15\u7528\u7684\u5c5e\u6027\u201c([^\u201d]+)\u201d/,groups:["value","key"]},{regexp:/\uc815\uc758\ub418\uc9c0 \uc54a\uc74c \ub610\ub294 (null|undefined) \ucc38\uc870\uc778 '([^']+)' \uc18d\uc131\uc744 \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4./,
groups:["value","key"]},{regexp:/No se puede obtener la propiedad '([^']+)' de referencia nula o sin definir/,groups:["key"]},{regexp:/Unable to get property '([^']+)' of (undefined or null) reference/,groups:["key","value"]},{regexp:/(null) is not an object \(evaluating '(?:([^.]+)\.)?([^']+)'\)/,groups:["value","base","key"]}]}},{Ma:function(a){return"Cannot call '"+a.key+"'"},
Ca:{TypeError:[{regexp:/(?:([^ ]+)?\.)?([^ ]+) is not a function/,groups:["base","key"]},{regexp:/([^ ]+) called on (null or undefined)/,groups:["key","value"]},{regexp:/Object (.*) has no method '([^ ]+)'/,groups:["base","key"]},{regexp:/Object doesn't support property or method '([^ ]+)'/,groups:["key"]},{regexp:/\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f '([^']+)' \u30d7\u30ed\u30d1\u30c6\u30a3\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093/,
groups:["key"]},{regexp:/\uac1c\uccb4\uac00 '([^']+)' \uc18d\uc131\uc774\ub098 \uba54\uc11c\ub4dc\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4./,groups:["key"]}]}},{Ma:function(a){return a.key+" is not defined"},
Ca:{ReferenceError:[{regexp:/(.*) is not defined/,groups:["key"]},{regexp:/Can't find variable: (.*)/,groups:["key"]}]}}];var Zn={T:[],R:[{nb:Yn,weight:500}]};function Yn(a){if("JavaException"===a.name)return!0;a=a.stack;return a.includes("chrome://")||a.includes("chrome-extension://")||a.includes("moz-extension://")}
;function $n(){this.R=[];this.T=[]}
var ao;function bo(){if(!ao){var a=ao=new $n;a.T.length=0;a.R.length=0;Zn.T&&a.T.push.apply(a.T,Zn.T);Zn.R&&a.R.push.apply(a.R,Zn.R)}return ao}
;var co=new N;function eo(a){function b(){return a.charCodeAt(d++)}
var c=a.length,d=0;do{var e=fo(b);if(Infinity===e)break;var f=e>>3;switch(e&7){case 0:e=fo(b);if(2===f)return e;break;case 1:if(2===f)return;d+=8;break;case 2:e=fo(b);if(2===f)return a.substr(d,e);d+=e;break;case 5:if(2===f)return;d+=4;break;default:return}}while(d<c)}
function fo(a){var b=a(),c=b&127;if(128>b)return c;b=a();c|=(b&127)<<7;if(128>b)return c;b=a();c|=(b&127)<<14;if(128>b)return c;b=a();return 128>b?c|(b&127)<<21:Infinity}
;function go(a,b,c,d){if(a)if(Array.isArray(a)){var e=d;for(d=0;d<a.length&&!(a[d]&&(e+=ho(d,a[d],b,c),500<e));d++);d=e}else if("object"===typeof a)for(e in a){if(a[e]){var f=a[e];var g=b;var h=c;g="string"!==typeof f||"clickTrackingParams"!==e&&"trackingParams"!==e?0:(f=eo(atob(f.replace(/-/g,"+").replace(/_/g,"/"))))?ho(e+".ve",f,g,h):0;d+=g;d+=ho(e,a[e],b,c);if(500<d)break}}else c[b]=io(a),d+=c[b].length;else c[b]=io(a),d+=c[b].length;return d}
function ho(a,b,c,d){c+="."+a;a=io(b);d[c]=a;return c.length+a.length}
function io(a){try{return("string"===typeof a?a:String(JSON.stringify(a))).substr(0,500)}catch(b){return"unable to serialize "+typeof a+" ("+b.message+")"}}
;var jo=new Set,ko=0,lo=0,mo=0,no=[],oo=["PhantomJS","Googlebot","TO STOP THIS SECURITY SCAN go/scan"];function po(){for(var a=u(oo),b=a.next();!b.done;b=a.next()){var c=Kb();if(c&&0<=c.toLowerCase().indexOf(b.value.toLowerCase()))return!0}return!1}
;function qo(){var a;return x(function(b){return(a=sf())?b.return(a.then(function(c){c=Dd(c);for(var d=[],e=0,f=0;f<c.length;f++){var g=c.charCodeAt(f);255<g&&(d[e++]=g&255,g>>=8);d[e++]=g}return wc(d,3)})):b.return(Promise.resolve(null))})}
;var ro={};function so(a){return ro[a]||(ro[a]=String(a).replace(/\-([a-z])/g,function(b,c){return c.toUpperCase()}))}
;var to={},uo=[],Mg=new N,vo={};function wo(){for(var a=u(uo),b=a.next();!b.done;b=a.next())b=b.value,b()}
function xo(a,b){var c;"yt:"===a.tagName.toLowerCase().substr(0,3)?c=a.getAttribute(b):c=a?a.dataset?a.dataset[so(b)]:a.getAttribute("data-"+b):null;return c}
function yo(a){Mg.fa.apply(Mg,arguments)}
;function zo(a){this.h=a||{};a=[this.h,window.YTConfig||{}];for(var b=0;b<a.length;b++)a[b].host&&(a[b].host=a[b].host.toString().replace("http://","https://"))}
function Ao(a,b){a=[a.h,window.YTConfig||{}];for(var c=0;c<a.length;c++){var d=a[c][b];if(void 0!==d)return d}return null}
function Bo(a,b,c){Co||(Co={},li(window,"message",function(d){a:{if(d.origin===Ao(a,"host")){try{var e=JSON.parse(d.data)}catch(f){e=void 0;break a}if(d=Co[e.id])d.u=!0,d.u&&(E(d.m,d.sendMessage,d),d.m.length=0),d.Qa(e)}e=void 0}return e}));
Co[c]=b}
var Co=null;var Do=window;function Eo(a,b,c){this.o=this.h=this.i=null;this.j=0;this.u=!1;this.m=[];this.l=null;this.G={};if(!a)throw Error("YouTube player element ID required.");this.id=Qa(this);this.C=c;this.setup(a,b)}
p=Eo.prototype;p.setSize=function(a,b){this.h.width=a.toString();this.h.height=b.toString();return this};
p.getIframe=function(){return this.h};
p.Qa=function(a){Fo(this,a.event,a)};
p.addEventListener=function(a,b){var c=b;"string"===typeof b&&(c=function(){window[b].apply(window,arguments)});
if(!c)return this;this.l.subscribe(a,c);Go(this,a);return this};
function Ho(a,b){b=b.split(".");if(2===b.length){var c=b[1];a.C===b[0]&&Go(a,c)}}
p.destroy=function(){this.h&&this.h.id&&(to[this.h.id]=null);var a=this.l;a&&"function"==typeof a.dispose&&a.dispose();if(this.o){a=this.h;var b=a.parentNode;b&&b.replaceChild(this.o,a)}else(a=this.h)&&a.parentNode&&a.parentNode.removeChild(a);Co&&(Co[this.id]=null);this.i=null;a=this.h;for(var c in kb)kb[c][0]==a&&ji(c);this.o=this.h=null};
p.Ta=function(){return{}};
function Io(a,b,c){c=c||[];c=Array.prototype.slice.call(c);b={event:"command",func:b,args:c};a.u?a.sendMessage(b):a.m.push(b)}
function Fo(a,b,c){a.l.j||(c={target:a,data:c},a.l.fa(b,c),yo(a.C+"."+b,c))}
function Jo(a,b){var c=document.createElement("iframe");b=b.attributes;for(var d=0,e=b.length;d<e;d++){var f=b[d].value;null!=f&&""!==f&&"null"!==f&&c.setAttribute(b[d].name,f)}c.setAttribute("frameBorder","0");c.setAttribute("allowfullscreen","1");c.setAttribute("allow","accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture");c.setAttribute("title","YouTube "+Ao(a.i,"title"));(b=Ao(a.i,"width"))&&c.setAttribute("width",b.toString());(b=Ao(a.i,"height"))&&c.setAttribute("height",
b.toString());var g=a.Ta();g.enablejsapi=window.postMessage?1:0;window.location.host&&(g.origin=window.location.protocol+"//"+window.location.host);g.widgetid=a.id;window.location.href&&E(["debugjs","debugcss"],function(k){var l=Zb(window.location.href,k);null!==l&&(g[k]=l)});
var h=""+Ao(a.i,"host")+("/embed/"+Ao(a.i,"videoId"))+"?"+Tb(g);Do.yt_embedsEnableUaChProbe?qo().then(function(k){var l=new URL(h),m=Number(l.searchParams.get("reloads"));isNaN(m)&&(m=0);l.searchParams.set("reloads",(m+1).toString());k&&l.searchParams.set("uach",k);l.searchParams.set("uats",Math.floor(window.performance.timeOrigin).toString());k=Xd(l.href).toString();Rd(c,Yd(k));return k}):Do.yt_embedsEnableIframeSrcWithIntent?Rd(c,Yd(h)):c.src=h;
return c}
p.bb=function(){this.h&&this.h.contentWindow?this.sendMessage({event:"listening"}):window.clearInterval(this.j)};
function Ko(a){Bo(a.i,a,a.id);a.j=ni(a.bb.bind(a),250);li(a.h,"load",function(){window.clearInterval(a.j);a.j=ni(a.bb.bind(a),250)})}
p.setup=function(a,b){var c=document;if(a="string"===typeof a?c.getElementById(a):a)if(c="iframe"===a.tagName.toLowerCase(),b.host||(b.host=c?Rb(a.src):"https://www.youtube.com"),this.i=new zo(b),c||(b=Jo(this,a),this.o=a,(c=a.parentNode)&&c.replaceChild(b,a),a=b),this.h=a,this.h.id||(this.h.id="widget"+Qa(this.h)),to[this.h.id]=this,window.postMessage){this.l=new N;Ko(this);b=Ao(this.i,"events");for(var d in b)b.hasOwnProperty(d)&&this.addEventListener(d,b[d]);for(var e in vo)vo.hasOwnProperty(e)&&
Ho(this,e)}};
function Go(a,b){a.G[b]||(a.G[b]=!0,Io(a,"addEventListener",[b]))}
p.sendMessage=function(a){a.id=this.id;a.channel="widget";var b=JSON.stringify(a),c=[Rb(this.h.src||"").replace("http:","https:")];if(this.h.contentWindow)for(var d=0;d<c.length;d++)try{this.h.contentWindow.postMessage(b,c[d])}catch(Vb){if(Vb.name&&"SyntaxError"===Vb.name){if(!(Vb.message&&0<Vb.message.indexOf("target origin ''"))){var e=void 0,f=Vb;e=void 0===e?{}:e;e.name=O("INNERTUBE_CONTEXT_CLIENT_NAME",1);e.version=O("INNERTUBE_CONTEXT_CLIENT_VERSION");var g=e||{},h="WARNING";h=void 0===h?"ERROR":
h;if(f){f.hasOwnProperty("level")&&f.level&&(h=f.level);if(Q("console_log_js_exceptions")){var k=f,l=[];l.push("Name: "+k.name);l.push("Message: "+k.message);k.hasOwnProperty("params")&&l.push("Error Params: "+JSON.stringify(k.params));k.hasOwnProperty("args")&&l.push("Error args: "+JSON.stringify(k.args));l.push("File name: "+k.fileName);l.push("Stacktrace: "+k.stack);window.console.log(l.join("\n"),k)}if(!(5<=ko)){var m=void 0,n=void 0,r=f,q=g,y=Ld(r),A=y.message||"Unknown Error",H=y.name||"UnknownError",
K=y.stack||r.i||"Not available";if(K.startsWith(H+": "+A)){var M=K.split("\n");M.shift();K=M.join("\n")}var P=y.lineNumber||"Not available",ob=y.fileName||"Not available",vc=K,Aa=0;if(r.hasOwnProperty("args")&&r.args&&r.args.length)for(var sa=0;sa<r.args.length&&!(Aa=go(r.args[sa],"params."+sa,q,Aa),500<=Aa);sa++);else if(r.hasOwnProperty("params")&&r.params){var Y=r.params;if("object"===typeof r.params)for(n in Y){if(Y[n]){var da="params."+n,ea=io(Y[n]);q[da]=ea;Aa+=da.length+ea.length;if(500<Aa)break}}else q.params=
io(Y)}if(no.length)for(var X=0;X<no.length&&!(Aa=go(no[X],"params.context."+X,q,Aa),500<=Aa);X++);navigator.vendor&&!q.hasOwnProperty("vendor")&&(q["device.vendor"]=navigator.vendor);var T={message:A,name:H,lineNumber:P,fileName:ob,stack:vc,params:q,sampleWeight:1},Yj=Number(r.columnNumber);isNaN(Yj)||(T.lineNumber=T.lineNumber+":"+Yj);if("IGNORED"===r.level)m=0;else a:{for(var Zj=bo(),ak=u(Zj.T),Xf=ak.next();!Xf.done;Xf=ak.next()){var bk=Xf.value;if(T.message&&T.message.match(bk.fc)){m=bk.weight;
break a}}for(var ck=u(Zj.R),Yf=ck.next();!Yf.done;Yf=ck.next()){var dk=Yf.value;if(dk.nb(T)){m=dk.weight;break a}}m=1}T.sampleWeight=m;for(var ek=u(Xn),Zf=ek.next();!Zf.done;Zf=ek.next()){var $f=Zf.value;if($f.Ca[T.name])for(var fk=u($f.Ca[T.name]),ag=fk.next();!ag.done;ag=fk.next()){var gk=ag.value,Ud=T.message.match(gk.regexp);if(Ud){T.params["params.error.original"]=Ud[0];for(var bg=gk.groups,hk={},Wb=0;Wb<bg.length;Wb++)hk[bg[Wb]]=Ud[Wb+1],T.params["params.error."+bg[Wb]]=Ud[Wb+1];T.message=$f.Ma(hk);
break}}}T.params||(T.params={});var ik=bo();T.params["params.errorServiceSignature"]="msg="+ik.T.length+"&cb="+ik.R.length;T.params["params.serviceWorker"]="false";z.document&&z.document.querySelectorAll&&(T.params["params.fscripts"]=String(document.querySelectorAll("script:not([nonce])").length));sb("sample").constructor!==rb&&(T.params["params.fconst"]="true");var va=T;window.yterr&&"function"===typeof window.yterr&&window.yterr(va);if(0!==va.sampleWeight&&!jo.has(va.message)){if("ERROR"===h){co.fa("handleError",
va);if(Q("record_app_crashed_web")&&0===mo&&1===va.sampleWeight)if(mo++,Q("errors_via_jspb")){var cg=new Ih;I(cg,1,1);if(!Q("report_client_error_with_app_crash_ks")){var jk=new Dh;I(jk,1,va.message);var kk=new Eh;J(kk,Dh,3,jk);var lk=new Fh;J(lk,Eh,5,kk);var mk=new Gh;J(mk,Fh,9,lk);J(cg,Gh,4,mk)}var Qo=cg,nk=new Lh;td(nk,Ih,20,Mh,Qo);Vn(nk)}else{var ok={appCrashType:"APP_CRASH_TYPE_BREAKPAD"};Q("report_client_error_with_app_crash_ks")||(ok.systemHealth={crashData:{clientError:{logMessage:{message:va.message}}}});
Wn("appCrashed",ok)}lo++}else"WARNING"===h&&co.fa("handleWarning",va);if(Q("kevlar_gel_error_routing"))a:{var dg=void 0,eg=void 0,Mc=h,R=va;if(Q("errors_via_jspb")){if(po())eg=void 0;else{var Xb=new Ah;I(Xb,1,R.stack);R.fileName&&I(Xb,4,R.fileName);var Ma=R.lineNumber&&R.lineNumber.split?R.lineNumber.split(":"):[];0!==Ma.length&&(1!==Ma.length||isNaN(Number(Ma[0]))?2!==Ma.length||isNaN(Number(Ma[0]))||isNaN(Number(Ma[1]))||(I(Xb,2,Number(Ma[0])),I(Xb,3,Number(Ma[1]))):I(Xb,2,Number(Ma[0])));var ub=
new Dh;I(ub,1,R.message);I(ub,3,R.name);I(ub,6,R.sampleWeight);"ERROR"===Mc?I(ub,2,2):"WARNING"===Mc?I(ub,2,1):I(ub,2,0);var fg=new Bh;I(fg,1,!0);td(fg,Ah,3,Ch,Xb);var vb=new xh;I(vb,3,window.location.href);for(var pk=O("FEXP_EXPERIMENTS",[]),gg=0;gg<pk.length;gg++){var qk=vb,Ro=pk[gg];Zc(qk);nd(qk,5,2,!1,!1).push(Ro)}var hg=Xh();if(!Yh()&&hg)for(var rk=u(Object.keys(hg)),wb=rk.next();!wb.done;wb=rk.next()){var sk=wb.value,ig=new zh;I(ig,1,sk);I(ig,2,String(hg[sk]));vd(vb,4,zh,ig)}var jg=R.params;
if(jg){var tk=u(Object.keys(jg));for(wb=tk.next();!wb.done;wb=tk.next()){var uk=wb.value,kg=new zh;I(kg,1,"client."+uk);I(kg,2,String(jg[uk]));vd(vb,4,zh,kg)}}var vk=O("SERVER_NAME"),wk=O("SERVER_VERSION");if(vk&&wk){var lg=new zh;I(lg,1,"server.name");I(lg,2,vk);vd(vb,4,zh,lg);var mg=new zh;I(mg,1,"server.version");I(mg,2,wk);vd(vb,4,zh,mg)}var Vd=new Eh;J(Vd,xh,1,vb);J(Vd,Bh,2,fg);J(Vd,Dh,3,ub);eg=Vd}var xk=eg;if(!xk)break a;var yk=new Lh;td(yk,Eh,163,Mh,xk);Vn(yk)}else{if(po())dg=void 0;else{var Nc=
{stackTrace:R.stack};R.fileName&&(Nc.filename=R.fileName);var Na=R.lineNumber&&R.lineNumber.split?R.lineNumber.split(":"):[];0!==Na.length&&(1!==Na.length||isNaN(Number(Na[0]))?2!==Na.length||isNaN(Number(Na[0]))||isNaN(Number(Na[1]))||(Nc.lineNumber=Number(Na[0]),Nc.columnNumber=Number(Na[1])):Nc.lineNumber=Number(Na[0]));var ng={level:"ERROR_LEVEL_UNKNOWN",message:R.message,errorClassName:R.name,sampleWeight:R.sampleWeight};"ERROR"===Mc?ng.level="ERROR_LEVEL_ERROR":"WARNING"===Mc&&(ng.level="ERROR_LEVEL_WARNNING");
var So={isObfuscated:!0,browserStackInfo:Nc},Yb={pageUrl:window.location.href,kvPairs:[]};O("FEXP_EXPERIMENTS")&&(Yb.experimentIds=O("FEXP_EXPERIMENTS"));var og=Xh();if(!Yh()&&og)for(var zk=u(Object.keys(og)),xb=zk.next();!xb.done;xb=zk.next()){var Ak=xb.value;Yb.kvPairs.push({key:Ak,value:String(og[Ak])})}var pg=R.params;if(pg){var Bk=u(Object.keys(pg));for(xb=Bk.next();!xb.done;xb=Bk.next()){var Ck=xb.value;Yb.kvPairs.push({key:"client."+Ck,value:String(pg[Ck])})}}var Dk=O("SERVER_NAME"),Ek=O("SERVER_VERSION");
Dk&&Ek&&(Yb.kvPairs.push({key:"server.name",value:Dk}),Yb.kvPairs.push({key:"server.version",value:Ek}));dg={errorMetadata:Yb,stackTrace:So,logMessage:ng}}var Fk=dg;if(!Fk)break a;Wn("clientError",Fk)}if("ERROR"===Mc||Q("errors_flush_gel_always_killswitch"))b:if(Q("migrate_events_to_ts"))c:{if(Q("web_fp_via_jspb")&&(Sn(!0),!Q("web_fp_via_jspb_and_json")))break c;Sn()}else{if(Q("web_fp_via_jspb")&&(Sn(!0),!Q("web_fp_via_jspb_and_json")))break b;Sn()}}if(!Q("suppress_error_204_logging")){var yb=va,
Oc=yb.params||{},Za={urlParams:{a:"logerror",t:"jserror",type:yb.name,msg:yb.message.substr(0,250),line:yb.lineNumber,level:h,"client.name":Oc.name},postParams:{url:O("PAGE_NAME",window.location.href),file:yb.fileName},method:"POST"};Oc.version&&(Za["client.version"]=Oc.version);if(Za.postParams){yb.stack&&(Za.postParams.stack=yb.stack);for(var Gk=u(Object.keys(Oc)),qg=Gk.next();!qg.done;qg=Gk.next()){var Hk=qg.value;Za.postParams["client."+Hk]=Oc[Hk]}var rg=Xh();if(rg)for(var Ik=u(Object.keys(rg)),
sg=Ik.next();!sg.done;sg=Ik.next()){var Jk=sg.value;Za.postParams[Jk]=rg[Jk]}var Kk=O("SERVER_NAME"),Lk=O("SERVER_VERSION");Kk&&Lk&&(Za.postParams["server.name"]=Kk,Za.postParams["server.version"]=Lk)}Ji(O("ECATCHER_REPORT_HOST","")+"/error_204",Za)}try{jo.add(va.message)}catch(Xo){}ko++}}}}}else throw Vb;}else console&&console.warn&&console.warn("The YouTube player is not attached to the DOM. API calls should be made after the onReady event. See more: https://developers.google.com/youtube/iframe_api_reference#Events")};function Lo(a){return(0===a.search("cue")||0===a.search("load"))&&"loadModule"!==a}
function Mo(a){return 0===a.search("get")||0===a.search("is")}
;function No(a,b){Eo.call(this,a,Object.assign({title:"video player",videoId:"",width:640,height:360},b||{}),"player");this.N={};this.playerInfo={};this.videoTitle=""}
v(No,Eo);p=No.prototype;p.Ta=function(){var a=Ao(this.i,"playerVars");if(a){var b={},c;for(c in a)b[c]=a[c];a=b}else a={};window!==window.top&&document.referrer&&(a.widget_referrer=document.referrer.substring(0,256));if(c=Ao(this.i,"embedConfig")){if(Pa(c))try{c=JSON.stringify(c)}catch(d){console.error("Invalid embed config JSON",d)}a.embed_config=c}return a};
p.Qa=function(a){var b=a.event;a=a.info;switch(b){case "apiInfoDelivery":if(Pa(a))for(var c in a)a.hasOwnProperty(c)&&(this.N[c]=a[c]);break;case "infoDelivery":Oo(this,a);break;case "initialDelivery":Pa(a)&&(window.clearInterval(this.j),this.playerInfo={},this.N={},Po(this,a.apiInterface),Oo(this,a));break;default:Fo(this,b,a)}};
function Oo(a,b){if(Pa(b)){for(var c in b)b.hasOwnProperty(c)&&(a.playerInfo[c]=b[c]);a.playerInfo.hasOwnProperty("videoData")&&(b=a.playerInfo.videoData,b.hasOwnProperty("title")&&b.title?(b=b.title,b!==a.videoTitle&&(a.videoTitle=b,a.h.setAttribute("title",b))):(a.videoTitle="",a.h.setAttribute("title","YouTube "+Ao(a.i,"title"))))}}
function Po(a,b){E(b,function(c){this[c]||("getCurrentTime"===c?this[c]=function(){var d=this.playerInfo.currentTime;if(1===this.playerInfo.playerState){var e=(Date.now()/1E3-this.playerInfo.currentTimeLastUpdated_)*this.playerInfo.playbackRate;0<e&&(d+=Math.min(e,1))}return d}:Lo(c)?this[c]=function(){this.playerInfo={};
this.N={};Io(this,c,arguments);return this}:Mo(c)?this[c]=function(){var d=0;
0===c.search("get")?d=3:0===c.search("is")&&(d=2);return this.playerInfo[c.charAt(d).toLowerCase()+c.substr(d+1)]}:this[c]=function(){Io(this,c,arguments);
return this})},a)}
p.getVideoEmbedCode=function(){var a=Ao(this.i,"host")+("/embed/"+Ao(this.i,"videoId")),b=Number(Ao(this.i,"width")),c=Number(Ao(this.i,"height"));if(isNaN(b)||isNaN(c))throw Error("Invalid width or height property");b=Math.floor(b);c=Math.floor(c);var d=this.videoTitle;Gb.test(a)&&(-1!=a.indexOf("&")&&(a=a.replace(Ab,"&amp;")),-1!=a.indexOf("<")&&(a=a.replace(Bb,"&lt;")),-1!=a.indexOf(">")&&(a=a.replace(Cb,"&gt;")),-1!=a.indexOf('"')&&(a=a.replace(Db,"&quot;")),-1!=a.indexOf("'")&&(a=a.replace(Eb,
"&#39;")),-1!=a.indexOf("\x00")&&(a=a.replace(Fb,"&#0;")));return'<iframe width="'+b+'" height="'+c+'" src="'+a+'" title="'+((null!=d?d:"YouTube video player")+'" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>')};
p.getOptions=function(a){return this.N.namespaces?a?this.N[a]?this.N[a].options||[]:[]:this.N.namespaces||[]:[]};
p.getOption=function(a,b){if(this.N.namespaces&&a&&b&&this.N[a])return this.N[a][b]};
function To(a){if("iframe"!==a.tagName.toLowerCase()){var b=xo(a,"videoid");b&&(b={videoId:b,width:xo(a,"width"),height:xo(a,"height")},new No(a,b))}}
;B("YT.PlayerState.UNSTARTED",-1);B("YT.PlayerState.ENDED",0);B("YT.PlayerState.PLAYING",1);B("YT.PlayerState.PAUSED",2);B("YT.PlayerState.BUFFERING",3);B("YT.PlayerState.CUED",5);B("YT.get",function(a){return to[a]});
B("YT.scan",wo);B("YT.subscribe",function(a,b,c){Mg.subscribe(a,b,c);vo[a]=!0;for(var d in to)to.hasOwnProperty(d)&&Ho(to[d],a)});
B("YT.unsubscribe",function(a,b,c){Lg(a,b,c)});
B("YT.Player",No);Eo.prototype.destroy=Eo.prototype.destroy;Eo.prototype.setSize=Eo.prototype.setSize;Eo.prototype.getIframe=Eo.prototype.getIframe;Eo.prototype.addEventListener=Eo.prototype.addEventListener;No.prototype.getVideoEmbedCode=No.prototype.getVideoEmbedCode;No.prototype.getOptions=No.prototype.getOptions;No.prototype.getOption=No.prototype.getOption;
uo.push(function(a){var b=a;b||(b=document);a=gb(b.getElementsByTagName("yt:player"));var c=b||document;if(c.querySelectorAll&&c.querySelector)b=c.querySelectorAll(".yt-player");else{var d;c=document;b=b||c;if(b.querySelectorAll&&b.querySelector)b=b.querySelectorAll(".yt-player");else if(b.getElementsByClassName){var e=b.getElementsByClassName("yt-player");b=e}else{e=b.getElementsByTagName("*");var f={};for(c=d=0;b=e[c];c++){var g=b.className,h;if(h="function"==typeof g.split)h=0<=bb(g.split(/\s+/),
"yt-player");h&&(f[d++]=b)}f.length=d;b=f}}b=gb(b);E(fb(a,b),To)});
"undefined"!=typeof YTConfig&&YTConfig.parsetags&&"onload"!=YTConfig.parsetags||wo();var Uo=z.onYTReady;Uo&&Uo();var Vo=z.onYouTubeIframeAPIReady;Vo&&Vo();var Wo=z.onYouTubePlayerAPIReady;Wo&&Wo();}).call(this);
