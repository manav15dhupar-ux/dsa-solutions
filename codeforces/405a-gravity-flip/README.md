# 405A. Gravity Flip

| Field | Value |
| --- | --- |
| Platform | Codeforces |
| Problem number | 405A |
| Rating | rating 900 |
| Time limit | time limit per test |
| Memory limit | memory limit per test |
| Tags | greedy, implementation, sortings |
| Language | cpp |
| Link | [https://codeforces.com/contest/405/problem/A](https://codeforces.com/contest/405/problem/A) |

## Problem

Little Chris is bored during his physics lessons (too easy), so he has built a toy box to keep himself occupied. The box is special, since it has the ability to change gravity.

There are *n* columns of toy cubes in the box arranged in a line. The *i*-th column contains *a*~*i*~ cubes. At first, the gravity in the box is pulling the cubes downwards. When Chris switches the gravity, it begins to pull all the cubes to the right side of the box. The figure shows the initial and final configurations of the cubes in the box: the cubes that have changed their position are highlighted with orange.

 ![](https://espresso.codeforces.com/d24e0c1ca79082ed438b56cc07bc52801f365ec7.png) Given the initial configuration of the toy cubes in the box, find the amounts of cubes in each of the *n* columns after the gravity switch!

InputThe first line of input contains an integer *n* (1 ≤ *n* ≤ 100), the number of the columns in the box. The next line contains *n* space-separated integer numbers. The *i*-th number *a*~*i*~ (1 ≤ *a*~*i*~ ≤ 100) denotes the number of cubes in the *i*-th column.

OutputOutput *n* integer numbers separated by spaces, where the *i*-th number is the amount of cubes in the *i*-th column after the gravity switch.

ExamplesInput
```
4  
3 2 1 2  
```

Output
```
1 2 2 3   
```

Input
```
3  
2 3 8  
```

Output
```
2 3 8   
```

NoteThe first example case is shown on the figure. The top cube of the first column falls to the top of the last column; the top cube of the second column falls to the top of the third column; the middle cube of the first column falls to the top of the second column.

In the second example case the gravity switch does not change the heights of the columns.
