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
 bool isMatch(char open, char close){
    if ((open=='(' && close==')') || (open=='{' && close=='}') || (open=='[' && close==']') )
        return true;
    else
        return false;
 }

 int main(){
    char exp[100];
    cout<<"Enter the expression:";
    cin>>exp;

    Stack s;

    for(int i=0; exp[i]!='\0'; i++){
        char ch=exp[i];
        if(ch!=')' && ch!='}' && ch!=']' && ch!='(' && ch!='{' && ch!='['){
            continue;
        } 
         if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']'){
            if(s.isEmpty()){
                cout<<"Underflow detected"<<endl;
                return 0;
            }
            else if(!isMatch(s.pop(),ch)){
                cout<<"Mismatch detected"<<endl;
                return 0;
            }
        }
    }
    if(s.isEmpty()){
        cout<<"Expression is balanced."<<endl;

    }
    else{
        cout<<"Overflow detected."<<endl;
    }
    return 0;

 }