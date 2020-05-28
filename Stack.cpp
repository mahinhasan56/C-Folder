
#include <iostream>
#include <stack>
//PuSH,POP,SIZE,TOP,SWAP
using namespace std;
int main()
{
    stack <int>s;
    s.push (2);
    s.push (3);
    s.push (4);
    cout << s.top();
    cout << s.size();

}
