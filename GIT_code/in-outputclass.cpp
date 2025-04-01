#include <iostream>
using namespace std;

class rectangle
{
private:
    int len, br;

public:
    void getdata()
    {
        cout << endl
          << "Enter the length and breadth of the rectangle : " << endl;
        cin >> len >> br;
    }

    void passdata(int l, int b)
    {
        len = l;
        br = b;

    }

    void displaydata()
    {
        cout << endl
             << "The length of the rectangle is : " << endl
             << len;
        cout << endl
             << "The breadth of the rectangle is : " << endl
             << br;
    }

    void area_peri()
    {
        int a, p;
        a = len * br;
        p = 2 * (len + br);

        cout << endl
             << "The Area of the rectangle is : " << a << endl;
        cout << endl
             << "The Perimeter of the rectangle is : " << p << endl;
    }
};

int main()
{
    rectangle r1, r2;
    r1.getdata();
    r1.displaydata();
    r1.area_peri();

    r2.passdata(10, 20);
    r2.displaydata();
    r2.area_peri();

    return 0;
}
