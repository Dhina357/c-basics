1. Find the Second Largest Element
Description
Given an array of integers, find the second largest distinct element in the array.

Input Format
First line contains an integer N.

Second line contains N space-separated integers.

Output Format
Print the second largest distinct element.

Sample Input
6
12 35 1 10 34 35
Sample Output
34
Explanation
The largest element is 35 and the second largest distinct element is 34.

2. Move All Zeros to the End
Description
Move all zero elements to the end while maintaining the order of non-zero elements.

Input Format
N
N space-separated integers
Output Format
Print the modified array.

Sample Input
7
0 1 0 3 12 0 5
Sample Output
1 3 12 5 0 0 0
Explanation
All non-zero elements retain their order, and zeros are moved to the end.

3. Check if Array is Sorted
Description
Determine whether the array is sorted in ascending order.

Input Format
N
N space-separated integers
Output Format
Print YES if sorted, otherwise NO.

Sample Input
5
2 4 6 8 10
Sample Output
YES
Explanation
Every element is greater than or equal to the previous element.

4. Find Missing Number
Description
An array contains numbers from 1 to N with one number missing. Find the missing number.

Input Format
N
N-1 space-separated integers
Sample Input
5
1 2 3 5
Sample Output
4
Explanation
Numbers from 1 to 5 should be present. Number 4 is missing.

5. Rotate Array by K Positions
Description
Rotate the array to the right by K positions.

Input Format
N
N space-separated integers
K
Sample Input
5
1 2 3 4 5
2
Sample Output
4 5 1 2 3
Explanation
After rotating twice to the right, the last two elements move to the front.

6. Remove Duplicates from a Sorted Array
Description
Remove duplicate elements from a sorted array.

Input Format
N
N space-separated integers
Sample Input
8
1 1 2 2 3 4 4 5
Sample Output
1 2 3 4 5
Explanation
Duplicate values are removed, leaving only unique elements.

7. Find Leaders in an Array
Description
An element is a leader if it is greater than all elements to its right.

Input Format
N
N space-separated integers
Sample Input
6
16 17 4 3 5 2
Sample Output
17 5 2
Explanation
17 is greater than all elements to its right.

5 is greater than 2.

2 is always a leader because it is the last element.

8. Find Frequency of Each Element
Description
Print the frequency of each distinct element.

Input Format
N
N space-separated integers
Sample Input
7
1 2 2 3 1 4 2
Sample Output
1 -> 2
2 -> 3
3 -> 1
4 -> 1
Explanation
Count the occurrences of each element.

9. Find Pair with Given Sum
Description
Check whether any pair of elements adds up to a given target.

Input Format
N
N space-separated integers
Target
Sample Input
5
2 7 11 15 3
9
Sample Output
YES
Explanation
2 + 7 = 9.

10. Maximum Difference
Description
Find the maximum difference between two elements where the larger element comes after the smaller one.

Sample Input
7
2 3 10 6 4 8 1
Sample Output
8
Explanation
Maximum difference is 10 - 2 = 8.

11. Product of Array Except Self
Description
For every index, find the product of all elements except itself.

Sample Input
4
1 2 3 4
Sample Output
24 12 8 6
Explanation
For index 0: 2×3×4 = 24

For index 1: 1×3×4 = 12

and so on.

12. Longest Consecutive Sequence
Description
Find the length of the longest consecutive sequence.

Sample Input
6
100 4 200 1 3 2
Sample Output
4
Explanation
Sequence 1, 2, 3, 4 has length 4.

13. Equilibrium Index
Description
Find an index where left sum equals right sum.

Sample Input
5
1 3 5 2 2
Sample Output
2
Explanation
Left sum = 1 + 3 = 4
Right sum = 2 + 2 = 4

14. Rearrange Positive and Negative Numbers
Description
Arrange positive and negative numbers alternately.

Sample Input
6
1 -2 3 -4 5 -6
Sample Output
1 -2 3 -4 5 -6
Explanation
The array is already in alternating order.

15. Majority Element
Description
Find the element appearing more than N/2 times.

Sample Input
7
2 2 1 2 3 2 2
Sample Output
2
Explanation
2 appears 5 times, which is more than 7/2.

16. Maximum Sum Subarray
Description
Find the contiguous subarray with the maximum sum.

Sample Input
9
-2 1 -3 4 -1 2 1 -5 4
Sample Output
6
Explanation
Subarray [4, -1, 2, 1] has maximum sum 6.

17. Trapping Rain Water
Description
Calculate total water trapped between bars.

Sample Input
12
0 1 0 2 1 0 1 3 2 1 2 1
Sample Output
6
Explanation
Total trapped water equals 6 units.

18. Container With Most Water
Description
Find two lines that can contain the maximum water.

Sample Input
9
1 8 6 2 5 4 8 3 7
Sample Output
49
Explanation
Lines at indices 1 and 8 hold:
min(8,7) × (8-1) = 49

19. Merge Overlapping Intervals
Description
Merge all overlapping intervals.

Sample Input
4
1 3
2 6
8 10
15 18
Sample Output
1 6
8 10
15 18
Explanation
Intervals [1,3] and [2,6] overlap and are merged.

20. Maximum Product Subarray
Description
Find the contiguous subarray having the maximum product.

Sample Input
4
2 3 -2 4
Sample Output
6
Explanation
Subarray [2,3] gives the maximum product 6.
