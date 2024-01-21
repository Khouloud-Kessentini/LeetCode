class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        short sum=0, n = seats.size()-1;
        while(n>-1){
            sum+= abs(students[n]-seats[n]);
            n--;
        }
        return sum;
    }
};
