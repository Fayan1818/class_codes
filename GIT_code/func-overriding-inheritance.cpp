//functiion overriding inheritance

#include<iostream>
using namespace std;

class parent 
{
    int a;
    public:
    void getdata(int x){
        a=x;
        cout<<a<<endl;

    }
};


class child : public parent
{
    int b;
    public:
    void getdata(int y)
    {
        b=y;
        cout<<b<<endl;
    }
};

int main(){
    child c;
    c.getdata(10);
    c.parent::getdata(20);
}
