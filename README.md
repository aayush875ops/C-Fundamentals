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
| 11 | **Dynamic Star Pattern** | Right-angled triangle with user-defined rows using nested loops | [`pattern_star.c`](./pattern_star.c) |