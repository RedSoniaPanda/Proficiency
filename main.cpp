#include <iostream>
#include <ProficiencyConfig.h>
#include "List.h"

using namespace std;

void display_proficiency_version(int argc, char *const *argv);
void build_list(List &linear_linked_list);
void hello_world() { cout << "Hello, World SUCCESS!\n" << endl; }

int main(int argc, char *argv[]) {
    display_proficiency_version(argc, argv);

    // Test Environment
    hello_world();

    List linear_linked_list{};
    build_list(linear_linked_list);

    return 0;
}

void display_proficiency_version(int argc, char *const *argv) {
    if (argc < 2)
        cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR
             << "." << Proficiency_VERSION_MINOR << endl;
}

void build_list(List &linear_linked_list) {
    int size = 5;
    int value = 0;

    for (int i = 0; i < size; ++i) {
        linear_linked_list.insert_at_end_of_lll(value);
        ++value;
    }

    linear_linked_list.display_all();
}
