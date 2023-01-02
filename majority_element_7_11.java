class Solution {
    public int majorityElement(int[] nums) {
        for(int i: nums){
            System.out.println(i);
        }
    }
}

public class majority_element_7_11{
    public static void main(String[] args){
        Solution a = new Solution();
        int nums = new int[50000];
        a.majorityElement(nums);
    }
}