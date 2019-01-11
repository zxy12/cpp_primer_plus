#include <iostream>
#include "test.h"
#include "chapter3.h"
#include "chapter4.h"
#include "runner.h"

std::vector <exe::Runner *> container;
test::Hello hello(&container);
CPP::Chapter3 chpt3(&container);
CPP::Chapter4 chpt4(&container);

int main() {

    for(auto it=container.begin(); it!=container.end(); it++) {
        (*it)->main();
    }

    return 0;
}
