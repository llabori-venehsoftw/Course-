//
//

#include <cstdio>

struct Predfs {
    bool likesMusic: 1;
    bool hasHair: 1;
    bool hasInternet: 1;
    bool hasDinosaur: 1;
    unsigned int numberOfChildren: 4;
};


int twentyeight() {
    Predfs homer;

    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;

    printf("sizeof homer is %zd\n", sizeof(homer) * 8);
    printf("sizeof int is %zd\n", sizeof(int) *8);

    if (homer.likesMusic) printf("homer likes music\n");
    if (homer.hasHair) printf("homer has hair\n");
    if (homer.hasInternet) printf("homer has Internet\n");
    if (homer.hasDinosaur) printf("homer has Dinosaur\n");
    if (homer.numberOfChildren) printf("homer has Children\n");

    return 0;
}
