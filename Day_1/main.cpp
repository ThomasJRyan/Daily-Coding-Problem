// Given a list of numbers and a number k, 
// return whether any two numbers from the list add up to k.

// For example, given [10, 15, 3, 7] and k of 17, 
// return true since 10 + 7 is 17.

// Bonus: Can you do this in one pass?

#include <iostream>

bool is_two_num_equal(int num, int *list, int size)
{
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (list[i] + list[j] == num)
            {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int num = 5;
    int list[] = {1,2,10,1,3};
    int size = sizeof(list)/sizeof(list[0]);
    std::cout << is_two_num_equal(num, list, size) << std::endl;
    return 0;
}

// Explanation

// Function `is_two_num_equal` takes in three parameters, num, list, and size
// This will loop over list (using size as a limiter) in a nested loop, skipping
// over the number if it shares an index, and while add two numbers together
// returning true is they equal num, and false if all options are exhausted

// Satisfaction: 3/10 - C++ is hard