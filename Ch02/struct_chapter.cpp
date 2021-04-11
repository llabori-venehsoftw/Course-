// struct_capter.cpp Development B Luis ALbori
// Update 2021-04

#include <cstdio>

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int twentyseven() {

    Employee jose = { 34, "Jose", "tecniq"};
    //printf("%s is the %s and you id is %d\n", jose.name, jose.role, jose.id);

    // using poniters
    Employee * j = &jose;
    printf("%s is the %s and you id is %d\n", j->name, j->role, j->id);

    return 0;
}
