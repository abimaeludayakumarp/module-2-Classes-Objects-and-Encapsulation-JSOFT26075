#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;

    student(int r,string n){
        rollno=r;
        name=n;
    }
    void display(){
        cout<<rollno<<" "<<name<<endl;
    }
};
int main(){
    student s1(101,"Asha");
    student s2(102,"Rahul");
    s1.display();
    s2.display();
    return 0;
}