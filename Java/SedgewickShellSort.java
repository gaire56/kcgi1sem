/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;
public class SedgewickShellSort {
    public static void shellSort(int[] array) {
        int n = array.length;
        // Generate Sedgewick sequence
        ArrayList<Integer> sequence = generateSedgewickSequence(n);
        // Perform the sorting with the given gaps
        for (int gap : sequence) {
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
        }
    }
    private static ArrayList<Integer> generateSedgewickSequence(int n) {
        ArrayList<Integer> sequence = new ArrayList<>();
        int k = 0;
        int gap;
        // Use Sedgewick's sequence: 9*4^k - 9*2^k + 1 and 4^k + 3*2^(k-1) + 1
        while (true) {
            gap = (int)(9 * Math.pow(4, k) - 9 * Math.pow(2, k) + 1);
            if (gap < n) {
                sequence.add(gap);
            }
            gap = (int)(Math.pow(4, k) + 3 * Math.pow(2, k - 1) + 1);
            if (gap < n) {
                sequence.add(gap);
            }
            if (gap >= n) {
                break;
            }
            k++;        }
        // Reverse the sequence for use in sorting
        Collections.reverse(sequence);
        return sequence;    }
    public static void main(String[] args) {
        int[] array = {23, 42, 4, 16, 8, 15};
        System.out.println("Original Array: " + Arrays.toString(array));
        shellSort(array);
        System.out.println("Sorted Array: " + Arrays.toString(array));
    }
}
