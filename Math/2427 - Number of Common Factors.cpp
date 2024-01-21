class Solution {
public:
    int commonFactors(int a, int b) {
        short x = min(a,b), y = max(a,b), div=0,i;
        for(i=1;i<=x;i++){
            if(x%i == 0 && y%i == 0){
                div++;
            }
        }

        return div;
    }
};
