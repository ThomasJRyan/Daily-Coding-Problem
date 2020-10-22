# Given an array of integers, return a new array such that each 
# element at index i of the new array is the product of all the 
# numbers in the original array except the one at i.

# For example, if our input was [1, 2, 3, 4, 5], the expected 
# output would be [120, 60, 40, 30, 24]. If our input was 
# [3, 2, 1], the expected output would be [2, 3, 6].

# Follow-up: what if you can't use division?

from functools import reduce

def multiplied_by_others(list):
    def mul_list(l):
        return reduce(lambda x,y: x*y, l)
    return [mul_list(list[:en] + list[en+1:]) for en, val in enumerate(list)]

if __name__ == '__main__':
    print(multiplied_by_others([1,2,3,4,5]))
    print(multiplied_by_others([3,2,1]))

# Explanation

# function `multiplied_by_others` takes in a list of ints, then using
# list comprehension it enumerates the list and passes a list composed
# of all values except the iteration we're currently on

# `mul_list` takes in this new list and runs it through functools `reduce`
# function which takes a list and effectively does (((1*2)*3)*4)

# I had initially wanted to avoid having to import anything with these
# but honestly this is a great way to learn something new about the
# standard library. Maybe I should make it a goal to use an stl
# module for each of these?

# Satisfaction: 8/10