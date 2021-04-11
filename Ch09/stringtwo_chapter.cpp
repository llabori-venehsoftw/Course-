// stringtwo:chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <iostream>
#include <string>

int main() {
    std::string s1 = "This is a string";
    std::string::iterator it;

    //size nd length
    std::cout << " Size is same as lenght: " << s1.size() << std::endl;
    std::cout << " Size is same as lenght: " << s1.length() << std::endl;

    // + for concatenation
    std::cout << " Concatenated string: ";
    std::string s2 = "This is also a string";
    std::cout << s1 + ":" + s2 << std::endl;
    std::cout << std::endl;

    // compare
    std::cout << "Is s1 == s2? : " << (s1 == s2 ? "yes" : "no") << std::endl;
    std::cout << " Copy-assign s2 = s1 " << std::endl;
    s2 = s1;
    std::cout << "Is s1 == s2? : " << (s1 == s2 ? "yes" : "no") << std::endl;
    std::cout << "is s1 > \"other string\"? " << (s1 > "other string" ? "yes" : "no") << std::endl;
    std::cout << "is s1 < \"other string\"? " << (s1 < "other string" ? "yes" : "no") << std::endl;
    std::cout << "is \"other string\"? > s1  " << ("other string" > s1 ? "yes" : "no") << std::endl;
    std::cout << "is \"other string\" < s1? " << ("other string" < s1 ? "yes" : "no") << std::endl;
    std::cout << std::endl;

    // iteration
    std::cout << "each character: ";
    for( char c : s1 ) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // insert & erase with an iterator
    it = s1.begin() + 5;
    s1.insert(it, 'X');
    std::cout << "s1 after insert: " << s1 << std::endl;

    it = s1.begin() + 5;
    s1.erase(it);
    std::cout << "s1 after erase: " << s1 << std::endl;
    std::cout << std::endl;

    // replace
    s1.replace(5, 2, "ain't");
    std::cout << "s1 after replace: " << s1 << std::endl;

    // substr
    std::cout << "substr: " << s1.substr(5, 5) << std::endl;

    // find
    size_t pos = s1.find("s");
    std::cout << "find first \"s\" in s1 (pos): " << pos << std::endl;

    // rfind
    pos = s1.rfind("s");
    std::cout << "find last \"s\" in s1 (pos): " << pos << std::endl;

    return 0;
}
