// https://leetcode.com/problems/maximum-ice-cream-bars/description/
import java.util.*; 
public class MaxIceCreamBars {
    public int maxIceCream(int[] costs, int coins) {
        int totalIceCreams = 0; 
        Arrays.sort(costs); 
        for(int i = 0; i<costs.length; i++){
            if(costs[i] <= coins){
                coins -= costs[i];
                totalIceCreams++;
            }
        }
        return totalIceCreams; 
    }
}
