class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        short n = hours.size() -1, sum=0;
        while(n>-1){
            if(hours[n]>=target){
                sum++;
            }
            n--;
        }
        return sum;
    }
};
