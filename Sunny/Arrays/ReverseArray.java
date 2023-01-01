package Sunny.Arrays;

import java.util.Arrays;

// Reverse an Array 
public class ReverseArray {

        public static void main(String[] args) {
            int[] arr = {1,2,3,4,5};
            int l = arr.length; ;
            for(int i = 0; i<l/2; i++){
                int temp = arr[l-1-i];
                arr[l-1-i] = arr[i];
                arr[i] = temp;
            }
            System.out.println(Arrays.toString(arr));

        }
}


 /*
        formula = l-1-i
        1 = 5 -  0->4 5-1-0 -> 4
        2 = 4 -  1->3 5-1-1 -> 3
        3 = 3    2->2 5-1-2 = 2
        */