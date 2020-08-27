#include <iostream>
#include <ProficiencyConfig.h>
#include "List.h"

using namespace std;

void display_proficiency_version(int argc, char *const *argv) {
    if (argc < 2)
        cout << argv[0] << " Version " << Proficiency_VERSION_MAJOR
             << "." << Proficiency_VERSION_MINOR << endl;
}

// Test functions

void test_environment() { cout << "Hello, World SUCCESS!\n" << endl; }
void test_display_all(List &linear_linked_list) { linear_linked_list.display_all(); }
void test_build_list(List &linear_linked_list);
void test_find_more_than_once(bool is_found, List &linear_linked_list);
void test_find_more_than_once_empty_list(bool is_found, List &linear_linked_list);
void test_display_all_not_equal_to_head(List &linear_linked_list);
void test_no_sum_none_larger_than_tail(int sum, List &linear_linked_list);
void test_sum_larger_than_tail(int sum, List &linear_linked_list);
void test_remove_given_value(int value, List &linear_linked_list);

int main(int argc, char *argv[]) {
    display_proficiency_version(argc, argv);

    // Beginning tests
    test_environment();

    bool is_found = false;
    int sum = 0;
    List linear_linked_list{};

    test_find_more_than_once_empty_list(is_found, linear_linked_list);
    test_build_list(linear_linked_list);
    test_display_all(linear_linked_list);
    test_find_more_than_once(is_found, linear_linked_list);
    test_display_all_not_equal_to_head(linear_linked_list);
    test_no_sum_none_larger_than_tail(sum, linear_linked_list);

    test_remove_given_value(1000, linear_linked_list);
    test_sum_larger_than_tail(sum, linear_linked_list);

    return 0;
}

void test_no_sum_none_larger_than_tail(int sum, List &linear_linked_list) {
    sum = linear_linked_list.get_sum_larger_than_tail();
    if (sum > 0)
        cout << "ERROR: Data that's larger than tail was summed" << endl;
    else
        cout << "SUCCESS: Data in list wasn't higher than tail's" << endl;
    cout << "Returned sum is " << sum << "\n" << endl;
}

void test_sum_larger_than_tail(int sum, List &linear_linked_list) {
    sum = linear_linked_list.get_sum_larger_than_tail();
    if (sum > 0)
        cout << "SUCCESS: Data that's larger than tail was summed" << endl;
    else
        cout << "ERROR: Data in list wasn't higher than tail's" << endl;
    cout << "Returned sum is " << sum << "\n" << endl;
}

void test_display_all_not_equal_to_head(List &linear_linked_list) {
    bool was_displayed = false;

    linear_linked_list.insert_at_end_of_lll(0);
    was_displayed = linear_linked_list.display_not_equal_head();
    if (was_displayed)
        cout << "SUCCESS: Data that doesn't match head was displayed\n" << endl;

    linear_linked_list.insert_at_end_of_lll(1000);
    was_displayed = linear_linked_list.display_not_equal_head();
    if (was_displayed)
        cout << "SUCCESS: Data that doesn't match head was displayed\n" << endl;
}

void test_find_more_than_once(bool is_found, List &linear_linked_list) {
    is_found = linear_linked_list.did_find_more_than_once();
    if (is_found)
        cout << "ERROR: Shouldn't have found last two data points more than once\n" << endl;
    else
        cout << "SUCCESS: Didn't find last two data points more than once\n" << endl;

    cout << "Inserting at end of LLL " << endl;
    linear_linked_list.insert_at_end_of_lll(2);
    linear_linked_list.insert_at_end_of_lll(2);
    linear_linked_list.insert_at_end_of_lll(2);
    linear_linked_list.display_all();

    is_found = linear_linked_list.did_find_more_than_once();
    if (is_found)
        cout << "SUCCESS: Found last two data points more than once\n" << endl;
    else
        cout << "ERROR: Found last two data points more than once\n" << endl;
}

void test_find_more_than_once_empty_list(bool is_found, List &linear_linked_list) {
    is_found = linear_linked_list.did_find_more_than_once();
    if (is_found) {
        cout << "ERROR: Should not have found duplicate items in empty list\n" << endl;
    }
    else {
        cout << "SUCCESS: Empty list - no data to find\n" << endl;
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

    if (sizeof(linear_linked_list) == size) {
        cout << "ERROR: List not built succesfully\n" << endl;
    }
    else {
        cout << "SUCCESS: List was built\n" << endl;
    }
}

void test_remove_given_value(int value, List &linear_linked_list) {
    bool did_remove = false;
    did_remove = linear_linked_list.remove_given_value(value);

    if (did_remove) {
        cout << "SUCCESS: Found and removed value " << value << " from list.\n" << endl;
    }
    else {
        cout << "ERROR: Did not find and remove value " << value << " from list.\n" << endl;
    }
}
