#include <iostream>
#include "include/test.h"

int main() {
    ::test::Hello h;
    h.say();
    ::std::cout << "helloworld" << std::endl;
    return 0;
}
