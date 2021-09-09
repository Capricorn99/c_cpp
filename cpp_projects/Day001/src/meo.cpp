#include <meo.h>
#include <string.h>
#include <iostream>

meo1::meo1(char *name, float weight, int age) {
    strcpy(meo1::name, name);
    meo1::weight = weight;
    meo1::age = age;
}

meo1::~meo1() {
    
}

void meo1::meo_info() {
    std::cout << meo1::name << " " << meo1::weight << " " << meo1::age << std::endl;
}

void meo1::change_weight(float new_weight) {
    meo1::weight = new_weight;
}