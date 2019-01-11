#include <iostream>
#include "chapter4.h"
#include "runner.h"

namespace CPP {
    Chapter4::Chapter4() {
    }
    Chapter4::~Chapter4() {
    }

    Chapter4::Chapter4(std::vector < exe::Runner *> * container ) {
        std::cout << "\n=====Chapter4 init.=====\n" <<std::endl;
        container->push_back(this);
    }

    int Chapter4::main() {
        using namespace std;
        cout << "[[[===== start-Chapter4 =====" << endl;

        int i1 = 100;
        cout << "i1=100: " << i1 << endl;

        int i2(20);
        cout << "i2=20: " << i2 << endl;

        int i3 = {20};
        cout << "i3={20}: " << i3 << endl;

        auto ii = 123;
        cout << "auto ii=123: " << ii << endl;

        cout << "===== end-Chapter4 =====]]]\n" << endl;
        return 0;
    }

}
