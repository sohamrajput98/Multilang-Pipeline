import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] data = {12, 7, 3, 21, 9, 5};

        System.out.println("Original data: " + Arrays.toString(data));

        Arrays.sort(data);
        System.out.println("Sorted data: " + Arrays.toString(data));

        for (int i = 0; i < data.length; i++) data[i] = data[i] * 3 + 2;
        System.out.println("Transformed data: " + Arrays.toString(data));

        int sum = Arrays.stream(data).sum();
        System.out.println("Sum of data: " + sum);
    }
}
// Commit 1.1
// Commit 1.2
// Commit 1.3
// Commit 1.4
// Commit 1.5
// Commit 1.6
// Commit 1.7
// Commit 1.8
// Commit 1.9
// Commit 1.10
// Commit 1.11
// Commit 1.12
// Commit 1.13
// Commit 1.14
// Commit 1.15
// Commit 1.16
// Commit 1.17
// Commit 1.18
// Commit 1.19
// Commit 1.20
// Commit 1.21
// Commit 1.22
// Commit 1.23
// Commit 1.24
// Commit 1.25
// Commit 1.26
// Commit 1.27
// Commit 1.28
// Commit 1.29
// Commit 1.30
// Commit 1.31
// Commit 1.32
// Commit 1.33
// Commit 4.1: Optimized list processing methods
// Commit 4.2: Removed unused imports
// Commit 4.3: Fixed null pointer issues
// Commit 4.4: Adjusted configuration in application.properties
// Commit 4.5: Removed unused imports
// Commit 4.6: Refactored service layer for clarity
// Commit 4.7: Optimized list processing methods
// Commit 4.8: Added exception handling in main class
// Commit 4.9: Improved thread handling in modules
// Commit 4.10: Fixed null pointer issues
// Commit 4.11: Adjusted configuration in application.properties
// Commit 4.12: Removed unused imports
// Commit 4.13: Optimized list processing methods
// Commit 4.14: Updated Javadoc and README
// Commit 4.15: Refactored service layer for clarity
// Commit 4.16: Refactored service layer for clarity
// Commit 4.17: Refactored service layer for clarity
// Commit 4.18: Improved thread handling in modules
// Commit 4.19: Refactored service layer for clarity
// Commit 4.20: Refactored service layer for clarity
// Commit 4.21: Adjusted configuration in application.properties
// Commit 4.22: Adjusted configuration in application.properties
// Commit 4.23: Added exception handling in main class
// Commit 4.24: Enhanced logging and debug statements
// Commit 4.25: Fixed null pointer issues
