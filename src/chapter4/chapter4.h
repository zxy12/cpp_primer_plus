#include <iostream>
#include "runner.h"

#ifndef _CPP_CPT4
#define _CPP_CPT4
namespace CPP {
    class Chapter4 : public virtual exe::Runner {
        public:
            Chapter4();
            Chapter4(std::vector < exe::Runner *> * container);
            ~Chapter4();
            virtual int main();
    };
}
#endif
