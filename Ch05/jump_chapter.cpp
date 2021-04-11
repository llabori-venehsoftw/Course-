// jump_chapter.cpp Development By Luis Labori
// Updated 2021-04

#include <cstdio>

void fa() { puts("This is from fa()");};
void fb() { puts("This is from fb()");};
void fc() { puts("This is from fc()");};
void fd() { puts("This is from fd()");};
void fe() { puts("This is from fe()");};

void (*funcs[])() = { fa, fb, fc, fd, fe};

// prompt and return string
const char * prompt() {
    puts("Choose an option:");
    puts("1. Function fa()");
    puts("2. Function fb()");
    puts("3. Function fc()");
    puts("4. Function fd()");
    puts("5. Function fe()");
    puts("Q. Quit.");
    printf(">> ");
    fflush(stdout);                 // flush after prompt

    const int buffsz = 16;          // constant for buffer size
    static char response[buffsz];   // static storage for response buffer
    fgets(response, buffsz, stdin); // get response from console

    return response;
}

// jump table
int jump( const char * rs ) {
    char code = rs[0];
    if(code == 'q' || code == 'Q') return 0;

    // get the length of the funcs array
    size_t func_length = sizeof(funcs) / sizeof(funcs[0]);

    size_t i = (size_t) code - '0';   // convert ASCII numeral to int
    if( i < 1 || i > func_length ) {
        puts("invalid choice");
        return 1;
    } else {
        funcs[i - 1]();         // array is zero-based
        return 1;
    }

}

int main() {
    while(jump(prompt())) ;
    puts("\nDone.");
    return 0;
}
