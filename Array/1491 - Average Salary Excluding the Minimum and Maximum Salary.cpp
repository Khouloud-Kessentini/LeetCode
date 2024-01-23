class Solution {
public:
    double average(vector<int>& salary) {
        double n = salary.size() - 1, i, sum = 0;
        sort(salary.begin(), salary.end());
        for(i=1;i<n;i++){
            sum+=salary[i];
        }
        return sum / (n-1);
    }
};
