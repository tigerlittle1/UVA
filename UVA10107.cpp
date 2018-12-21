#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

int main()
{
	 long long a[10100]={-100};
	int size=0;
	int n;
/*	fstream f;
	f.open("1.txt",ios::out);*/
	while( scanf( "%d", &n ) != EOF  )
	{
		size++;
		
		if(size == 1)a[0]=n;
		else if(n>=a[size-2]) a[size-1] = n;
		else
		{
			int temp;
			bool insert = false;
			if(n<a[0] ) insert = true;
			for(int i=0;i<size;i++)
			{
				if(insert)
				{
					temp = a[i];
					a[i] = n;
					n = temp;
				}
				else if(n>=a[i] && n<a[i+1])
				{
					insert = true;
				}
			}
		}
		
		long long ans;
		if(size%2==0)
		{
			ans = ( a[size/2] + a[(size/2 )-1] )/2;
		} 
		else
		{
			ans = a[size/2];
		}
		/*f << ans<<endl;*/
		cout<<ans<<endl;
	}
	return 0;
}
