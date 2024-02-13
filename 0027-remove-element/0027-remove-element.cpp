class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int unique = 0;
        int valOccurance = 0;

        //Set val = 0 in nums
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                valOccurance++;
                nums[i]=0;
            }else{
                unique++;
            }
        }

        //sort nums
        sort(nums.begin(), nums.end());
        
        
        for(int i = 0; i < nums.size()-valOccurance; i++){
            nums[i]= nums[i+valOccurance];   
        }

        return unique;
    }
};