//code to show use of pair in stl
#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void explainpair()
{
    pair<int ,int >p={1,2};
    cout<<p.first<<endl<<p.second<<endl;
    pair<int,pair<int ,int>>k={1,{2,3}};
    cout<<k.first<<endl<<k.second.first<<endl<<k.second.second<<endl;
}
int main()
{
    explainpair();
    return 0;
}
