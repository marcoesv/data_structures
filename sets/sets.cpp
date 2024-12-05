#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> mySet;

    // Insert some elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate elements are not added

    // Display the elements of the set
    std::cout << "Elements in the set: ";
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if an element exists in the set
    int value = 20;
    if (mySet.find(value) != mySet.end()) {
        std::cout << value << " is in the set." << std::endl;
    } else {
        std::cout << value << " is not in the set." << std::endl;
    }

    // Remove an element from the set
    mySet.erase(20);
    std::cout << "Elements in the set after removing 20: ";
    for (const int& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}