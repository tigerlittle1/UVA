#include<iostream>
using namespace std;
int main()
{
    int n ;
  	int cas = 1;
	while(1)
    {
        cin >> n;
        if(n < 0)break;
        int a = 1;
        int ans = 0;
        while(n > a)
        {
            a=a*2;
            ans++;
        }
        cout <<"Case "<< cas<<": "<<ans << endl;
        cas++;
    }
    return 0;
}