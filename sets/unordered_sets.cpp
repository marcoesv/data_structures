#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered set of integers
    std::unordered_set<int> uset;

    // Insert elements into the unordered set
    uset.insert(56);
    uset.insert(1);
    uset.insert(7);
    uset.insert(15);
    uset.insert(12);

    // Display the elements of the unordered set
    std::cout << "Elements in the unordered set: ";
    for (const int& elem : uset) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if an element exists in the unordered set
    int key = 56;
    if (uset.find(key) != uset.end()) {
        std::cout << key << " is present in the unordered set." << std::endl;
    } else {
        std::cout << key << " is not present in the unordered set." << std::endl;
    }

    // Remove an element from the unordered set
    uset.erase(56);

    // Display the elements of the unordered set after removal
    std::cout << "Elements in the unordered set after removal: ";
    for (const int& elem : uset) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}