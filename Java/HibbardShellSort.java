/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */
import java.util.Arrays;
public class HibbardShellSort {
    public static void shellSort(int[] array) {
        int n = array.length;
        // Initialize gap using Hibbard's sequence
        int gap = 1;
        while (gap < n) {
            gap = 2 * gap + 1; // 1, 3, 7, 15, 31, ...
        }
        gap = (gap - 1) / 2;
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
            gap = (gap - 1) / 2; // Reduce the gap
        }
    }
    public static void main(String[] args) {
        int[] array = {23, 42, 4, 16, 8, 15};
        System.out.println("Original Array: " + Arrays.toString(array));
        shellSort(array);
        System.out.println("Sorted Array: " + Arrays.toString(array));
    }
}
