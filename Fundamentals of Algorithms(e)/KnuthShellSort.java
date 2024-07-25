/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */
import java.util.Arrays;
public class KnuthShellSort {
    public static void shellSort(int[] array) {
        int n = array.length;
        // Initialize the gap using Knuth's sequence
        int gap = 1;
        while (gap < n / 3) {
            gap = 3 * gap + 1; // 1, 4, 13, 40, ...
        }
        // Perform the sorting with the given gap
        while (gap >= 1) {
            for (int i = gap; i < n; i++) {
                int temp = array[i];
                int j = i;
                // Gapped insertion sort
                while (j >= gap && array[j - gap] > temp) {
                    array[j] = array[j - gap];
                    j -= gap;
                }
                array[j] = temp;
            }
            gap /= 3; // Reduce the gap
        }
    }
    public static void main(String[] args) {
        int[] array = {23, 42, 4, 16, 8, 15};
        System.out.println("Original Array: " + Arrays.toString(array));
        shellSort(array);
        System.out.println("Sorted Array: " + Arrays.toString(array));
    }
}
