# Dynamic Programming or DP
Dynamic programming is a algorithmic technique with the following properties:
- it is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for the same inputs, we can optimize it using dinamy programming.
- the idea is to simply store the results of subproblems so that we do not have to re-compute then when needes later. 
This simple optimization typically reduces time complexities from exponential to polynomial.
- Some popular problems solven using dp are fibonacci numbers, diff utility (Longes common subsequence), Bellman–Ford Shortest Path, Floyd Warshall, Edit Distance and Matrix Chain Multiplication.

# Introduction
is a method used to solve complex problems by breaking them into smaller overlapping subproblems and storing their results to avoid recomputation. It is an optimization that transforms recursive solutions with exponential time into efficient ones with polynomial time 

# Why Do We Need Dynamic Programming?

When we try to solve complex problems, especially those involving choices or sequences, we often notice that the same smaller problems appear again and again.
If we solve them every time from scratch, it leads to unnecessary repetition and wasted computation.
Dynamic programming help us avoid this. Instead of recomputing results, we remember (or store) the solutions of smaller problems and reuse them when needed.
This simple idea - of remembering the past to solve the future faster - froms the core of DP
Dynamic Programming is a commonly used algorithmic technique used to optimize recursive solutions when same subproblems are called again.

- The core idea behind DP is to store solutions to subproblems so that each is solved only once.
- To solve DP problems, we first write a recursive solution in a way that there are overlapping subproblems in the recursion tree (the recursive function is called with the same parameters multiple times).
- To make sure that a recursive value is computed only once (to improve time taken by algorithm), we store results of the recursive calls.
- There are two ways to store the results, one is top down (or memoization) and other is bottom up (or tabulation).

# When to Use Dynamic Programming (DP)?
Dynamic programming is used for solving problems that consists of the following characteristics:

1. Optimal substructure:
the property optimal substructure means that we use the optimal results of subproblems to achieve the optimal result of the bigger problem.
2. Overlapping Subproblems:
The same subproblems are solved repeatedly in different parts of the problem refer to Overlapping Subproblems Property in Dynamic Programming.