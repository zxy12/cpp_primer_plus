#include <iostream>
#include "test.h"
namespace test
{
    Hello::Hello() {
    }
    Hello::~Hello() {
    }
    std::string Hello::say() {
        std::cout << "hello world!" << std::endl;
        std::string result = "1";
        return result;
    }
}
