My sample task solutions from [Codewars](https://www.codewars.com).

---
### Task 1
Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

#### Examples

"This is an example!" ==> "sihT si na !elpmaxe"<br>
"double  spaces"      ==> "elbuod  secaps"

- Solution
    - [C++](solutions/cpp/task_001.cpp)
    - [Python](solutions/python/task_001.py)

---
### Task 2
Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

#### Examples

Input: 21445 Output: 54421<br>
Input: 145263 Output: 654321<br>
Input: 123456789 Output: 987654321<br>

- Solution
    - [C++](solutions/cpp/task_002.cpp)
    - [Python](solutions/python/task_002.py)


---
### Task 3
You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.

#### Examples

[2, 4, 0, 100, 4, 11, 2602, 36]<br>
Should return: 11 (the only odd number)<br>

[160, 3, 1719, 19, 11, 13, -21]<br>
Should return: 160 (the only even number)<br>

- Solution
    - [C++](solutions/cpp/task_003.cpp)
    - [Python](solutions/python/task_003.py)

---
### Task 4
Input will consist of a list of lists containing two items each. Each list contains information for a single potential member. Information consists of an integer for the person's age and an integer for the person's handicap.

#### Examples

Input: [[18, 20],[45, 2],[61, 12],[37, 6],[21, 21],[78, 9]]<br>
Output: ["Open", "Open", "Senior", "Open", "Open", "Senior"]<br>


- Solution
    - [Python](solutions/python/task_004.py)

---
### Task 5

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

Note: If the number is a multiple of both 3 and 5, only count it once.

#### Examples

Input: 10
Output: 23

- Solution
    - [Python](solutions/python/task_005.py)    
    - [Cpp](solutions/cpp/task_005.py)  

---
### Task 6

Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

#### Examples

The binary representation of 1234 is 10011010010, so the function should return 5 in this case

- Solution
    - [Python](solutions/python/task_006.py)    
    - [Cpp](solutions/cpp/task_006.py) 

---
### Task 7

Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

#### Examples

spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw"<br>
spinWords( "This is a test") => returns "This is a test"<br>
spinWords( "This is another test" )=> returns "This is rehtona test"<br>

- Solution
    - [Python](solutions/python/task_007.py)    
    - [Cpp](solutions/cpp/task_007.py) 

---
### Task 8

Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero. In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending order: MDCLXVI.

#### Examples

solution(1000); // should return "M"

- Solution
    - [Python](solutions/python/task_008.py)    
    - [Cpp](solutions/cpp/task_008.py)

---
### Task 9

Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.

#### Examples

pig_it('Pig latin is cool') # igPay atinlay siay oolcay <br>
pig_it('Hello world !')     # elloHay orldway ! <br>

- Solution
    - [Python](solutions/python/task_009.py)    

---
### Task 10

What is an anagram? Well, two words are anagrams of each other if they both contain the same letters. For example:

'abba' & 'baab' == true
'abba' & 'bbaa' == true
'abba' & 'abbba' == false
'abba' & 'abca' == false

Write a function that will find all the anagrams of a word from a list. You will be given two inputs a word and an array with words. You should return an array of all the anagrams or an empty array if there are none.

#### Examples

anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']) => ['aabb', 'bbaa']<br>

anagrams('racer', ['crazer', 'carer', 'racar', 'caers', 'racer']) => ['carer', 'racer']<br>

anagrams('laser', ['lazing', 'lazy',  'lacer']) => []<br>

- Solution
    - [Python](solutions/python/task_010.py)

---
### Task 11

Return: a string formatted as a list of names separated by commas except for the last two names, which should be separated by an ampersand.

#### Examples

namelist([ {'name': 'Bart'}, {'name': 'Lisa'}, {'name': 'Maggie'} ])<br>
# returns 'Bart, Lisa & Maggie'<br>

namelist([ {'name': 'Bart'}, {'name': 'Lisa'} ])<br>
# returns 'Bart & Lisa'<br>

namelist([ {'name': 'Bart'} ])<br>
# returns 'Bart'<br>

namelist([])<br>
# returns ''<br>

- Solution
    - [Python](solutions/python/task_011.py)

---
### Task 12

You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement a function likes :: [String] -> String, which must take in input array, containing the names of people who like an item. It must return the display text as shown in the examples:

#### Examples

likes {} // must be "no one likes this"<br>
likes {"Peter"} // must be "Peter likes this"<br>
likes {"Jacob", "Alex"} // must be "Jacob and Alex like this"<br>
likes {"Max", "John", "Mark"} // must be "Max, John and Mark like this"<br>
likes {"Alex", "Jacob", "Mark", "Max"} // must be "Alex, Jacob and 2 others like this"<br>

- Solution
    - [cpp](solutions/cpp/task_012.cpp)

---
### Task 13

Write a program that will calculate the number of trailing zeros in a factorial of a given number.

N! = 1 * 2 * 3 * ... * N

Be careful 1000! has 2568 digits...

#### Examples

zeros(6) = 1<br>
# 6! = 1 * 2 * 3 * 4 * 5 * 6 = 720 --> 1 trailing zero<br>

zeros(12) = 2<br>
# 12! = 479001600 --> 2 trailing zeros<br>

- Solution
    - [cpp](solutions/cpp/task_013.cpp)

---
### Task 14

Write a function, which takes a non-negative integer (seconds) as input and returns the time in a human-readable format (HH:MM:SS)

    HH = hours, padded to 2 digits, range: 00 - 99
    MM = minutes, padded to 2 digits, range: 00 - 59
    SS = seconds, padded to 2 digits, range: 00 - 59

The maximum time never exceeds 359999 (99:59:59)

#### Examples

make_readable(0) => "00:00:00" <br>
make_readable(5) => "00:00:05" <br>
make_readable(60) => "00:01:00" <br>
make_readable(86399) => "23:59:59" <br>
make_readable(359999) => "99:59:59" <br>

- Solution
    - [python](solutions/python/task_014.py)

---
### Task 15

Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). 

#### Examples

to_camel_case("the-stealth-warrior") // returns "theStealthWarrior" <br>
to_camel_case("The_Stealth_Warrior") // returns "TheStealthWarrior" <br>

- Solution
    - [cpp](solutions/cpp/task_015.cpp)

---
### Task 16

We want to create a function that will add numbers together when called in succession.

#### Examples

add(1)(2)(3); // 6 <br>
add(1)(2)(3)(4); // 10<br>
add(1)(2)(3)(4)(5); // 15<br>

- Solution
    - [python](solutions/python/task_016.py)

---
### Task 17

Complete the function scramble(str1, str2) that returns true if a portion of str1 characters can be rearranged to match str2, otherwise returns false.

Notes:

    Only lower case letters will be used (a-z). No punctuation or digits will be included.
    Performance needs to be considered


#### Examples

scramble('rkqodlw', 'world') ==> True<br>
scramble('cedewaraaossoqqyt', 'codewars') ==> True<br>
scramble('katas', 'steak') ==> False<br>

- Solution
    - [python](solutions/python/task_017.py)

---
### Task 18

The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

#### Examples

"din"      =>  "((("<br>
"recede"   =>  "()()()"<br>
"Success"  =>  ")())())"<br>
"(( @"     =>  "))(("<br>

- Solution
    - [cpp](solutions/cpp/task_018.cpp)