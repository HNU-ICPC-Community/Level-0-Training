# 📚 Sheet 1 Tutorial

Welcome to the tutorial for the Sheet 1 problems in our CP training! 🚀 This guide explains the concepts behind each problem from our [Codeforces Group](https://codeforces.com/group/elwkSKiCvi/contests). Try solving each problem 1-2-3 times before checking this tutorial, then click to reveal the explanations to master the logic! 🌟

## Problem A: Welcome to Our Training
<details>
<summary>Click to view tutorial</summary>

- The program uses `cout` to print "Welcome to Our Training" followed by a newline. No input is needed, making it a great starting point!
</details>

## Problem B: Watermelon
<details>
<summary>Click to view tutorial</summary>

- The weight `w` must be even and greater than 2 to allow splitting into two non-zero integers. The code checks `w % 2 == 0 && w != 2` and outputs "YES" or "NO" accordingly.
</details>

## Problem C: Max and Min
<details>
<summary>Click to view tutorial</summary>
  
- The `min({a, b, c})` and `max({a, b, c})` functions compare three integers and return the smallest and largest, respectively. The solution prints them with a space between.
</details>

## Problem D: Go to Overflow
<details>
<summary>Click to view tutorial</summary>
 
- The program uses `long long` to store large products of `a` and `b`. Be cautious: this might overflow for very large inputs, but for this problem, it simply outputs the result.
</details>

## Problem E: Sum them
<details>
<summary>Click to view tutorial</summary>

- Using `long long` ensures the sum can handle larger values. The program reads `a` and `b`, computes their sum, and prints it.
</details>

## Problem F: Infinity Gauntlet
<details>
<summary>Click to view tutorial</summary>
 
- For each input `x`, the code outputs `x / 2` followed by ".0" if `x` is even (integer division) or ".5" if odd (to indicate a decimal). This simulates a fun division rule!
</details>

## Problem G: Can You Help Me?!
<details>
<summary>Click to view tutorial</summary>

- If `n` is not divisible by 5, it’s "NO". Otherwise, it calculates `n / 15` and adds 1 if there’s a remainder (i.e., `n % 15 != 0`), representing groups.
</details>

## Problem H: Three-Point Shot
<details>
<summary>Click to view tutorial</summary>

- If the minimum of `x` and `y` plus 3 is greater than the maximum, it’s "Yes" (a geometric or game rule). Otherwise, "No".
</details>

## Problem I: Repression
<details>
<summary>Click to view tutorial</summary>
 
- The code calculates `a + b + c - min({a, b, c})` to exclude the smallest number, giving the sum of the other two.
</details>

## Problem J: Sort Numbers
<details>
<summary>Click to view tutorial</summary>
 
- Finds the minimum (`mn`), maximum (`mx`), and middle value (`sum - mn - mx`) to sort. Then prints the sorted order and original input.
</details>

## Problem K: Array of Titans
<details>
<summary>Click to view tutorial</summary>
 
- Read `n` numbers and compute their sum using a `long long` to handle large values. The code accumulates each input `x` into `sum` and prints the result.
</details>

## Problem L: Sum Battle: Digits Edition
<details>
<summary>Click to view tutorial</summary>

- For `n` numbers, add single-digit numbers (`x < 10`) to `single` and double-digit numbers to `dble`. If the sums differ, output "Alice wins"; otherwise, "Bob wins". Note: Initialize `single` and `dble` to 0 to avoid undefined behavior.
</details>

## Problem M: Palindrome Number
<details>
<summary>Click to view tutorial</summary>

- If the input `x` is negative, it’s not a palindrome ("False"). Otherwise, reverse `x` by extracting digits (`x % 10`) and building `rvs`. Compare `rvs` with the original `org` to output "True" or "False".
</details>

## Problem N: Leftmost Digit
<details>
<summary>Click to view tutorial</summary>
  
- Keep dividing `n` by 10 until it becomes 0, storing the last non-zero digit (`rem`). This gives the leftmost digit, which is then printed.
</details>

## Problem O: Bear and Big Brother
<details>
<summary>Click to view tutorial</summary>

- Given `a` and `b`, multiply `a` by 3 and `b` by 2 each iteration until `a > b`. Count the iterations (`cnt`) and output it.
</details>

## Problem P: FizzBuzz
<details>
<summary>Click to view tutorial</summary>

- For each number `i` from 1 to `n`, print:  
  - "Fizz" if divisible by `x` but not `y`.  
  - "Buzz" if divisible by `y` but not `x`.  
  - "FizzBuzz" if divisible by both.  
  - The number itself if divisible by neither. The code uses modulo (`%`) to check divisibility.
</details>

## Problem Q: Train
<details>
<summary>Click to view tutorial</summary>

- Given `n` total seats and current position `i`, the number of seats from `i` to the end is `n - i + 1`. The code computes and prints this directly.
</details>

## Problem R: The Magical Forest Adventure
<details>
<summary>Click to view tutorial</summary>
 
- For `n` numbers, if a number `x` is even, add `x/2` to `sum` if `x > 10`, otherwise add `x`. Odd numbers are ignored. Output the final sum.
</details>

## Problem S: Sum of Awesome Digits
<details>
<summary>Click to view tutorial</summary>

- Extract each digit of `n` using modulo (`n % 10`). If the digit is odd (`rem & 1`), add it to `sum`. Continue dividing `n` by 10 until it’s 0, then print `sum`.
</details>

## Problem T: Cloning Toys
<details>
<summary>Click to view tutorial</summary>

- Given `a` copies and `b` originals, set `copies = b - 1` and `original = b - 1`. Check if `copies != a` and either `copies > a` or `(a - copies)` is odd. If true, output "No"; otherwise, "Yes".
</details>

<br>
<br>
<br>

**Happy coding!** 💻 **Let’s dominate ICPC!** 🥇

