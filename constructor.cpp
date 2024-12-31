#include <bits/stdc++.h>
using namespace std;
/*  Default Constructor
class Student{
    int rno;
    char name[20];
    double fees;
    public:
    Student(){
        cout << "Enter the rollno ";
        cin >> rno;
        cout << "Enter the name ";
        cin >> name;
        cout << "Enter the fees ";
        cin >> fees;
    }

    void display(){
        cout << endl << rno <<"\t" << name <<"\t" << fees;
    }
};

int main(){
    Student obj_student;
    obj_student.display();
    return 0;
}

parameterized constructor.....
class Student {
    int rno;
    char name[20];
    int age;
    public:
    Student(int r,const char *n,int a){
        rno = r;
        strcpy(name ,n);
        age = a;
    }
    void display(){
        cout << rno <<"\t" << name <<"\t" << age ;
    }
};

int main(){
    int rno = 21;
    int age = 21;
    const char *name = "Nandy";
    Student obj_student(rno,name,age);
    obj_student.display();
    return 0;
}

copy constructor....
class Student {
    int rno;
    char name[20];
    int age;
    public:
    Student(int r,const char * n,int a){
        rno = r;
        strcpy(name, n);
        age = a;
    }

    Student(const Student &other){
        rno = other.rno;
        strcpy(name,other.name);
        age = other.age;
    }

    void display(){
        cout << rno << "\t" << name << "\t" << age << endl;
    }
};

int main(){
    Student obj1(21,"Nandy",21);
    obj1.display();

    Student obj2 = obj1;
    obj2.display();
    return 0;
}*/

class Student {
    int rno;
    char *name;
    int age;

public:

    Student(int r, const char *n, int a) {
        rno = r;
        name = new char[strlen(n) + 1];  
        strcpy(name, n);  
        age = a;
    }

    Student(const Student &other) {
        rno = other.rno;
        age = other.age;
        name = new char[strlen(other.name) + 1];  
        strcpy(name, other.name);  
    }
    
    Student(Student&& other) noexcept {
        rno = other.rno;
        age = other.age;
        name = other.name;  
        other.name = nullptr;  
        other.rno = 0;  
        other.age = 0;
        cout << "Move constructor called!" << endl;
    }

    ~Student() {
        delete[] name;  
    }

    void display() const {
        cout << rno << "\t" << name << "\t" << age << endl;
    }
};

int main() {
    // Create an object using the constructor
    Student obj1(21, "Nandy", 21);
    cout << "Original object:" << endl;
    obj1.display();
    // Create a new object using the move constructor (obj1 is moved to obj2)
    Student obj2 = std::move(obj1);  // Move constructor is called
    cout << "Moved object:" << endl;
    obj2.display();
    // Display obj1 after it has been moved
    cout << "Original object after move (obj1):" << endl;
    obj1.display();  // obj1 is now in a valid but unspecified state
    return 0;
}