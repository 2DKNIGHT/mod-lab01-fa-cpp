// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

int main() {
    const char* str = "Something like! a dra1 or   o ";
    std::cout << faStr1(str);
    std::cout << faStr2(str);
    std::cout << faStr3(str);
}
