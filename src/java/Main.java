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
