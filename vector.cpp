#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vr;

    vr.push_back(10);
    vr.push_back(20);
    for(int i=0;i<vr.size();i++)
     cout<<vr[i]<<endl;


    return 0;
}
