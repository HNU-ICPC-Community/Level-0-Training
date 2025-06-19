# 📚 Sheet 2 Tutorial

Welcome to the tutorial for the Sheet 2 problems in our CP training! 🚀 This guide explains the concepts behind each problem from our [Codeforces Group](https://codeforces.com/group/elwkSKiCvi/contests). Try solving each problem 1-2-3 times before checking this tutorial, then click to reveal the explanations to master the logic! 🌟

## Problem A: Way Too Long Words
<details>
<summary>Click to view tutorial</summary>

- Read the number of test cases. For each test case, input a string. If its length exceeds 10, output the first character, the count of middle characters (length minus 2), and the last character. Otherwise, print the string as is. This abbreviates long words efficiently.
</details>

## Problem B: osu!mania
<details>
<summary>Click to view tutorial</summary>

- For each test case, read the number of rows `n` and `n` strings, each representing a row with 4 characters. Process rows from bottom to top, finding the column (1 to 4) of the '#' character in each row. Store these column numbers and output them in order from top to bottom.
</details>

## Problem C: Spell Check
<details>
<summary>Click to view tutorial</summary>

- Pre-sort the string "Timur" for comparison. For each test case, read a string of length `n`, sort it, and check if it matches the sorted "Timur". Output "YES" if it’s a permutation of "Timur", otherwise "NO".
</details>

## Problem D: Vanya and Fence
<details>
<summary>Click to view tutorial</summary>

- Read the number of people `n` and fence height `h`, followed by an array of `n` heights. For each person, add 2 to the total width if their height exceeds `h` (they bend), or 1 otherwise. Output the total width required.
</details>

## Problem E: ICPC Balloons
<details>
<summary>Click to view tutorial</summary>

- For each test case, read a string of uppercase letters. Track seen letters using a boolean array. For each character, add 2 to the result if it’s a new letter, or 1 if it’s been seen before. Output the total balloons needed.
</details>

## Problem F: Midoriya and Book
<details>
<summary>Click to view tutorial</summary>

- Read the target number of pages `n` and an array of 7 integers (pages read per day). Iterate through the days in a loop, accumulating the sum of pages. When the sum meets or exceeds `n`, output the day number (1 to 7).
</details>

## Problem G: Replacement
<details>
<summary>Click to view tutorial</summary>

- Read an array of `n` integers. Iterate through it, replacing positive numbers with 1, negative numbers with 2, and leaving zeros unchanged. Output the modified array with spaces between elements.
</details>

## Problem H: 3ayz letters
<details>
<summary>Click to view tutorial</summary>

- Read an integer `K`. Build a string by appending the first `K` lowercase letters (a to z) in alphabetical order using ASCII arithmetic (e.g., 'a' + i). Output the resulting string.
</details>

## Problem I: Alternating Beauty
<details>
<summary>Click to view tutorial</summary>

- Read an array of `N` integers and a string of `N` characters. Sort the integers in descending order and the string in ascending order. Create a new array by alternating integers and characters, starting with an integer. Output the array with spaces between elements.
</details>

## Problem J: String Score
<details>
<summary>Click to view tutorial</summary>

- Read a string of characters {V, W, X, Y, Z}. Process each character: V adds 5 to the score, W adds 2, X skips the next character, Y duplicates the next character at the string’s end, and Z divides the score by 5 (if followed by V) or 2 (if followed by W). Output the final score.
</details>

## Problem K: Pangram
<details>
<summary>Click to view tutorial</summary>

- Read a string of length `n`. Mark the presence of each lowercase letter (case-insensitive) in a boolean array. Check if all 26 letters are present. Output "YES" if it’s a pangram, "NO" otherwise.
</details>

## Problem L: Reversing
<details>
<summary>Click to view tutorial</summary>

- Read an array of `N` integers. Output the array in reverse order by iterating from the last element to the first, printing each with a space.
</details>

## Problem M: Fifty-Fifty
<details>
<summary>Click to view tutorial</summary>

- Read a string and check if its length is 4. Count the frequency of each character. Verify that exactly two distinct characters appear, each exactly twice. Output "YES" if true, "NO" otherwise.
</details>

## Problem N: Be Fast
<details>
<summary>Click to view tutorial</summary>

- Read integers `X`, `Y`, and `Z`. Calculate the count of numbers from `X` to `Y` (inclusive) by computing `Y - X + 1`. Subtract the count of numbers divisible by `Z` using floor division (`Y/Z - (X-1)/Z`). Output the result.
</details>

## Problem O: Replace MinMax
<details>
<summary>Click to view tutorial</summary>

- Read an array of `N` integers. Find the indices of the minimum and maximum elements, swap them, and output the modified array with spaces between elements.
</details>

## Problem P: Luck Array
<details>
<summary>Click to view tutorial</summary>

- Read an array of `N` integers. Find the minimum element and count its frequency. Output "Lucky" if the frequency is odd, "Unlucky" if even.
</details>

## Problem Q: Frequency Array
<details>
<summary>Click to view tutorial</summary>

- Read `N` integers and `M`. Count the frequency of each integer from 1 to `M` in the array. Output the frequency of each integer from 1 to `M` on separate lines.
</details>

## Problem R: Compare
<details>
<summary>Click to view tutorial</summary>

- Read two strings `X` and `Y`. Compare them lexicographically and output the smaller one.
</details>

## Problem S: Count
<details>
<summary>Click to view tutorial</summary>

- Read a string of digits. Sum the numeric value of each digit (by subtracting '0' from the character). Output the total sum.
</details>

## Problem T: No Repeat
<details>
<summary>Click to view tutorial</summary>

- Read a string of lowercase letters. Count the frequency of each letter. Find the first letter in the string with a frequency of 1 and output it. If none exists, output -1.
</details>

## Problem U: Triple
<details>
<summary>Click to view tutorial</summary>

- For each test case, read an array of `n` integers. Count the frequency of each number. Output the smallest number that appears at least three times, or -1 if none exists.
</details>

## Problem V: Cat Party
<details>
<summary>Click to view tutorial</summary>

- Read `n` integers representing cat colors. For each prefix, track the frequency of each color and the count of each frequency. A prefix is valid if all frequencies are 1, one frequency is the prefix length, one frequency is 1 and others are equal, or one frequency is the maximum and others are one less. Output the maximum valid prefix length.
</details>

## Problem W: Garland
<details>
<summary>Click to view tutorial</summary>

- Read two strings `s` and `t`. Count the frequency of each letter in `s`. Check if all characters in `t` are available in `s`. If any character is missing, output -1. Otherwise, count how many characters from `t` can be formed by using each character in `s` at most once, and output the count.
</details>

<br>
<br>
<br>

**Happy coding!** 💻 **Let’s dominate ICPC!** 🥇