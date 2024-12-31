#include <bits/stdc++.h>
using namespace std;
class A {
    public:
    void eat(){
        cout << "Someone has eaten biryani last night and threw the bones in front of my door..\n";
    }
};

class B: public A{
    public:
    void speakLoudly(){
        cout << "Talking to children in a loud voice is not a good sign\n";
    }

    void displayInfo(){
        eat();
        speakLoudly();
    }
};

int main(){
    B bb;
    bb.displayInfo();
    return 0;
}