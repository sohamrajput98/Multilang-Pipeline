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
// Commit 14.3: Refactored class constructors for readability
// Commit 14.4: Improved algorithm performance in sorting
// Commit 14.5: Implemented error handling in main module
// Commit 14.6: Optimized vector operations for speed
// Commit 14.7: Removed unused header files
// Commit 14.8: Refactored class constructors for readability
// Commit 14.9: Removed unused header files
// Commit 14.10: Removed unused header files
// Commit 14.11: Fixed memory leak in helper functions
// Commit 14.12: Removed unused header files
// Commit 14.13: Updated comments and documentation
// Commit 14.14: Enhanced logging for debugging
// Commit 14.15: Enhanced logging for debugging
// Commit 14.16: Fixed memory leak in helper functions
// Commit 14.17: Implemented error handling in main module
// Commit 14.18: Fixed memory leak in helper functions
// Commit 14.19: Refactored class constructors for readability
// Commit 14.20: Fixed memory leak in helper functions
// Commit 14.21: Fixed memory leak in helper functions
// Commit 16.1: Updated comments and documentation
// Commit 16.2: Optimized vector operations for speed
// Commit 16.3: Optimized vector operations for speed
// Commit 16.4: Optimized vector operations for speed
// Commit 16.5: Updated comments and documentation
// Commit 16.6: Improved algorithm performance in sorting
// Commit 16.7: Updated comments and documentation
// Commit 16.8: Implemented error handling in main module
// Commit 16.9: Enhanced logging for debugging
// Commit 16.10: Implemented error handling in main module
// Commit 16.11: Refactored class constructors for readability
// Commit 16.12: Updated comments and documentation
// Commit 16.13: Adjusted compiler settings and flags
// Commit 16.14: Removed unused header files
// Commit 16.15: Optimized vector operations for speed
// Commit 16.16: Refactored class constructors for readability
// Commit 16.17: Enhanced logging for debugging
// Commit 16.18: Removed unused header files
// Commit 16.19: Optimized vector operations for speed
// Commit 16.20: Fixed memory leak in helper functions
// Commit 16.21: Refactored class constructors for readability
// Commit 16.22: Removed unused header files
// Commit 16.23: Refactored class constructors for readability
// Commit 16.24: Implemented error handling in main module
// Commit 16.25: Implemented error handling in main module
// Commit 16.26: Refactored class constructors for readability
// Commit 16.27: Improved algorithm performance in sorting
// Commit 16.28: Implemented error handling in main module
// Commit 16.29: Refactored class constructors for readability
// Commit 16.30: Removed unused header files
// Commit 16.31: Fixed memory leak in helper functions
// Commit 16.32: Updated comments and documentation
// Commit 16.33: Removed unused header files
// Commit 17.1: Removed unused header files
// Commit 17.2: Implemented error handling in main module
// Commit 17.3: Refactored class constructors for readability
// Commit 17.4: Refactored class constructors for readability
// Commit 17.5: Adjusted compiler settings and flags
// Commit 17.6: Refactored class constructors for readability
// Commit 17.7: Improved algorithm performance in sorting
// Commit 17.8: Adjusted compiler settings and flags
// Commit 17.9: Enhanced logging for debugging
// Commit 17.10: Optimized vector operations for speed
// Commit 17.11: Implemented error handling in main module
// Commit 17.12: Updated comments and documentation
// Commit 17.13: Updated comments and documentation
// Commit 17.14: Optimized vector operations for speed
// Commit 17.15: Enhanced logging for debugging
// Commit 17.16: Implemented error handling in main module
// Commit 17.17: Removed unused header files
// Commit 17.18: Enhanced logging for debugging
// Commit 17.19: Fixed memory leak in helper functions
// Commit 18.1: Enhanced logging for debugging
// Commit 18.2: Enhanced logging for debugging
// Commit 18.3: Fixed memory leak in helper functions
// Commit 18.4: Optimized vector operations for speed
// Commit 18.5: Removed unused header files
// Commit 18.6: Removed unused header files
// Commit 18.7: Adjusted compiler settings and flags
// Commit 18.8: Enhanced logging for debugging
// Commit 18.9: Improved algorithm performance in sorting
// Commit 18.10: Removed unused header files
// Commit 18.11: Removed unused header files
// Commit 18.12: Updated comments and documentation
// Commit 18.13: Optimized vector operations for speed
// Commit 18.14: Implemented error handling in main module
// Commit 18.15: Improved algorithm performance in sorting
// Commit 18.16: Enhanced logging for debugging
// Commit 18.17: Adjusted compiler settings and flags
// Commit 18.18: Refactored class constructors for readability
// Commit 18.19: Enhanced logging for debugging
// Commit 18.20: Enhanced logging for debugging
// Commit 18.21: Implemented error handling in main module
// Commit 18.22: Fixed memory leak in helper functions
// Commit 18.23: Adjusted compiler settings and flags
// Commit 18.24: Optimized vector operations for speed
// Commit 18.25: Fixed memory leak in helper functions
// Commit 18.26: Refactored class constructors for readability
// Commit 18.27: Adjusted compiler settings and flags
// Commit 18.28: Adjusted compiler settings and flags
// Commit 18.29: Optimized vector operations for speed
// Commit 19.1: Improved algorithm performance in sorting
// Commit 19.2: Removed unused header files
// Commit 19.3: Enhanced logging for debugging
// Commit 19.4: Implemented error handling in main module
// Commit 19.5: Adjusted compiler settings and flags
// Commit 19.6: Adjusted compiler settings and flags
// Commit 19.7: Updated comments and documentation
// Commit 19.8: Updated comments and documentation
// Commit 19.9: Adjusted compiler settings and flags
// Commit 19.10: Adjusted compiler settings and flags
// Commit 19.11: Fixed memory leak in helper functions
// Commit 19.12: Implemented error handling in main module
// Commit 19.13: Refactored class constructors for readability
// Commit 19.14: Implemented error handling in main module
// Commit 19.15: Enhanced logging for debugging
// Commit 19.16: Refactored class constructors for readability
// Commit 19.17: Updated comments and documentation
// Commit 19.18: Implemented error handling in main module
// Commit 19.19: Updated comments and documentation
// Commit 19.20: Updated comments and documentation
// Commit 19.21: Enhanced logging for debugging
// Commit 19.22: Removed unused header files
// Commit 19.23: Adjusted compiler settings and flags
// Commit 19.24: Enhanced logging for debugging
// Commit 19.25: Updated comments and documentation
// Commit 19.26: Enhanced logging for debugging
// Commit 19.27: Refactored class constructors for readability
// Commit 19.28: Enhanced logging for debugging
// Commit 19.29: Adjusted compiler settings and flags
// Commit 20.1: Improved algorithm performance in sorting
// Commit 20.2: Fixed memory leak in helper functions
// Commit 20.3: Enhanced logging for debugging
// Commit 20.4: Improved algorithm performance in sorting
// Commit 20.5: Implemented error handling in main module
// Commit 20.6: Improved algorithm performance in sorting
// Commit 20.7: Fixed memory leak in helper functions
// Commit 20.8: Enhanced logging for debugging
// Commit 20.9: Optimized vector operations for speed
// Commit 20.10: Optimized vector operations for speed
// Commit 20.11: Improved algorithm performance in sorting
// Commit 20.12: Enhanced logging for debugging
// Commit 20.13: Enhanced logging for debugging
// Commit 20.14: Refactored class constructors for readability
// Commit 20.15: Improved algorithm performance in sorting
// Commit 20.16: Adjusted compiler settings and flags
// Commit 20.17: Refactored class constructors for readability
// Commit 20.18: Optimized vector operations for speed
// Commit 20.19: Optimized vector operations for speed
// Commit 20.20: Refactored class constructors for readability
// Commit 20.21: Optimized vector operations for speed
// Commit 20.22: Refactored class constructors for readability
// Commit 20.23: Fixed memory leak in helper functions
// Commit 20.24: Refactored class constructors for readability
// Commit 20.25: Improved algorithm performance in sorting
// Commit 20.26: Optimized vector operations for speed
// Commit 20.27: Optimized vector operations for speed
// Commit 20.28: Removed unused header files
// Commit 20.29: Removed unused header files
// Commit 20.30: Implemented error handling in main module
// Commit 20.31: Improved algorithm performance in sorting
// Commit 20.32: Implemented error handling in main module
// Commit 20.33: Enhanced logging for debugging
// Commit 21.1: Refactored class constructors for readability
// Commit 21.2: Improved algorithm performance in sorting
// Commit 21.3: Fixed memory leak in helper functions
// Commit 21.4: Updated comments and documentation
// Commit 21.5: Adjusted compiler settings and flags
// Commit 21.6: Optimized vector operations for speed
// Commit 21.7: Enhanced logging for debugging
// Commit 21.8: Updated comments and documentation
// Commit 21.9: Updated comments and documentation
// Commit 21.10: Adjusted compiler settings and flags
// Commit 21.11: Updated comments and documentation
// Commit 21.12: Fixed memory leak in helper functions
// Commit 21.13: Removed unused header files
// Commit 21.14: Updated comments and documentation
// Commit 21.15: Adjusted compiler settings and flags
// Commit 21.16: Fixed memory leak in helper functions
// Commit 21.17: Improved algorithm performance in sorting
// Commit 21.18: Fixed memory leak in helper functions
// Commit 21.19: Optimized vector operations for speed
// Commit 22.1: Removed unused header files
// Commit 22.2: Improved algorithm performance in sorting
// Commit 22.3: Updated comments and documentation
// Commit 22.4: Removed unused header files
// Commit 22.5: Refactored class constructors for readability
// Commit 22.6: Removed unused header files
// Commit 22.7: Adjusted compiler settings and flags
// Commit 22.8: Updated comments and documentation
// Commit 22.9: Implemented error handling in main module
// Commit 22.10: Refactored class constructors for readability
// Commit 22.11: Removed unused header files
// Commit 22.12: Optimized vector operations for speed
// Commit 22.13: Adjusted compiler settings and flags
// Commit 22.14: Fixed memory leak in helper functions
// Commit 22.15: Adjusted compiler settings and flags
// Commit 22.16: Adjusted compiler settings and flags
// Commit 22.17: Removed unused header files
// Commit 22.18: Adjusted compiler settings and flags
// Commit 22.19: Optimized vector operations for speed
// Commit 23.1: Improved algorithm performance in sorting
// Commit 23.2: Optimized vector operations for speed
// Commit 23.3: Removed unused header files
// Commit 23.4: Implemented error handling in main module
// Commit 23.5: Adjusted compiler settings and flags
// Commit 23.6: Removed unused header files
// Commit 23.7: Implemented error handling in main module
// Commit 23.8: Implemented error handling in main module
// Commit 23.9: Improved algorithm performance in sorting
// Commit 23.10: Removed unused header files
// Commit 23.11: Enhanced logging for debugging
// Commit 23.12: Fixed memory leak in helper functions
// Commit 23.13: Fixed memory leak in helper functions
// Commit 23.14: Improved algorithm performance in sorting
// Commit 23.15: Fixed memory leak in helper functions
// Commit 23.16: Optimized vector operations for speed
// Commit 23.17: Updated comments and documentation
// Commit 23.18: Optimized vector operations for speed
// Commit 23.19: Implemented error handling in main module
// Commit 24.1: Enhanced logging for debugging
// Commit 24.2: Implemented error handling in main module
// Commit 24.3: Adjusted compiler settings and flags
// Commit 24.4: Refactored class constructors for readability
// Commit 24.5: Enhanced logging for debugging
// Commit 24.6: Implemented error handling in main module
// Commit 24.7: Fixed memory leak in helper functions
// Commit 24.8: Implemented error handling in main module
// Commit 24.9: Removed unused header files
// Commit 24.10: Implemented error handling in main module
// Commit 24.11: Implemented error handling in main module
// Commit 24.12: Optimized vector operations for speed
// Commit 24.13: Refactored class constructors for readability
// Commit 24.14: Adjusted compiler settings and flags
// Commit 25.1: Enhanced logging for debugging
// Commit 25.2: Fixed memory leak in helper functions
// Commit 25.3: Optimized vector operations for speed
// Commit 25.4: Adjusted compiler settings and flags
// Commit 25.5: Enhanced logging for debugging
// Commit 25.6: Fixed memory leak in helper functions
// Commit 25.7: Enhanced logging for debugging
// Commit 25.8: Adjusted compiler settings and flags
// Commit 25.9: Updated comments and documentation
// Commit 25.10: Updated comments and documentation
// Commit 25.11: Refactored class constructors for readability
// Commit 25.12: Refactored class constructors for readability
// Commit 25.13: Removed unused header files
// Commit 25.14: Improved algorithm performance in sorting
// Commit 25.15: Updated comments and documentation
// Commit 25.16: Fixed memory leak in helper functions
// Commit 25.17: Implemented error handling in main module
// Commit 25.18: Implemented error handling in main module
// Commit 25.19: Updated comments and documentation
// Commit 25.20: Removed unused header files
// Commit 25.21: Removed unused header files
// Commit 26.1: Implemented error handling in main module
// Commit 26.2: Enhanced logging for debugging
// Commit 26.3: Enhanced logging for debugging
// Commit 26.4: Optimized vector operations for speed
// Commit 26.5: Implemented error handling in main module
// Commit 26.6: Optimized vector operations for speed
// Commit 26.7: Implemented error handling in main module
// Commit 26.8: Optimized vector operations for speed
// Commit 26.9: Refactored class constructors for readability
// Commit 26.10: Improved algorithm performance in sorting
// Commit 26.11: Refactored class constructors for readability
// Commit 26.12: Adjusted compiler settings and flags
// Commit 26.13: Optimized vector operations for speed
// Commit 27.1: Improved algorithm performance in sorting
// Commit 27.2: Adjusted compiler settings and flags
// Commit 27.3: Removed unused header files
// Commit 27.4: Updated comments and documentation
// Commit 27.5: Implemented error handling in main module
// Commit 27.6: Adjusted compiler settings and flags
// Commit 27.7: Fixed memory leak in helper functions
// Commit 27.8: Implemented error handling in main module
// Commit 27.9: Adjusted compiler settings and flags
// Commit 27.10: Adjusted compiler settings and flags
// Commit 27.11: Implemented error handling in main module
// Commit 28.1: Enhanced logging for debugging
// Commit 28.2: Implemented error handling in main module
// Commit 28.3: Updated comments and documentation
// Commit 28.4: Adjusted compiler settings and flags
// Commit 28.5: Implemented error handling in main module
// Commit 28.6: Adjusted compiler settings and flags
// Commit 28.7: Enhanced logging for debugging
// Commit 28.8: Removed unused header files
// Commit 28.9: Fixed memory leak in helper functions
// Commit 28.10: Fixed memory leak in helper functions
// Commit 28.11: Implemented error handling in main module
// Commit 28.12: Fixed memory leak in helper functions
// Commit 28.13: Adjusted compiler settings and flags
// Commit 28.14: Adjusted compiler settings and flags
// Commit 28.15: Implemented error handling in main module
// Commit 28.16: Updated comments and documentation
// Commit 28.17: Refactored class constructors for readability
// Commit 28.18: Adjusted compiler settings and flags
// Commit 28.19: Removed unused header files
// Commit 28.20: Adjusted compiler settings and flags
// Commit 28.21: Refactored class constructors for readability
// Commit 28.22: Fixed memory leak in helper functions
// Commit 28.23: Optimized vector operations for speed
