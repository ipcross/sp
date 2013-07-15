#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int n;
vector<long long> mas;
void input()
{
    cin>>n;
    mas.resize(n);
    for (int i=0;i<n;i++)
        cin>>mas[i];
}
void solve()
{
    sort(mas.begin(),mas.end());
    if (mas[0] != 1)
        cout<<1;
    else
    {
        long long maxDestValue = 1;
        for (int i=1;i<mas.size();i++)
        {
            if (mas[i] <= maxDestValue + 1)
                maxDestValue += mas[i];
            else
                break;
        }
        cout<<maxDestValue+1;
    }
   
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   
    input();
    solve();
    return 0;
} 
