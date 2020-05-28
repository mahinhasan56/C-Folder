#include <iostream>
#include <vector>
int main()
{
    vector <int> v(10);
    vector <int> :: iterator i;
    i=v.begin();
    advance (i,5);
    advance (i,-1);
}
