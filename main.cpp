#include <iostream>
#include <ProficiencyConfig.h>
#include "List.h"

using namespace std;

List build_list();
void display_proficiency_version(int argc, char *const *argv);


int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    display_proficiency_version(argc, argv);
    List linear_linked_list = build_list();

    int sum;
    bool is_found = true;
//    linear_linked_list.insert_at_end_of_lll(2);
//    linear_linked_list.insert_at_end_of_lll(2);
//    linear_linked_list.insert_at_end_of_lll(2);

    is_found = linear_linked_list.is_last_two_found_more_than_once();
    if (is_found) {
        cout << "Found last two data points more than once" << endl;
    }
    else {
        cout << "Didn't find last two data points more than once" << endl;
    }

    linear_linked_list.insert_at_end_of_lll(0);
    linear_linked_list.display_all();

    linear_linked_list.display_not_equal_head();

    sum = linear_linked_list.sum_larger_than_tail();
    cout << "Returned sum is " << sum << endl;

    linear_linked_list.insert_at_end_of_lll(1000);
    linear_linked_list.display_not_equal_head();

    sum = linear_linked_list.sum_larger_than_tail();
    cout << "Returned sum is " << sum << endl;

    return 0;
}

void display_proficiency_version(int argc, char *const *argv) {
    if (argc < 2) {
        cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR
        << "." << Proficiency_VERSION_MINOR << endl;
    }
}

List build_list() {
    List linear_linked_list;
    int size = 5;
    int value = 0;

    for (int i = 0; i < size; ++i) {
        linear_linked_list.insert_at_end_of_lll(value);
        ++value;
    }

    linear_linked_list.display_all();
    return linear_linked_list;
}
