
public class BubbleSort {
    public static void main(String[] args) {
        // Sample array 1
        int[] arr1 = {61, 30, 19, 12, 22, 11, 85,73};
        System.out.println("Original Array:");
        printArray(arr1);
        bubbleSort(arr1);
        System.out.println("\nSorted Array:");
        printArray(arr1);
        
        // Sample array 2
        int[] arr2 = {9, 10, 4, 2, 8,7,12,1};
        System.out.println("\nOriginal Array:");
        printArray(arr2);
        bubbleSort(arr2);
        System.out.println("\nSorted Array:");
        printArray(arr2);
    }

    // Bubble sort implementation
    static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    // Helper method to print an array
    static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
