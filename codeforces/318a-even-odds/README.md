# 318A. Even Odds

| Field | Value |
| --- | --- |
| Platform | Codeforces |
| Problem number | 318A |
| Rating | rating 900 |
| Time limit | time limit per test |
| Memory limit | memory limit per test |
| Tags | math |
| Language | cpp |
| Link | [https://codeforces.com/contest/318/problem/A](https://codeforces.com/contest/318/problem/A) |

## Problem

Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order of natural numbers (natural number is positive integer number). He is determined to rearrange them. But there are too many natural numbers, so Volodya decided to start with the first *n*. He writes down the following sequence of numbers: firstly all odd integers from 1 to *n* (in ascending order), then all even integers from 1 to *n* (also in ascending order). Help our hero to find out which number will stand at the position number *k*.

InputThe only line of input contains integers *n* and *k* (1 ≤ *k* ≤ *n* ≤ 10^12^).

Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specifier.

OutputPrint the number that will stand at the position number *k* after Volodya's manipulations.

ExamplesInput
```
10 3  
```

Output
```
5
```

Input
```
7 7  
```

Output
```
6
```

NoteIn the first sample Volodya's sequence will look like this: {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}. The third place in the sequence is therefore occupied by the number 5.
