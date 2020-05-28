#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
   vector<int>v1,v2;
   v1.Push(2);
   v1.Push(4);
   v1.Push(6);
   v1.Push(8);
   copy (v1.begin(),v1.end(),v2.begin());
}

