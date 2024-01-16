#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string studentName;
    int rollNumber;
    void display_StudentInfo(){
        cout<<"Student Name :"<<studentName<<endl;
        cout<<"Roll Number :"<<rollNumber<<endl;
    }
};
class Car{
    public:
    string carName;
    double carPrice;
    void display_CarInfo(){
        cout<<"Car Name :"<<carName<<endl;
        cout<<"Car Price :"<<carPrice<<endl;
    }
};
int main(){
    Student student1;
    student1.studentName="Rehan";
    student1.rollNumber=146;
    Car car1;
    car1.carName="Mahindra Thar";
    car1.carPrice=1000000;
    cout<<"Student Information:"<<endl;
    student1.display_StudentInfo();
    cout<<"Car Information:"<<endl;
    car1.display_CarInfo();
    return 0;

}