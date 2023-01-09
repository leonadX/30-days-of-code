const user = {
    name: "Pierre",
    age: 18,
    married: false,
    purchases: ['laptop', 'phone', 'mouse'],

    printObject: function() {
        return console.log(this);
    },

    sayName: function() {
        return console.log(this.name);
    }
}

user.printObject();
user.sayName();