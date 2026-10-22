# 2244A. Iskander and Drawings

| Field | Value |
| --- | --- |
| Platform | Codeforces |
| Problem number | 2244A |
| Rating | rating 800 |
| Time limit | time limit per test |
| Memory limit | memory limit per test |
| Tags | dp, games, greedy, strings |
| Language | cpp |
| Link | [https://codeforces.com/contest/2244/problem/A](https://codeforces.com/contest/2244/problem/A) |

## Problem

During a geometry lesson, Iskander got very bored, so he decided to draw in Yura's notebook. To do this, he took a row and drew horizontal lines on it. Some lines are long, some are short, and some parts of the page remain empty.

The page is represented by a string $s$, where the character '*' denotes an empty part of the paper, and the character '#' denotes one centimeter of a drawn line. A continuous sequence of '#' characters forms a single line.

Yura decided to erase all the lines and made Iskander help him: they will erase one of the lines from both ends simultaneously.

- Each second, Iskander erases $1$ centimeter from the right end of the line, and Yura erases $1$ centimeter from the left end.
- If the current length of the line is $1$ or $2$ centimeters, then in the next second it is erased completely, and the process ends.

Yura wants to choose a line so that, together with Iskander, they erase it for as long as possible. Help him determine this maximum time. If there are no lines on the page, the answer is $0$ seconds.

InputThe first line contains a single integer $t$ ($1 \le t \le 2500$) — the number of test cases.

The first line of each test case contains an integer $n$ ($1 \le n \le 10$) — the length of the string $s$.

The second line of each test case contains a string $s$ of length $n$, consisting of characters '#' and '*'.

OutputFor each test case, output a single integer — the maximum time required to erase a line.

ExampleInput
```
57#*##*##8########8********8#*****##6*#####
```

Output
```
14013
```
