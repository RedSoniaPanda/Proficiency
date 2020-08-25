#include <iostream>
#include <ProficiencyConfig.h>
#include "List.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    if (argc < 2) {
        std::cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR
        << "." << Proficiency_VERSION_MINOR << std::endl;
    }

    List linear_linked_list;
    int size = 5;
    int value = 0;

    for (int i = 0; i < size; ++i) {
        linear_linked_list.build_linear_linked_list(value);
        ++value;
    }

    linear_linked_list.build_linear_linked_list(0);
    linear_linked_list.build_linear_linked_list(1000);

    linear_linked_list.display_all();
    linear_linked_list.display_not_equal_head();

    return 0;
}
