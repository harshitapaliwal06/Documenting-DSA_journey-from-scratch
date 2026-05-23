DAY 1 Breakdown 


a. Largest Element

Brute Approach: First idea was to sort the array and pick the last element, but time complexity was O(n log n)

Better Approach: Single pass linear scan
Time Complexity: O(n)

b. Second Largest Element

Brute Approach: Sort and pick second last element, but time complexity is higher


Better Approach: Two-pass linear scan
Time Complexity: O(2n)

More Optimal Approach for Second Largest:

Single pass — track both largest and second largest simultaneously
Time Complexity: O(n)
