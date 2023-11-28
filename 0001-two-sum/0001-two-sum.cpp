class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> returnValues;
        bool found = false;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 1; j < nums.size(); j++){
                if(nums.at(i) + nums.at(j) == target && i != j){
                    returnValues.push_back(i);
                    returnValues.push_back(j);
                    found = true;
                }
                if(found){
                    break;
                }
            }
            if(found){
                break;
            }
        }


        return returnValues;
    }
};