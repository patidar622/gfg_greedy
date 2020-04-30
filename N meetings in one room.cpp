#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>start1,end1;
	    map<int,int>m1;
	    map<pair<int,int>,int>m2;
	    vector<pair<int,int> >v1;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        start1.push_back(x);
	    }
	     for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        end1.push_back(x);
	    }
	    for(int i=0;i<n;i++)
	    {
	        v1.push_back({end1[i],start1[i]});
	        m2[{start1[i],end1[i]}]=i+1;
	    }
	    sort(v1.begin(),v1.end());
	    int start11=v1[0].second,end11=v1[0].first,count=1;
	    vector<int>ans;
	    ans.push_back(m2[{start11,end11}]);
	    for(int i=1;i<n;i++)
	    {
	        if(v1[i].second>=end11)
	        {
	           ans.push_back(m2[{v1[i].second,v1[i].first}]);
	            end11=v1[i].first;
	        }
	    }
	    for(auto i:ans)
	    cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
