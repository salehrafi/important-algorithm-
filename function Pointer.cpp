#include <bits/stdc++.h>
using namespace std;

void fun(int* &p)
{
    int z = 200;
    p = &z;
    cout << *p << " Inside fun function" << endl;
}
int main(){
    int y = 10;
    int *p = &y;

    fun(p);
    cout << *p << " In main function: \n";

    return 0;
}