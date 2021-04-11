// string.cpp by Luis Labori
// updated 2021-04
#include <cstdio>

int seventt()
{
    char s[] = "String";
    printf("The string s is %s\n", s);

    for (int i=0; s[i]!=0; ++i){
        printf("char is %c\n", s[i]);
    }

    for (char * cp = s; *cp!= 0; ++cp){
        printf("char is %c\n", *cp);
    }

    return 0;
}
