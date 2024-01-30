class Solution {
public:
    int fib(int n) {
        int one = 0, two = 1, temp_one;
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        else{
            while(n>1){
                temp_one = one;
                one = two;
                two = temp_one + two;
                n--;
            }
        }
        return two;
    }
};
