// Given an array of integers, return a new array such that each 
// element at index i of the new array is the product of all the 
// numbers in the original array except the one at i.

// For example, if our input was [1, 2, 3, 4, 5], the expected 
// output would be [120, 60, 40, 30, 24]. If our input was 
// [3, 2, 1], the expected output would be [2, 3, 6].

// Follow-up: what if you can't use division?

#include <iostream>

int * multiplied_by_others(int list[], int size) {
    int* tmp_list = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        int tmp_int = 1;
        for (size_t j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            tmp_int *= list[j];
        }
        tmp_list[i] = tmp_int;
    }
    return tmp_list;
}

void print_list(int list[], int size){
    std::cout << "[ ";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << list[i] << ", ";
    }
    std::cout << "]" << std::endl;
}

int main(int argc, char const *argv[])
{
    int list[] = {1,2,3,4,5};
    int size = sizeof(list)/sizeof(list[0]);

    int *ret;
    ret = multiplied_by_others(list, size);

    print_list(multiplied_by_others(list, size), size);

    int list2[] = {3,2,1};
    size = sizeof(list2)/sizeof(list2[0]);

    ret = multiplied_by_others(list2, size);

    print_list(multiplied_by_others(list2, size), size);

    return 0;
}


// Explanation

// Function `multiplied_by_others` employs a nested loop to go through
// each value, skipping over whatever index it's already on, and multiplying
// the rest together
// This then returns a pointer to a new array that can be passed to `print_list`
// which just prints out the list all pretty-list

// I'm torn on this one. On one hand this is ugly and I hate it
// On the other hand it's helped me understand pointers better which
// is a really nice feeling...

// Satisfaction: 6/10 - Honestly, about average