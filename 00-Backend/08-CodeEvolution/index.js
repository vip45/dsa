function greet(name){
    console.log(`Hello ${name}`);
}

function greetV(callback){
    const name = "Vipin";
    callback(name);
}

greetV(greet);