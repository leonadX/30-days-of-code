let res1 = new RegExp("abc");
let res2 = /abc/.test("abc");

console.log(res2);

let res3 = /\d./.test("23 Elmore Street");
console.log(res3);

const set1 = /\d{3,5}/.test("19799");
console.log(set1);

const set2 = /hello[0-9]+/.test("hello02 there");
console.log(set2);

const set3 = /hello[0-9]*/.test("hello there");
console.log(set3);

const set4 = /^\d\S+@\S+\.\S+$/.test("01peter@gmail.com");
console.log(set4);

const match = /^\S+.\d+$/.exec("count 300");
console.log(match);