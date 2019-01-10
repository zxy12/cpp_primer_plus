#include <iostream>
#include "runner.h"

#ifndef _TEST_H
#define _TEST_H
namespace test
{
    class Hello : public virtual exe::Runner {
        public:
            Hello();
            Hello(std::vector < exe::Runner *> * container);
            ~Hello();
            virtual int main();
    };
    extern std::vector < exe::Runner *> container;
}
#endif
