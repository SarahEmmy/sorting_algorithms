# Sorting Algorithms & Big O

## Overview

A Sorting Algorithm is used to rearrange a given array or data structure elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure. This repository contains various sorting algorithms and their corresponding Big O notations, which help analyze their efficiency.

## Resources

- [Know Thy Complexities!](https://www.bigocheatsheet.com/)
- [Sorting and Searching Algorithms](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Compare Feature Growth](https://www.desmos.com/calculator/bsmavxwht0)

## Project Content

### 1. Bubble Sort 💙

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

- **Time Complexity (Big O)**: O(n^2)

### 2. Insertion Sort 🍗

Insertion Sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages.

- **Time Complexity (Big O)**: O(n^2)

### 3. Selection Sort 👏

Selection Sort is an in-place comparison sorting algorithm. It has an O(n^2) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort.

- **Time Complexity (Big O)**: O(n^2)

### 4. Quicksort ⭐ ⭐ ⭐

Quicksort is an efficient sorting algorithm. Developed by British computer scientist Tony Hoare in 1959 and published in 1961, it is still a commonly used algorithm for sorting.

- **Time Complexity (Big O)**: O(n log n)

### 5. Shell Sort - Knuth Sequence 🐚

Shell Sort, also known as Shell's method, is an in-place comparison sort. It can be seen as either a generalization of sorting by exchange (bubble sort) or sorting by insertion (insertion sort). The method starts by sorting pairs of elements far apart from each other, then progressively reducing the gap between elements to be compared.

- **Time Complexity (Big O)**: Depends on the gap sequence used.

### 6. Cocktail Shaker Sort 🍹

Cocktail Shaker Sort, also known as bidirectional bubble sort, is an extension of bubble sort. The algorithm extends bubble sort by operating in two directions. While it improves on bubble sort by more quickly moving items to the beginning of the list, it provides only marginal performance improvements.

- **Time Complexity (Big O)**: O(n^2)

### 7. Counting Sort 🙉

Counting Sort is an algorithm for sorting a collection of objects according to keys that are small integers; that is, it is an integer sorting algorithm. Its running time is linear in the number of items and the difference between the maximum and minimum key values, making it suitable for situations where the variation in keys is not significantly greater than the number of items.

- **Time Complexity (Big O)**: O(n + k) (where k is the range of input)

## Author

This project was created by SarahEmmy.
