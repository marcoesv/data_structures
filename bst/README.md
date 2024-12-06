# Binary Search Tree (BST)

## Description
A Binary Search Tree (BST) is a data structure that facilitates fast lookup, addition, and removal of items. Each node in a BST has at most two children, referred to as the left child and the right child. For each node:
- The left subtree contains only nodes with values less than the node's value.
- The right subtree contains only nodes with values greater than the node's value.

## Diagram
```
       8
      / \
     3   10
    / \    \
   1   6    14
      / \   /
     4   7 13
```

## Pros
- **Efficient Search**: Average time complexity for search operations is O(log n).
- **Dynamic**: Can handle dynamic sets of data, with insertions and deletions.
- **Ordered**: In-order traversal of a BST gives elements in a sorted order.

## Cons
- **Unbalanced Trees**: If not balanced, the time complexity can degrade to O(n) in the worst case.
- **Complex Implementation**: More complex to implement compared to other data structures like arrays or linked lists.
- **Balancing Overhead**: Requires additional operations to keep the tree balanced (e.g., AVL trees, Red-Black trees).

## Traversal Examples

### Depth-First Search (DFS)
DFS explores as far as possible along each branch before backtracking. Here is the DFS traversal (in-order, pre-order, and post-order) for the BST above:

- **In-order (Left, Root, Right)**: `1, 3, 4, 6, 7, 8, 10, 13, 14`
- **Pre-order (Root, Left, Right)**: `8, 3, 1, 6, 4, 7, 10, 14, 13`
- **Post-order (Left, Right, Root)**: `1, 4, 7, 6, 3, 13, 14, 10, 8`

### Breadth-First Search (BFS)
BFS explores all the nodes at the present depth level before moving on to the nodes at the next depth level. Here is the BFS traversal for the BST above:

- **Level-order**: `8, 3, 10, 1, 6, 14, 4, 7, 13`