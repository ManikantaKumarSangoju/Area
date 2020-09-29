#include <iostream>

using namespace std;
float area(int x)
{
    cout <<x*x*3.14;

}
float area(int x,int y)
{
    cout << x*y;

}
float area(int x,int y,int a)
{

    cout << x*y*0.5;

}
int main()
{
    int shape;
    cout <<"Select the shape\n";
    cout <<"1-Circle\t 2-Rectangle\t 3-triangle\n";
    cin >>shape;
    if(shape == 1)
    {
        int radius;
        cout <<"enter radius";
        cin >> radius;
        area(radius);
    }
    else if(shape == 2)
    {
        int length,breadth;
        cout <<"enter length and breadth";
        cin >>length;
        cin >> breadth;
        area(length,breadth);

    }
    else
    {
        int length,breadth;
        cout <<"enter length and breadth";
        cin >>length;
        cin >> breadth;
        area(length,breadth,0.5);
    }

    return 0;
}
