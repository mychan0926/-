#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]+='A'-'a';
        }
        else
        {
            a[i]+='a'-'A';
        
        }
    }
    cout<<a;



}
