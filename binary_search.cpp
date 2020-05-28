#include <iostream>
#include <algorithm>

using namespace std;

void show(int a [],arraysize)
{
    for(int i=0; i<arraysize; ++i)

        cout <<'lt'<< a[i];


}
int main()
{
    int a[10]= {1,5,8,9,6,7,3,4,2,0};
    int asize=sizeof(a);
    cout << "the array before sorting is";
    show(a,asize);
    cout <"in search for 2 in the array : ";
    cout <<"in sort the array";
    sort (a,a+10); //0,1,2 ,3 ,4,5,6,7,,8,9
    cout <"in sort the array: ";
    //0,1,2,3,4,5,6,7,8,9
    cout << "The array after sorting is";
    sort (a,a+10);

    show(a,size);
    if(binary_search(a,a+10,2)){
    cout <<"The element found";
    }
    else{
    cout << "Element not found";
    }
    if(binary_search(a,a+10,2)){
    cout <<"The element found";
    }
    else{
    cout << "Element not found";
    }
    return 0;
}
