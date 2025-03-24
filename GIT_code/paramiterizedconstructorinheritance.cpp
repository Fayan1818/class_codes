#include<iostream>
using namespace std;
 
class parent
{
    int a;
    public:
    parent(int l)
    {
        a=l;
        cout<<a<<endl;
    }
};

class child:public parent            // inheritade  the parent class with class of child
{
   int b;
   public:
   child(int x,int y):parent(x)
   {
    b=y;
    cout<<b<<endl;
   }

};

int main(){
    child c(10,20);
    
}