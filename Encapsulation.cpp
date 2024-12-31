#include <bits/stdc++.h>
using namespace std;

class A {
    private :
    string name;
    int age;

    public :

    void setName(string name){
       this -> name = name;
    }
    string getName (){
        return name;
    }

    void setAge(int age){
        this -> age = age;
    }

    int getAge(){
        return age;
    }
};

class B : public A{
    private :
    int salary;
    public :
    void setSalary(int salary){
        this -> salary = salary;
    }
    int getSalary(){
        return salary;
    }
    
    void getInfo(){
        string s;
        int a,sal;
        cout << "Enter the name " << endl;
        cin >> s;
        setName(s);
        cout << "Enter the age " << endl;
        cin >> a;
        setAge(a);
        cout << "Enter the salary " << endl;
        cin >> sal ;
        setSalary(sal);
    }

    void displayInfo(){
        cout << "Name is " <<getName() <<endl;
        cout << "Age is " << getAge() << endl;
        cout << "Salary is " <<getSalary() << endl;
    }
};

int main(){
    B bb;
    bb.getInfo();
    bb.displayInfo();
    return 0;
}

/*
Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. 
In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.
*/