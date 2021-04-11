// vector_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "vector for initializer list : " << std::endl;
    std::vector<int> vi1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << " size:" << vi1.size() << std::endl;
    std::cout << " front: " << vi1.front() << std::endl;
    std::cout << " back: " << vi1.back() << std::endl;
    std::cout << std::endl;

    // iterator
    std::vector<int>::iterator itbegin = vi1.begin();
    std::vector<int>::iterator itend = vi1.end();
    for (auto it = itbegin; it < itend; ++it ) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    std::cout << " Element at 5: " <<  vi1[5] << std::endl;
    std::cout << " Element at 5 " << vi1.at(5) << std::endl;

    std::cout << "range-based for loop:" << std::endl;
    for (int i : vi1) {
        std::cout << i << ' ';
    }
    std::cout << std::endl << std::endl;

    std::cout << " Insert 42 at begin + 5: " << std::endl;
    vi1.insert(vi1.begin() +5, 42);
    std::cout << " Size: " << vi1.size() << std::endl;
    std::cout << " vi[5]: " << vi1[5] << std::endl;

    std::cout << " Erase at begin + 5: " << std::endl;
    vi1.erase(vi1.begin() +5);
    std::cout << " Size: " << vi1.size() << std::endl;
    std::cout << " vi[5]: " << vi1[5] << std::endl;

    std::cout << " Push Back 47: " << std::endl;
    vi1.push_back(47);
    std::cout << " Size: " << vi1.size() << std::endl;
    std::cout << " vi.back: " << vi1.back() << std::endl;

    // From C Array
    const static size_t size = 10;
    int ia[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << " Vector form C-Array " << std::endl;
    std::vector<int> vi2(ia, ia + size);
    for (int i : vi2) {
        std::cout << i << ' ';
    }
    std::cout << std::endl << std::endl;

    // std_vector of string
    std::cout << " Vector of String " << std::endl;
    std::vector<std::string> vs = { "one", "two", "three", "four", "five", "six"};
    for (const std::string & v : vs ) {
        std::cout << v << std::endl;
    }
    return 0;
}
