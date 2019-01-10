#include <iostream>
#include "test.h"
#include "runner.h"

std::vector <exe::Runner *> container;
test::Hello hello(&container);

int main() {

    for(std::vector<exe::Runner *>::iterator it=container.begin(); it!=container.end(); it++) {
        (*it)->main();
    }

    return 0;
}
