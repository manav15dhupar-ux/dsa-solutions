# 2167A. Square?

| Field | Value |
| --- | --- |
| Platform | Codeforces |
| Problem number | 2167A |
| Rating | rating 800 |
| Time limit | time limit per test |
| Memory limit | memory limit per test |
| Tags | math, sortings |
| Language | cpp |
| Link | [https://codeforces.com/contest/2167/problem/A](https://codeforces.com/contest/2167/problem/A) |

## Problem

You are given $4$ sticks of lengths $a$, $b$, $c$, and $d$. You can not break or bend them.

Determine whether it is possible to form a square$^{\text{∗}}$ using the given sticks.

$^{\text{∗}}$A square is defined as a polygon consisting of $4$ vertices, of which all sides have equal length and all inner angles are equal. No two edges of the polygon may intersect each other.

InputThe first line contains a single integer $t$ ($1 \le t \le 10^4$) — the number of test cases.

The only line of each test case contains four integers $a$, $b$, $c$, and $d$ ($1 \le a, b, c, d \le 10$) — the lengths of the sticks.

OutputFor each test case, print "YES" if it is possible to form a square using the given sticks, and "NO" otherwise.

You may print each letter in any case (uppercase or lowercase). For example, the strings "yEs", "yes", "Yes", and "YES" will all be recognized as a positive answer.

ExampleInput
```
71 2 3 41 1 1 12 2 2 21 2 1 21 1 5 55 5 5 54 10 5 9
```

Output
```
NOYESYESNONOYESNO
```

NoteIn the first test case, we can prove that we can't make a square.

In the second, third, and sixth test cases, we can make a square like this:

 
| ![](https://espresso.codeforces.com/e51fcf1a3ba1663730b9f7ce5a8427c0796be6ca.png) |
| --- |
