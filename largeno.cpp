#include <iostream>
using namespace std;
 class Stack{
    private:
    char arr[100];
    int top;

    public:
    Stack(){
        top=-1;
    }
    void push(char x){
        if(top==99){
            cout<<"Stack overflow detected"<<endl;
            return;
        }
        else{
            arr[++top]=x;
        }
    }
    char pop(){
        if(top==-1){
            return '\0';

        }
        return arr[top--];

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    

 };

 int main(){
    char num1[100];
    char num2[100];
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;

    Stack s1, s2, result;
    for (int i = 0; num1[i] != '\0'; i++) {
        s1.push(num1[i]-'0');
    }
    for(int i=0; num2[i]!='\0'; i++){
        s2.push(num2[i]-'0');
    }
    int carry=0;
    while(!s1.isEmpty() || !s2.isEmpty() || carry!=0){
        int sum=carry;
        if(!s1.isEmpty()){
            sum+=s1.pop();
        }
        if(!s2.isEmpty()){
            sum+=s2.pop();
        }
        result.push(sum%10 + '0');
        carry=sum/10;
            
        
    }
    cout<<"The sum of the two large numbers is:";
    while(!result.isEmpty()){
        cout<<result.pop();
    }
    cout<<endl;
    return 0;
 }