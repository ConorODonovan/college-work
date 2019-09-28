# Student Name: Conor O'Donovan
# Student Number: D18125705
# DT249 - Year 1 - Semester 2 - Programming Paradigms and Algorithms
# Question 4 - counting the number of times Quick Sort is called
# Original code taken from Quick Sort python file in Question 2
# Additions/changes commented below

# Explanation of method used:
# For my changes to this code for Question 4, to count the number of times
# Quick Sort is called, I added a fourth parameter to the quick_sort function.
# The initial value passed into the function when it is first called is 0.
# The parameter passed in is always the previous value of the variable + 1
# Since the function is recursive, every time the variable is passed to the function,
# i.e. every time it is called recursively, it increases by 1.
# Since Quick Sort is performed 'in place', i.e. it makes the changes within the original
# list and does not need to return a new list, the quick_sort function can be used to return
# the value of the 'count' variable, which is passed to a variable called 'times_qs_run', to be displayed.

import math, sys
import numpy as np
from time import process_time


def print_array(a, start, end):
    for i in range(start, end):
        print("{0}, ".format(a[i]), end='')


def is_sorted(a, n):
    for i in range(1, n):
        if a[i] < a[i - 1]:
            return False
    return True


def partition(a, lo, hi):
    i = (lo - 1)
    pivot = a[hi]
    for j in range(lo, hi):
        if a[j] <= pivot:
            i = i + 1
            a[i], a[j] = a[j], a[i]
    a[i + 1], a[hi] = a[hi], a[i + 1]
    return (i + 1)


def quick_sort(a, lo, hi, count + 1):
    if lo < hi:
        pi = partition(a, lo, hi)
        count = quick_sort(a, lo, pi - 1, count + 1) # Adds 1 to the count variable each time the function is called
        count = quick_sort(a, pi + 1, hi, count + 1)
    return count


if len(sys.argv) == 3:

    qs_count = 0 # This is the initial value of the 'count' parameter to be passed to the quick_sort function when it is first called

    file_name = sys.argv[1]
    SIZE = int(sys.argv[2])

    in_file = open(file_name)
    data = [0] * SIZE

    for i in range(SIZE):
        line = in_file.readline()
        data[i] = int(line)

    numbers = np.array(data)
    start_time = process_time()
    try:
        times_qs_run = quick_sort(numbers, 0, SIZE - 1, qs_count) # New parameter passed in - initially 0 but increasing by one each time function called recursively
    except Exception as e:
        print(e)
    end_time = process_time() - start_time

    print("\nExecution Time for", SIZE, "integers in", file_name, "is:", end_time, "seconds")
    if is_sorted(numbers, SIZE):
        print("Array now sorted? true!", end='')
    else:
        print("Array now sorted? false!", end='')

    print("\nFirst 5 numbers - ", end='')
    print_array(numbers, 0, 5)
    print("\nLast  5 numbers - ", end='')
    print_array(numbers, SIZE - 5, SIZE)
    print("Quick sort was called {} times for an array of {} numbers".format(times_qs_run, SIZE))
    print()
else:
    print("The program should be called with 2 arguments \"file name\" and number of integers!")
