def solution(number):
    roman_data = [
    [1000, "M"],
    [900, "CM"],
    [500, "D"],
    [400, "CD"],
    [100, "C"],
    [90, "XC"],
    [50, "L"],
    [40, "XL"],
    [10, "X"],
    [9, "IX"],
    [5, "V"],
    [4, "IV"],
    [1, "I"]    
    ]
    to_return = ''
    for i in range(0, len(roman_data)):
        while number >= roman_data[i][0]:
            to_return += roman_data[i][1]
            number -= roman_data[i][0]
    return to_return

assert solution(182) == "CLXXXII"
assert solution(1990) == "MCMXC"
assert solution(1875) == "MDCCCLXXV"
print('Test pass.')