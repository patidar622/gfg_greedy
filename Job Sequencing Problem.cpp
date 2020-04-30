#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v1;
	    int m11=0;
	    map<pair<int,int>,int>m1;
	    for(int i=0;i<n;i++)
	    {
	        int i1,i2,i3;
	        cin>>i1>>i2>>i3;
	        m11=max(m11,i2);
	        v1.push_back({i3,i2});
	    }
	    for(int i=0;i<m11;i++)
	    {
	        m1[{i,i+1}]=0;
	    }
	    int max_profit=0,count=0;
	    sort(v1.begin(),v1.end());
	    for(int i=v1.size()-1;i>=0;i--)
	    {
	        if(m1[{v1[i].second-1,v1[i].second}]==0)
	        {
	            m1[{v1[i].second-1,v1[i].second}]=1;
	            count++;
	            max_profit+=v1[i].first;
	        }
	        else
	        {
	            int i22=v1[i].second;
	         i22--;
	            while(i22>=1)
	            {
	                 if(m1[{i22-1,i22}]==0)
	        {
	            m1[{i22-1,i22}]=1;
	            count++;
	            max_profit+=v1[i].first;
	            break;
	        }
	        i22--;
	            }
	        }
	    }
	    cout<<count<<" "<<max_profit<<endl;
	}
	return 0;
}
