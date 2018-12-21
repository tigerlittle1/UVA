#include<iostream>

using namespace std;

bool tree[26][26];
bool point[26];
bool use[26];

void run(int);
int tre;
int main()
{	
	int n;
	cin >> n;
	for(int tr=0; tr<n ; tr++)
	{
		for(int i=0;i<26;i++)
			for(int j=0;j<26;j++)
			{
				tree[i][j]=false;
				use[i]=false;
				point[i]=false;
			}
		int acorn = 0 ;
		tre=0;
		string x;
		while(1)
		{
			cin >> x;
			if(x[0] == '*') break;
			tree[x[1]-'A'][x[3]-'A'] = true;
			tree[x[3]-'A'][x[1]-'A'] = true;
			use[x[3]-'A'] = true;
			use[x[1]-'A'] = true;
		}
		
		cin >> x;
		for(int i=0;i<x.length();i+=2) point[x[i]-'A'] = true;  
		
		for(int i=0;i<26;i++) 
		{
			if(use[i] == false && point[i] == true) acorn++;
		}
		 
		for(int i=0;i < 26;i++)
		{
			for(int j=0;j<26;j++)
			{
				if(tree[i][j] == true)
				{
				    tre++;
					run(i);
				} 
			}	
		}
		cout <<"There are "<<tre <<" tree(s) and "<<acorn<<" acorn(s)."<<endl;
	}
	return 0;
}

void run(int n)
{
	for(int i=0;i < 26;i++)
	{
		if(tree[i][n] == true)
		{
		    
				tree[i][n] = false;
				tree[n][i] = false;
				run(i);
		} 	
	}
}
