class Solution {
public:
    bool judgeCircle(string moves) {
        int ud=0;
        int lr=0;
        int i=0;
        while(i<moves.length()){
            if(moves[i]=='U'){
                ud++;
                i++;
            }
            else if(moves[i]=='D'){
                ud--;
                i++;
            }
            else if(moves[i]=='L'){
                lr++;
                i++;
            }
            else{
                lr--;
                i++;
            }
        }
        if(lr==0 && ud==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};