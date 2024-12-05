/**
 * # Doubly Linked Lists
 *
 * ## Pros of Doubly Linked Lists:
 * - Each node contains a reference to both the next and the previous node, allowing traversal in both directions.
 * - Easier to delete a given node as you have direct access to its predecessor.
 * - Can be more efficient for certain operations that require frequent insertions and deletions from both ends.
 *
 * ## Cons of Doubly Linked Lists:
 * - Requires more memory per node due to the additional reference to the previous node.
 * - More complex to implement and maintain compared to singly linked lists.
 * - Slightly slower operations due to the need to update two references (next and previous) instead of one.
 *
 * ## Big O Notation:
 * - Search: O(n) - In the worst case, you may need to traverse the entire list to find the desired element.
 * - Insert: O(1) - Inserting at the beginning or end of the list is constant time, but finding the insertion point is O(n) if not at the ends.
 * - Delete: O(1) - Deleting a node is constant time if you have a reference to the node, but finding the node to delete is O(n) if not given.
 * 
 * - Display: O(n) - Traverses n number of nodes to display the whole list.
**/