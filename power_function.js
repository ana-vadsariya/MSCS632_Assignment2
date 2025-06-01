// Function that returns a closure to raise a number to a given exponent
function powerFunction(exponent) {
    return function(base) {
        return Math.pow(base, exponent);
    };
}

const square = powerFunction(2);
console.log("Square of 5 using JavaScript:", square(5)); 
