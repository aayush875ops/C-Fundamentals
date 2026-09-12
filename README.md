# 📘 C Programming Fundamentals

Core C programming fundamentals, modular logic building, array manipulations, and handbook revision.

---


## 📌 Topics & Logic Tracker

| S.No | Topic / Logic | Key Concept / Formula | Source Code |
| :---: | :--- | :--- | :---: |
| 1 | **Sum of Array** | Dynamic length `sizeof(arr)/sizeof(arr[0])` | [`array_sum.c`](./array_sum.c) |
| 2 | **Maximum Element** | Single-pass comparison (`arr[i] > max`) | [`array_max.c`](./array_max.c) |
| 3 | **Minimum Element** | Single-pass comparison (`arr[i] < min`) | [`array_min.c`](./array_min.c) |
| 4 | **Array Subtraction** | Sequential subtraction (`subtract -= arr[i]`) | [`array_subtract.c`](./array_subtract.c) |
| 5 | **Second Largest Element** | Single-pass update (`INT_MIN` check) | [`array_second_largest.c`](./array_second_largest.c) |
| 6 | **Array Reversal** | Two-Pointer technique (`left < right` swap) | [`array_reverse.c`](./array_reverse.c) |
| 7 | **Largest of Three Numbers** | Conditional checks using `a >= b && a >= c` | [`largest_three.c`](./largest_three.c) |
| 8 | **Even or Odd Check** | Check divisibility using `number % 2 == 0` | [`even_odd.c`](./even_odd.c) |
| 9 | **Leap Year Check** | Conditions: `((year % 4 == 0 && year % 100 != 0) \|\| (year % 400 == 0))` | [`leap_year.c`](./leap_year.c) |
| 10 | **Dynamic Star Pattern** | Right-angled triangle with user-defined rows using nested loops | [`pattern_star.c`](./pattern_star.c) |
| 11 | **Print 1 to 100** | Basic `for` loop iteration printing numbers up to `N` | [`simple_loop.c`](./simple_loop.c) |
| 12 | **Multiplication Table** | Formatted table output using `for` loop iteration | [`multiplication_table.c`](./multiplication_table.c) |
| 13 | **Sum of Digits** | Extract and accumulate digits using `% 10` and `/ 10` in a `while` loop | [`sum_of_digits.c`](./sum_of_digits.c) |
| 14 | **Reverse a Number** | Reversing digits using modulo `% 10`, multiplication `* 10`, and division `/ 10` | [`reverse_number.c`](./reverse_number.c) |
| 15 | **Prime Number Check** | Optimized $O(\sqrt{n})$ primality test using `i * i <= n` condition | [`prime_check.c`](./prime_check.c) |
| 16 | **Count & Print Primes in Range** | Range iteration (2 to 50) printing individual primes and tracking total count using $O(\sqrt{n})$ primality test | [`prime_count_range.c`](./prime_count_range.c) |
| 17 | **Simple Calculator** | Basic arithmetic operations using `if-else` ladder, explicit `(float)` typecasting, and division-by-zero check | [`simple_calculator.c`](./simple_calculator.c) |
| 18 | **Area of Rectangle** | Basic arithmetic multiplication logic to compute area of a rectangle | [`area_rectangle.c`](./area_rectangle.c) |
| 19 | **Area of Circle** | Computing circle area using floating-point arithmetic and precision formatting | [`area_of_circle.c`](./area_of_circle.c) |
| 20 | **Number of Digits** | Digit counting algorithm using `do-while` loop with edge-case protection for zero | [`number_of_digits.c`](./number_of_digits.c) |
| 21 | **Armstrong Number Check** | Dynamic $n$-digit Armstrong number validation using modulo extraction | [`armstrong.c`](./armstrong.c) |
| 22 | **Factorial Calculation** | Iterative factorial calculation handling edge cases ($0! = 1$, negative numbers) using `unsigned long long` | [`factorial.c`](./factorial.c) |