#include <iostream>
using namespace std;
int main()
{
   int p=50,q=60,temp;
   cout<<"before swap";
   cout<<"p="<<p<<"q="<<q;
   p=p+q;
   q=p-q;
   p=p+q;
    cout<<"afterswap";
   cout<<"p="<<p<<"q="<<q;
   return 0;
}
   
