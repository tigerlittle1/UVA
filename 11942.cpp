#include<iostream>

using namespace std;
int main()
{
    int n ;
    
    cin >> n;
    cout<<"Lumberjacks:"<<endl;
    int a[10];
    while(n--)
    {
        bool order=true;
        cin >> a[0];
        cin >> a[1];
        for(int i = 2;i<10;i++)
        {
            cin >> a[i];
            if(a[0] > a[1])
            {
                if(a[i] > a[i-1]) order=false;
            }
            else
            {
                if(a[i] < a[i-1]) order=false;
            }
        }
        
        if(order)cout<<"Ordered"<<endl;
        else cout<<"Unordered"<<endl;
    }
    return 0;
}
