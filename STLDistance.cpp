
#include <iostream>
#include <vector>
int main()
{
    vector <int> v(10);
    vector <int> :: iterator i,j;
    i=v.begin();
    j=v.end();
    cout << distance (i,j) <<endl;

}
