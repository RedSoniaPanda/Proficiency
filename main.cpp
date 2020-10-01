#include <iostream>
#include <ProficiencyConfig.h>
#include "LinearLinkedLists/List.h"
#include "CircularLinkedLists/CircularList.h"

using namespace std;

void display_proficiency_version(int argc, char *const *argv);
void hello_world_test_environment() { cout << "Hello, World SUCCESS!\n" << endl; }
void build_linear_linked_list(List &linear_linked_list);
void build_empty_circular_linked_list();

int main(int argc, char *argv[]) {
    display_proficiency_version(argc, argv);
    hello_world_test_environment();

    List linear_linked_list{};
    build_linear_linked_list(linear_linked_list);
    linear_linked_list.display_all();

    build_empty_circular_linked_list();

    return 0;
}

void display_proficiency_version(int argc, char *const *argv) {
    if (argc < 2)
        cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR
             << "." << Proficiency_VERSION_MINOR << endl;
}

void build_linear_linked_list(List &linear_linked_list) {
    int size = 5;
    int value = 0;

    for (int i = 0; i < size; ++i) {
        linear_linked_list.insert_at_end_of_lll(value);
        ++value;
    }
}

void build_empty_circular_linked_list() {// Test empty CLL set up in main
    CLL circular_linked_list{};
    int number_of_items = circular_linked_list.display_all();
    cout << "Number of items in CLL " << number_of_items << endl;
}
