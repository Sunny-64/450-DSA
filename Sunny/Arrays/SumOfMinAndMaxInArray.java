class SumOfMinAndMaxInArray{
    public static void main(String[] args) {
        int[] arr = {-1,0,5,8,-8,10,3};
        System.out.println(findSum(arr, arr.length));
    }
     public static int findSum(int A[],int N) 
    {
        //code here
        int min = A[0]; 
        int max = A[0]; 
        
        for(int i = 1; i<N; i++){
            if(A[i] > max){
                max = A[i]; 
            }
            else if(A[i] < min){
                min = A[i]; 
            }
        }
        return (max + min);
    }
}