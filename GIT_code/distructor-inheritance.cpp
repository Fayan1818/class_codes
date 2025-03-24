#include<iostream>
using namespace std;

class parent 
{
    int a;
    public:
    parent(){
        cout<<"parent destructor"<<endl;

    }
};

class child:public parent
{
    int b;
    public:
    child(){
        cout<<"child destructor";
    }

};

int main(){
    child f;

}

