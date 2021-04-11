// exception_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <iostream>
#include <exception>

namespace LL {
    class E : public std::exception {
        const char * msg;
        E();
    public:
        E(const char *s) noexcept(true) : msg(s) {}
        const char * what() const noexcept(true) { return msg; }
    };
}

const LL::E e_outch("outch!");
const LL::E e_bad("bad code!");
const LL::E e_worse("don't do that!");

void broken() {
    std::cout << "this is a broken function" << std::endl;
    throw e_outch;
}

int main() {
    std::cout << "let's have an emergency!" << std::endl;
    try {
        broken();
    } catch (LL::E & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
