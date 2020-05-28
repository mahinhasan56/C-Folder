#include <iostream>
#include <algorithm>
using namespace std;
void show(int a[])
{
    for(int i=0; i< 10; i++)
    {
        cout << 'it' << a[i];

    }
}
int main ()
{
    int a [10]= {1,5,8,9,6,7,3,4,2,0};
    cout <<"the away before sorting is ";
    show(a);
    sort (a,a+10);
    cout<< "The array after sorting is";
    return 0;

    // after sorting is 0,1,2,3,4,5,6,7,8,9
}


