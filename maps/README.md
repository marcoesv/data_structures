# Pros and Cons of `unordered_map` and `map` in C++

## `unordered_map`

### Pros
- **Average O(1) Time Complexity**: Provides average constant time complexity for insertions, deletions, and lookups.
- **Efficient for Large Datasets**: Generally faster for large datasets due to hash table implementation.
- **No Order Maintenance**: Does not maintain any order, which can be beneficial if order is not required.

### Cons
- **No Order**: Elements are not stored in any particular order.
- **Higher Memory Usage**: May use more memory due to the hash table structure.
- **Potential for Collisions**: Hash collisions can degrade performance to O(n) in the worst case.

## `map`

### Pros
- **Ordered Elements**: Stores elements in a sorted order based on keys.
- **Logarithmic Time Complexity**: Provides O(log n) time complexity for insertions, deletions, and lookups.
- **Lower Memory Usage**: Typically uses less memory compared to `unordered_map`.

### Cons
- **Slower Access**: Generally slower than `unordered_map` due to tree structure.
- **Order Maintenance Overhead**: Maintaining order adds overhead, which can impact performance.
