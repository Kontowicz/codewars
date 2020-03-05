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