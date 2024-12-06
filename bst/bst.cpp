#include <iostream>
#include <stack>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST {
public:
    TreeNode* root;
    BST() : root(NULL) {}

    void insert(int val) {
        root = insertRec(root, val);
    }

    void dfs() {
        if (root == NULL) return;
        std::stack<TreeNode*> stack;
        stack.push(root);

        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();
            std::cout << node->val << " ";

            if (node->right) {
                stack.push(node->right);
            }
            if (node->left) {
                stack.push(node->left);
            }
        }
    }

private:
    TreeNode* insertRec(TreeNode* node, int val) {
        if (node == NULL) {
            return new TreeNode(val);
        }
        if (val < node->val) {
            node->left = insertRec(node->left, val);
        } else if (val > node->val) {
            node->right = insertRec(node->right, val);
        }
        return node;
    }
};

int main() {
    BST bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);
    bst.insert(12);
    bst.insert(18);

    std::cout << "DFS Traversal: ";
    bst.dfs();
    std::cout << std::endl;

    return 0;
}