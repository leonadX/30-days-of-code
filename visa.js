let cardNumber = "4155279860457345"

const isValid = /^4[0-9]{12,15}$/.test(cardNumber);
console.log(isValid);