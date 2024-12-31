#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    /*function with 1 int parameter*/
    void func(int x){
        cout <<"Value of x is " << x << endl;
    }
    /*function with same name but 1 double parameter*/
    void func(double x){
        cout <<"Value of x is " << x << endl;
    }
    /*function with same name but 2 int parameter*/
    void func(int x,int y){
        cout <<"Value of x and y is " << x << " , " << y << endl;
    }
};

int main(){
    A aa;
    aa.func(7);
    aa.func(98.577);
    aa.func(4,5);
    return 0;
}
