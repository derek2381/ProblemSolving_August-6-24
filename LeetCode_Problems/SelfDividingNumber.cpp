// problem link
// https://leetcode.com/problems/self-dividing-numbers/description/


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left;i <= right;i++){
            int flag = 0;
            int temp = i;
            while(temp > 0){
                int digit = temp%10;
                if(digit == 0){
                    flag = 1;
                    break;
                }else if(i%digit != 0){
                    flag = 1;
                    break;
                }
                temp /= 10;
            }

            if(flag == 0){
                res.push_back(i);
            }

        }

        return res;
    }
};