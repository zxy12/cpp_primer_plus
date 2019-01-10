#include <vector>
#include <iostream>

#ifndef _EXE_RUNNER_H
#define _EXE_RUNNER_H
namespace exe {
    class Runner {
        public:
            virtual int main() {
                std::cout << "exe::runner::main need overwrite" << std::endl;
                return 0;
            }
            Runner() {}
            ~Runner() {}
    };


}

#endif
