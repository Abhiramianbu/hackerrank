#include<iostream>
#include<math.h>
using namespace std;

/*
Suppose you want to calculate all the square integers between 3 and 14. calculate the square roots of the end points..that will be around 1.73 and 3.74. Now the integers between 1.73 and 3.74 are 2 and 3 which is what we want. To get this we use the ceil function on 1.73 which becomes 2 and we use the floor function on 3.74 which becomes 3. Their difference is 1. We add 1 to the difference because we rounded off 1.73 to 2 and since 2 is an integer we need to consider it also. Hope this helps
*/
int main() {
    int T,A,B,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>A>>B;
        cout<<floor(sqrt(B))-ceil(sqrt(A))+1<<endl;
    }
    return 0;
}


