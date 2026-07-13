#include <iostream>
using namespace std;

const int MAX_SIZE=100;


class Queue{
    private:
    int front;
    int rear;
    char arr[MAX_SIZE];

    public:
    Queue(){
        front=-1;
        rear=-1;
    }

    bool isFull(){
        return rear==MAX_SIZE-1;

    }
    bool isEmpty(){
        return front==-1 || front>rear;
    }

    void enqueue(int x){
        if(isFull()){
            cout<<"Queue overflow detected"<<endl;
            return;

        }
        if (front==-1){
            front=0;
        }
        arr[++rear]=x;
    }
    char dequeue(){
        if(isEmpty()){
            cout<<"Queue underflow detected"<<endl;
            return '\0';
        }
        return arr[front++];


    }

};
char tolowercase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch+32;
    }
    return ch;
}
bool isAlphanum(char ch){
    return((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'));

}

int main(){
    Queue q;
    char input[MAX_SIZE];
    char cleaned[MAX_SIZE];
    int clean_len=0;

    cout<<"Enter the string:";
    cin.getline(input, MAX_SIZE);

    for(int i=0; input[i]!='\0'; i++){
        if(isAlphanum(input[i])){
            cleaned[clean_len]=tolowercase(input[i]);
            q.enqueue(cleaned[clean_len]);
            clean_len++;

        }
    }
    cleaned[clean_len]='\0';

    bool isPalindrome=true;
    for(int i=clean_len-1; i>=0; i--){
        char qFront=q.dequeue();
        if(qFront!=cleaned[i]){
            isPalindrome=false;
            break;
        }

    }
    if(clean_len==0){
        cout<<"No valid characters entered to check."<<endl;

    }
    if(isPalindrome){
        cout<<"Entered string is a palindrome."<<endl;

    }
    else{
        cout<<"Given string is not a palindrome."<<endl;
    }
}
