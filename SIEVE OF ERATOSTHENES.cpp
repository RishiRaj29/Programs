#include<bits/stdc++.h>
using namespace std;
//PROGRAM TO IMPLEMENT THE CONCEPT OF SIEVE OF ERATOSTHENES
int main()
{
	#ifndef ONLINE_JUDGE
	//for getting input from input1.txt
	freopen("input1.txt","r",stdin);
	//for writing output to output1.txt
	freopen("output1.txt","w",stdout);
	#endif


	int n,i,j;
	cin>>n;
	//we will use hashing to implement this concept
	int h[n+1]={0};//here we initialize all the elements present in the array to 0
    for(i=2;i<=n;i++)
    {
    	j=i*i;
    	while(j<=n)
    	{
    		h[j]++;//we mark this element because it is a multiple of i
    		j+=i;
    	}
    }
    cout<<"The Prime Numbers in the Given Range are-\n";
    for(i=2;i<=n;i++)
    {
    	if(h[i]==0)
    		cout<<i<<" ";//Now we print only those numbers which are still unmarked
    }
   	return 0;
}
/*
OUTPUT- 200
The Prime Numbers in the Given Range are-
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
*/
