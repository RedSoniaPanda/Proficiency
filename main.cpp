#include <iostream>
#include <ProficiencyConfig.h>
#include "List.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    if (argc < 2) {
        std::cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR << "." << Proficiency_VERSION_MINOR << std::endl;
    }

    List linear_linked_list;
    linear_linked_list.build(0);
    linear_linked_list.display();
    std::cout << "end " << std::endl;

    return 0;
}
