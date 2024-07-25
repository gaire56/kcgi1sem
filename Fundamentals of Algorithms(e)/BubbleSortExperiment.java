/*
 * NAME: GAIRE ANANTA PRASAD
 * ID: M24W0272
 */

public class BubbleSortExperiment {

    /**
     * Function to implement Bubble Sort algorithm.
     * 
     * @param arr the array to be sorted
     */
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        int comparisons = 0; // Variable to count the number of comparisons

        for (int i = 0; i < n - 1; i++) {
            // Track if any swapping occurred to optimize the sorting process
            boolean swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                comparisons++; // Increment comparisons count

                // Swap if the current element is greater than the next element
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            // If no elements were swapped, the array is already sorted
            if (!swapped) break;
        }

        // Print the sorted array and the number of comparisons
        System.out.println("Sorted array:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println("\nNumber of comparisons: " + comparisons);
    }

    /**
     * Function to print the array.
     * 
     * @param arr the array to be printed
     */
    public static void printArray(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        // Experiment 1: Small data size
        int[] smallData = { 5, 1, 4, 2, 8 };
        System.out.println("Experiment 1: Small Data Size");
        System.out.println("Original array:");
        printArray(smallData);
        bubbleSort(smallData);

        // Experiment 2: Large data size
        int[] largeData = { 64, 34, 25, 12, 22, 11, 90, 78, 45, 67, 89, 10, 5, 3, 2, 1 };
        System.out.println("\nExperiment 2: Large Data Size");
        System.out.println("Original array:");
        printArray(largeData);
        bubbleSort(largeData);
        
    }
}
