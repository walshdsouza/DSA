class Solution {
public:
    int addDigits(int num) {
        int result=0;
        while(num/10!=0){
            while(num>0){
                result= result+num%10;
                num=num/10;

            }
            num=result;
        }
        return num;
        
    }
};