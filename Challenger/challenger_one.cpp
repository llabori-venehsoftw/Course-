// challenge.cpp Cevelopment by Luis Labori
// Updated 2021-04

#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main(){

    int count = 0;
//
//    for (char c: string){
//        if (c != 0){
//            ++count;
//        }


//    for (int i = 0; string[i] != 0; ++i) {
//        ++count;
//    }

    while(string[count]){
    ++count;
}

    printf("The number of characters is: %d\n", count);
    return 0;
}
