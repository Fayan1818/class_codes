#include<iostream>
using namespace std;
 
class parent
{
    int a;
    public:
    parent()
    {
        a=20;
        cout<<a<<endl;
    }
};

class child:public parent            // inheritade  the parent class with class of child
{
   int b;
   public:
   child()
   {
    b=10;
    cout<<b<<endl;
   }

};

int main(){
    child c;
    

}