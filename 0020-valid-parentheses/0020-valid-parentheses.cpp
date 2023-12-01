class Solution {
public:
    bool isValid(string s) {

        if(s.size() < 2){
            return false;
        }

        int leftP = 0;
        int rightP = 0;
        int leftB = 0;
        int rightB = 0;
        int leftCB = 0;
        int rightCB = 0;

        stack<char> current;
        current.push(' ');
        
        for(int i = 0; i< s.length(); i++){
            switch(s.at(i)){
                case '(':
                    current.push('(');
                    leftP++;
                    break;
                case ')':
                    rightP++;
                    if(current.top() == '('){
                        current.pop();
                    }else{
                        return false;
                    }
                    break;
                case '[':
                    leftB++;
                    current.push('[');
                    break;
                case ']':
                    rightB++;
                    if(current.top() == '['){
                        current.pop();
                    }else{
                        return false;
                    }
                    break;
                case '{':
                    leftCB++;
                    current.push('{');
                    break;
                case '}':
                    rightCB++;
                    if(current.top() == '{'){
                        current.pop();
                    }else{
                        return false;
                    }
                    break;
            }
        }
        if(leftP != rightP){
            return false;
        }else if(leftB != rightB){
            return false;
        }else if(leftCB != rightCB){
            return false;
        }else{
            return true;
        }
    }
};