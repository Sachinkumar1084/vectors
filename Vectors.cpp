#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    vec.pop_back();

    vec.insert(vec.begin() + 1, 15);

    std::cout << "Vector after insertion: ";
    for(int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    vec.erase(vec.begin());

    std::cout << "Final vector: ";
    for(int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}

