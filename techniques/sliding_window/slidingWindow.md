# Sliding window
is a method used to solve problems that involve subarrays or substring or window.
    - Instead of repeatedly iterating over the same elements, the sliding window maintains a range (or "window") that moves step-by-step through the data,    updating results incrementally.
    - The main idea is to use the results of previous window to do computations for the next window.
    - Commonly used for problems like finding subarrays with a specific sum, finding the longest substring with unique characters, or solving problems that require a fixed-size window to proccess elements efficiently.
# Example Problem - Maximum Sum of a Subarray with K Elements
Given an array arr[] and an integer k, we need to calculate the maximum sum of a subarray having size exactly k.

Input  : arr[] = [5, 2, -1, 0, 3], k = 3
Output : 6
Explanation : We get maximum sum by considering the subarray [5, 2 , -1]

Input  : arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4 
Output : 39
Explanation : We get maximum sum by adding subarray [4, 2, 10, 23] of size 4.



