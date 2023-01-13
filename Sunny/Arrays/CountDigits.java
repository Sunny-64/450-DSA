import java.util.*;

public class CountDigits {
    public static void main(String[] args) {
       int nums = 121;
        System.out.println(countDigits(nums));
    }
    static int countDigits(int num) {
        int mainNum = num;
        int count = 0;

        while(num > 0){
            int rem = num % 10;
            if(mainNum % rem == 0){
                count++;
            }
            num /= 10;
        }
        return count;
    }
}
