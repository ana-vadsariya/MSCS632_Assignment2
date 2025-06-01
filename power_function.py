#Program to generate a closure that raises a number to a given exponent

def power_function(exponent):
    def raise_to_power(base):
        return base ** exponent
    return raise_to_power

square = power_function(2)
print("Square of 5 using Python:", square(5))
