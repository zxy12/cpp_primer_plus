#include <iostream>
#include "runner.h"
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
