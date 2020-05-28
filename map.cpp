#include <iostream>
using namespace std;
int main()
{
    map<int,int > m{{1,2},{2,3},{3,4}};
    map <string,int> map1;
    map1["abc"]=100;
    map1["b"]=200;
    map1["c"]=300;
    map1["def"]=400;
    map <char,int> map2(map1.begin(),map1.end());
    map1.begin()
}
