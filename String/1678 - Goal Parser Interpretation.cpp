class Solution {
public:
    string interpret(string command) {
        string output = "";
        int n = command.length();
        short i;
        for(i=0;i<n;i++){
            if(i+1<n && command[i] == '(' && command[i+1] == ')'){
                output += 'o';
                i++;
            }
            if(i+3 < n && command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
                output += 'a';
                output += 'l';
                i+=3;
            }
            if(command[i] == 'G'){
                output += command[i];
            }
        }
        return output;
    }
};
