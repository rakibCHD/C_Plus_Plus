#include <iostream>
using namespace std;

int main() {
    int x=0,y=0,z=0,rx=0,ry=0,rz=0,length;
    cin>>length;
    for(int i=1;i<=length;i++)
    {
        cin>>x>>y>>z;
        rx+=x;
        ry+=y;
        rz+=z;
    }

    if(rx+ry+rz == 0 && rx==0 && ry==0 && rz==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
