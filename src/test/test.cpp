#include <iostream>
#include "test.h"
#include "runner.h"
namespace test
{
    Hello::Hello() {
    }

    Hello::Hello(std::vector < exe::Runner *> * container ) {
        std::cout << "=====hello init.=====" <<std::endl;
        container->push_back(this);
    }

    Hello::~Hello() {
    }

    int Hello::main() {
        std::cout << "hello world!" << std::endl;
        return 0;
    }

}
