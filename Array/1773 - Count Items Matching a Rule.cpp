class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        short i, n, items_counter = 0;
        n = items.size();
        if(ruleKey == "type"){
            for(i=0;i<n;i++){
                if(items[i][0] == ruleValue){
                    items_counter++;
                }
            }
        }
        if(ruleKey == "color"){
            for(i=0;i<n;i++){
                if(items[i][1] == ruleValue){
                    items_counter++;
                }
            }
        }
        if(ruleKey == "name"){
            for(i=0;i<n;i++){
                if(items[i][2] == ruleValue){
                    items_counter++;
                }
            }
        }
        return items_counter;
    }
};
