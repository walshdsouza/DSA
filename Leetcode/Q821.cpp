class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> answer;
        vector<int> temp;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]==c){
                temp.push_back(i);
            }

        }
        for(int j=0; j<s.length(); j++){
            int dist=INT_MAX;
            for(int k=0; k<temp.size(); k++){
                dist=min(dist,abs(j-temp[k]));

            }
            answer.push_back(dist);

        }
        return answer;
        
    }
};