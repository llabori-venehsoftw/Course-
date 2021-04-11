//file_io_chapter.cpp Development By Luis Labori
//Updated 2021-04

#include <cstdio>

constexpr int maxstring = 1024;    // read buffer size
constexpr int repeat = 5;

int main() {
    const char * fn = "textfilename.txt";
    const char * str = "This is a literal c-string.\n";

    // create and write file
    puts("writing file");
    FILE * fw = fopen(fn, "w");
    for (int i =0; i < repeat; i++) {
        fputs(str, fw);
    }

    fclose(fw);
    puts("Done.");

    // read the file
    puts("reading file");
    char buf[maxstring];
    FILE * fr = fopen(fn, "r");
    while (fgets(buf,maxstring,fr)) {
        fputs(buf,stdout);
    }

    fclose(fr);
    //remove(fn);

    return 0;
}
