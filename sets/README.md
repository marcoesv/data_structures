/**
 * Pros and Cons of Sets and Unordered Sets
 *
 * Sets:
 * Pros:
 * - Elements are stored in a sorted order.
 * - Provides logarithmic time complexity for insertion, deletion, and search operations.
 * - Useful when order of elements is important.
 * - Can be used to implement ordered collections.
 *
 * Cons:
 * - Slower insertion and access times compared to unordered sets due to the need to maintain order.
 * - Higher memory overhead due to the underlying balanced tree structure.
 *
 * Unordered Sets:
 * Pros:
 * - Provides average constant time complexity for insertion, deletion, and search operations.
 * - Faster than sets for large datasets when order is not important.
 * - Lower memory overhead compared to sets.
 *
 * Cons:
 * - Elements are not stored in any particular order.
 * - Worst-case time complexity for operations can be linear in case of many hash collisions.
 * - Not suitable when order of elements is important.
 */