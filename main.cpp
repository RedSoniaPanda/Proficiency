#include <iostream>
#include <ProficiencyConfig.h>
#include "List.h"

using namespace std;

void display_proficiency_version(int argc, char *const *argv);

// Test functions

void test_hello_world();
void test_build_list(List &linear_linked_list);
void test_cannot_find_more_than_once_empty_list(bool is_found, List &linear_linked_list);
void test_cannot_find_more_than_once_built_list(bool is_found, List &linear_linked_list);
void test_can_find_more_than_once(bool is_found, List &linear_linked_list);
void test_display_all(List &linear_linked_list);
void test_display_all_not_equal_to_head(List &linear_linked_list);
void test_sum_all_larger_than_tail(int sum, List &linear_linked_list);
void test_remove_given_value(int value, List &linear_linked_list);

int main(int argc, char *argv[]) {
    display_proficiency_version(argc, argv);

    // Beginning tests
    test_hello_world();

    bool is_found = false;
    int sum = 0;
    List linear_linked_list{};

    test_cannot_find_more_than_once_empty_list(is_found, linear_linked_list);
    test_build_list(linear_linked_list);
    test_display_all(linear_linked_list);
    test_cannot_find_more_than_once_built_list(is_found, linear_linked_list);
    test_can_find_more_than_once(is_found, linear_linked_list);
    test_display_all_not_equal_to_head(linear_linked_list);
    test_sum_all_larger_than_tail(sum, linear_linked_list);

    test_remove_given_value(1000, linear_linked_list);
    test_remove_given_value(0, linear_linked_list);
    test_remove_given_value(2, linear_linked_list);
    test_remove_given_value(1, linear_linked_list);
    test_remove_given_value(3, linear_linked_list);

    return 0;
}

void test_sum_all_larger_than_tail(int sum, List &linear_linked_list) {
    sum = linear_linked_list.get_sum_larger_than_tail();
    cout << "Returned sum is " << sum << endl;
}

void test_display_all_not_equal_to_head(List &linear_linked_list) {
    linear_linked_list.insert_at_end_of_lll(0);
    linear_linked_list.display_not_equal_head();
    linear_linked_list.insert_at_end_of_lll(1000);
    linear_linked_list.display_not_equal_head();
}

void test_display_all(List &linear_linked_list) { linear_linked_list.display_all(); }

void test_hello_world() { cout << "Hello, World!" << endl; }

void test_can_find_more_than_once(bool is_found, List &linear_linked_list) {
    cout << "Inserting at end of LLL " << endl;
    linear_linked_list.insert_at_end_of_lll(2);
    linear_linked_list.insert_at_end_of_lll(2);
    linear_linked_list.insert_at_end_of_lll(2);

    is_found = linear_linked_list.did_find_more_than_once();
    if (is_found) {
        cout << "Found last two data points more than once" << endl;
    }
    else {
        cout << "Didn't find last two data points more than once" << endl;
    }
}

void test_cannot_find_more_than_once_empty_list(bool is_found, List &linear_linked_list) {
    is_found = linear_linked_list.did_find_more_than_once();
    if (is_found) {
        cout << "Found last two data points more than once" << endl;
    }
    else {
        cout << "Didn't find last two data points more than once" << endl;
    }
}

void test_cannot_find_more_than_once_built_list(bool is_found, List &linear_linked_list) {
    is_found = linear_linked_list.did_find_more_than_once();
    if (is_found) {
        cout << "Found last two data points more than once" << endl;
    }
    else {
        cout << "Didn't find last two data points more than once" << endl;
    }
}

void display_proficiency_version(int argc, char *const *argv) {
    if (argc < 2) {
        cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR
        << "." << Proficiency_VERSION_MINOR << endl;
    }
}

void test_build_list(List &linear_linked_list) {

    int size = 5;
    int value = 0;

    for (int i = 0; i < size; ++i) {
        linear_linked_list.insert_at_end_of_lll(value);
        ++value;
    }

    linear_linked_list.display_all();
}

void test_remove_given_value(int value, List &linear_linked_list) {
    bool did_remove = false;
    linear_linked_list.display_all();
    did_remove = linear_linked_list.remove_given_value(value);


    if (did_remove) {
        cout << "Found and removed value " << value << " from list." << endl;
        linear_linked_list.display_all();
    }
    else {
        cout << "Did not find and remove value " << value << " from list." << endl;
    }
}
