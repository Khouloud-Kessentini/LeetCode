class Solution {
public:
    int numberOfSteps(int num) {
        int sum = 0;

        if(num == 0){
            return 0;
        }

        while(num!=0){
            if(num%2 == 0){
                num /= 2;
            }
            else{
                num--;
            }
            sum++;
        }
        return sum;
    }
};
