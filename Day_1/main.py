# Given a list of numbers and a number k, 
# return whether any two numbers from the list add up to k.

# For example, given [10, 15, 3, 7] and k of 17, 
# return true since 10 + 7 is 17.

# Bonus: Can you do this in one pass?

def is_two_num_equal(num, list):
    def mapper(n, pos):
        return [n+i for num, i in enumerate(list) if num != pos]
    result = [mapper(i, pos) for pos, i in enumerate(list)]
    return num in [i for s in result for i in s]
    
if __name__ == "__main__":
    print(is_two_num_equal(5, [1,2,1,1,6]))

# Explanation:
# 
# Function `is_two_num_equal` takes in two parameters, num and list
# This function gets `result` with list comprehension by getting the result
# of `mapper`, in which each number from `list` and its position is passed
# It then flattens the now 2D list into a 1D list, and returns if `num` is in it
# 
# A nested function, `mapper` is defined and takes two parameters, n and pos
# It uses list comprehension to generate and return a list composed of each number 
# in `list` added to `n` except for the number that shares its position
# 
# Satisfaction: 6/10 - Honestly it's a mess