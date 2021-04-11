// cstring_chapter.cpp Develoment By Luis LAbori
// Updated 2021-04

#include <cstdio>

int twentyfive() {

//    char cstring[] = "String";

    const char * cstring = "String";

    puts(cstring);

    for (int i =0; cstring[i]; ++i ){
        printf("%d: %c\n", i, cstring[i]);
    }
    return 0;
}
