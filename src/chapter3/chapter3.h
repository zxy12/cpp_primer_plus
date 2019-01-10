#include <iostream>
#include "runner.h"

#ifndef _CPP_CPT3
#define _CPP_CPT3
namespace CPP {
    class Chapter3 : public virtual exe::Runner {
        public:
            Chapter3();
            Chapter3(std::vector < exe::Runner *> * container);
            ~Chapter3();
            virtual int main();
    };
}
#endif
