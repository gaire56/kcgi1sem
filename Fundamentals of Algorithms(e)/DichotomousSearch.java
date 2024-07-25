/*
 * GAIRE ANANTA PRASAD
 * M24W0272
 */
public class DichotomousSearch {

        public static int binarySearch(int[] array, int target) {
        int left = 0;
        int right = array.length - 1;
        
        while (left <= right) {
            int middle = left + (right - left) / 2;
            
            // Check if the target is present at mid
            if (array[middle] == target) {
                return middle; // Target found
            }
            
            // If target is greater, ignore left half
            if (array[middle] < target) {
                left = middle + 1;
            }
            // If target is smaller, ignore right half
            else {
                right = middle - 1;
            }
        }
        
        // Target not found
        return -1;
    }

    public static void main(String[] args) {
        // Example array
        int[] array = {2, 3, 4, 10, 40, 50, 60, 70, 80};
        
        int target = 10;
        
        // Call binary search method
        int result = binarySearch(array, target);
        
        if (result == -1) {
            System.out.println("Element not present in the array");
        } else {
            System.out.println("Element found at index: " + result);
        }
    }
}
