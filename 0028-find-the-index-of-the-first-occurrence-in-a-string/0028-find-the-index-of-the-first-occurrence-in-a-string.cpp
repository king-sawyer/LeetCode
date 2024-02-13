class Solution {
public:
    int strStr(string haystack, string needle) {

        int index = -1;

        //Iterate through haystack 
        for(int i = 0; i <haystack.size(); i++){

            if(index != -1){
                return index;
            }

            //If haystack at i = first letter of needle
            if(haystack[i] == needle[0]){

                //Save i as possible match location
                index = i;

                //Compare needle with possible match
                int needleI = 0;
                for(int j = i; needleI < needle.size(); j++){
                    //If non match found or out of bounds set index = -1
                    if(j < haystack.size()){
                        if(haystack[j] != needle[needleI]){
                            index = -1;
                        }
                        needleI++;
                    }else{
                        needleI = needle.size();
                        index = -1;
                    }
                }
                
            }
        }

        return index;
    }
};