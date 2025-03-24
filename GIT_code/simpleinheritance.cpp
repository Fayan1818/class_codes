#include<iostream>
using namespace std;
 
class parent
{
    int a;
    public:
    void getdataparent()
    {
        a=20;
        cout<<a<<endl;
    }
};

class child:public parent            // inheritade  the parent class with class of child
{
   int b;
   public:
   void getdatachild()
   {
    b=10;
    cout<<b<<endl;
   }

};

int main(){
    child c;
    c.getdatachild();
    c.getdataparent();

}