// bwexception.h by Bill Weinman <http://bw.org/>
// updated 2002-09-03

#ifndef llexception_h
#define llexception_h

#include <exception>

namespace LL {

class E : public std::exception {
    const char * msg = nullptr;
    E();
public:
    E(const char *s) noexcept(true) : msg(s) {}
    const char * what() const noexcept(true) { return msg; }
};

} // namespace

#endif /* llexception_h */
