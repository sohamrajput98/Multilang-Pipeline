#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> data = {12, 7, 3, 21, 9, 5};

    std::cout << "Original data: ";
    for(int n : data) std::cout << n << " ";
    std::cout << std::endl;

    std::sort(data.begin(), data.end());
    std::cout << "Sorted data: ";
    for(int n : data) std::cout << n << " ";
    std::cout << std::endl;

    for(int &n : data) n = n * 3 + 2;
    std::cout << "Transformed data: ";
    for(int n : data) std::cout << n << " ";
    std::cout << std::endl;

    int sum = std::accumulate(data.begin(), data.end(), 0);
    std::cout << "Sum of data: " << sum << std::endl;

    return 0;
}
// Commit 1
// Commit 2
// Commit 3
// Commit 4
// Commit 5
// Commit 6
// Commit 7
// Commit 8
// Commit 9
// Commit 10
// Commit 11
// Commit 12
// Commit 13
// Commit 14
// Commit 15
// Commit 16
// Commit 17
// Commit 18
// Commit 19
// Commit 20
// Commit 21
// Commit 22
// Commit 23
// Commit 24
// Commit 25
// Commit 26
// Commit 26.1
// Commit 26.2
// Commit 26.3
// Commit 26.4
// Commit 26.5
// Commit 26.6
// Commit 26.7
// Commit 26.8
// Commit 26.9
// Commit 26.10
// Commit 26.11
// Commit 26.12
// Commit 26.13
// Commit 26.14
// Commit 26.15
// Commit 26.16
// Commit 26.17
// Commit 26.18
// Commit 26.19
// Commit 26.20
// Commit 26.21
// Commit 26.22
// Commit 26.23
// Commit 26.24
// Commit 26.25
// Commit 26.26
// Commit 26.27
// Commit 26.28
// Commit 26.29
// Commit 26.30
// Commit 26.31
// Commit 26.32
// Commit 26.33
// Commit 1: Adjusted compiler settings and flags
// Commit 2: Enhanced logging for debugging
// Commit 3: Adjusted compiler settings and flags
// Commit 4: Fixed memory leak in helper functions
// Commit 5: Adjusted compiler settings and flags
// Commit 1.1: Removed unused header files
// Commit 1.2: Improved algorithm performance in sorting
// Commit 1.3: Enhanced logging for debugging
// Commit 1.4: Refactored class constructors for readability
// Commit 1.5: Refactored class constructors for readability
// Commit 1.6: Improved algorithm performance in sorting
// Commit 1.7: Improved algorithm performance in sorting
// Commit 1.8: Optimized vector operations for speed
// Commit 1.9: Fixed memory leak in helper functions
// Commit 1.10: Refactored class constructors for readability
// Commit 1.11: Updated comments and documentation
// Commit 1.12: Implemented error handling in main module
// Commit 1.13: Fixed memory leak in helper functions
// Commit 1.14: Enhanced logging for debugging
// Commit 1.15: Adjusted compiler settings and flags
// Commit 1.16: Implemented error handling in main module
// Commit 1.17: Refactored class constructors for readability
// Commit 1.18: Optimized vector operations for speed
// Commit 1.19: Fixed memory leak in helper functions
// Commit 1.20: Implemented error handling in main module
// Commit 1.21: Removed unused header files
// Commit 1.22: Fixed memory leak in helper functions
// Commit 1.23: Improved algorithm performance in sorting
// Commit 1.24: Adjusted compiler settings and flags
// Commit 1.25: Optimized vector operations for speed
// Commit 1.26: Enhanced logging for debugging
// Commit 1.27: Improved algorithm performance in sorting
// Commit 1.28: Updated comments and documentation
// Commit 1.29: Refactored class constructors for readability
// Commit 1.30: Implemented error handling in main module
// Commit 1.31: Removed unused header files
// Commit 1.32: Improved algorithm performance in sorting
// Commit 1.33: Optimized vector operations for speed
// Commit 5.1: Implemented error handling in main module
// Commit 5.2: Refactored class constructors for readability
// Commit 5.3: Enhanced logging for debugging
// Commit 5.4: Implemented error handling in main module
// Commit 5.5: Refactored class constructors for readability
// Commit 5.6: Enhanced logging for debugging
// Commit 5.7: Removed unused header files
// Commit 5.8: Refactored class constructors for readability
// Commit 5.9: Optimized vector operations for speed
// Commit 5.10: Adjusted compiler settings and flags
// Commit 5.11: Improved algorithm performance in sorting
// Commit 5.12: Adjusted compiler settings and flags
// Commit 5.13: Implemented error handling in main module
// Commit 5.14: Removed unused header files
// Commit 5.15: Optimized vector operations for speed
// Commit 5.16: Enhanced logging for debugging
// Commit 5.17: Improved algorithm performance in sorting
// Commit 5.18: Adjusted compiler settings and flags
// Commit 5.19: Updated comments and documentation
// Commit 5.20: Enhanced logging for debugging
// Commit 5.21: Updated comments and documentation
// Commit 5.22: Improved algorithm performance in sorting
// Commit 5.23: Optimized vector operations for speed
// Commit 5.24: Adjusted compiler settings and flags
// Commit 5.25: Removed unused header files
// Commit 5.26: Removed unused header files
// Commit 5.27: Refactored class constructors for readability
// Commit 5.28: Removed unused header files
// Commit 5.29: Adjusted compiler settings and flags
// Commit 9.1: Implemented error handling in main module
// Commit 9.2: Optimized vector operations for speed
// Commit 9.3: Enhanced logging for debugging
// Commit 9.4: Optimized vector operations for speed
// Commit 9.5: Removed unused header files
// Commit 9.6: Fixed memory leak in helper functions
// Commit 9.7: Removed unused header files
// Commit 9.8: Enhanced logging for debugging
// Commit 9.9: Removed unused header files
// Commit 9.10: Enhanced logging for debugging
// Commit 9.11: Implemented error handling in main module
// Commit 9.12: Adjusted compiler settings and flags
// Commit 9.13: Optimized vector operations for speed
// Commit 9.14: Refactored class constructors for readability
// Commit 9.15: Fixed memory leak in helper functions
// Commit 9.16: Optimized vector operations for speed
// Commit 9.17: Updated comments and documentation
// Commit 9.18: Enhanced logging for debugging
// Commit 9.19: Removed unused header files
// Commit 9.20: Implemented error handling in main module
// Commit 9.21: Removed unused header files
// Commit 10.1: Optimized vector operations for speed
// Commit 10.2: Fixed memory leak in helper functions
// Commit 10.3: Removed unused header files
// Commit 10.4: Fixed memory leak in helper functions
// Commit 10.5: Refactored class constructors for readability
// Commit 10.6: Implemented error handling in main module
// Commit 10.7: Updated comments and documentation
// Commit 10.8: Optimized vector operations for speed
// Commit 10.9: Improved algorithm performance in sorting
// Commit 10.10: Fixed memory leak in helper functions
// Commit 10.11: Removed unused header files
// Commit 12.1: Enhanced logging for debugging
// Commit 12.2: Updated comments and documentation
// Commit 12.3: Fixed memory leak in helper functions
// Commit 12.4: Implemented error handling in main module
// Commit 12.5: Enhanced logging for debugging
// Commit 12.6: Enhanced logging for debugging
// Commit 12.7: Improved algorithm performance in sorting
// Commit 12.8: Implemented error handling in main module
// Commit 12.9: Optimized vector operations for speed
// Commit 12.10: Refactored class constructors for readability
// Commit 12.11: Updated comments and documentation
// Commit 13.1: Refactored class constructors for readability
// Commit 13.2: Enhanced logging for debugging
// Commit 13.3: Optimized vector operations for speed
// Commit 13.4: Enhanced logging for debugging
// Commit 13.5: Updated comments and documentation
// Commit 13.6: Fixed memory leak in helper functions
// Commit 13.7: Improved algorithm performance in sorting
// Commit 13.8: Updated comments and documentation
// Commit 13.9: Improved algorithm performance in sorting
// Commit 13.10: Improved algorithm performance in sorting
// Commit 13.11: Removed unused header files
// Commit 14.1: Optimized vector operations for speed
// Commit 14.2: Optimized vector operations for speed
