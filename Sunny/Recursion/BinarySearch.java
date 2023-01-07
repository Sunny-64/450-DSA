package Recursion;

class BinarySearch{
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8}; 
        int start = 0; 
        int end = arr.length - 1; 
        int target = 7;
        int ans = BS(arr, start, end, target);
        System.out.println(ans);
    }
    static int BS(int[] arr, int start, int end, int target){
        int mid = start + (end - start)/2;
        if(start > end){
            return - 1;
        }
        if(arr[mid] < target){
            return BS(arr, mid+1, end, target);
        }
         if(arr[mid] > target) {
             return BS(arr, 0, mid-1, target);
         }
         return mid;
    }
}

// if there is a return type to a function make sure the return the function call
// base case
// if a problem can be divided it can potentially be solved with recursion.
// Find out the recurrence relation