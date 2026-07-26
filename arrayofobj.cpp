#include <iostream>
using namespace std;
class Employee{
    
    int id;
    string name;
    float salary;
    
    public:
    void getdata(){
        
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void display(){
        
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    void updateSalary(){
        int choice;
        cout<<"Enter a choice:";
        cout<<"\n1. Increase Salary";
        cout<<"\n2. Decrease Salary"<<endl;
        cin>>choice;
        if(choice==1){
            float inc;
            cout<<"Enter the amount to increase: ";
            cin>>inc;
            salary+=inc;
        }
        else if(choice==2){
            float dec;
            cout<<"Enter the amount to decrease: ";
            cin>>dec;
            salary-=dec;
        }
        else{
            cout<<"Invalid choice"<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of employee "<<i+1<<endl;
        e[i].getdata();
        e[i].updateSalary();
    }
    for(int i=0; i<n;i++){
        cout<<"\nDetails of employee "<<i+1<<endl;
        e[i].display();
    }
    return 0;
}