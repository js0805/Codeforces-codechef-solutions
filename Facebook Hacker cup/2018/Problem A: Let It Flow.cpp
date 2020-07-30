//https://www.facebook.com/codingcompetitions/hacker-cup/2018/round-1/problems/A
#include <bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
using ll = unsigned long long;

int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >>t;
  for(int s=1;s<=t;s++)
  {
    int n;
    cin>>n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(n%2)
    {
      
      cout<<"Case #"<<s<<": "<<"0\n";
      continue;
    }
    else if(s1[0]=='#'||s2[0]=='#'||s2[n-1]=='#'||s3[n-1]=='#')
    {
      
      cout<<"Case #"<<s<<": "<<"0\n";
      continue;
    }
    else
    {
      ll ans=1;
      //cout<<ans<<" " ;
      for(int i=1;i<n-2;i++)
      {
        if(s2[i]=='#'||s2[i+1]=='#'){
          //cout<<"yes3";
          ans=0;
          break;
          //cout<<ans<<" " ;
        }
        
        else if((s1[i]=='#'||s1[i+1]=='#')&&(s3[i]=='#'||s3[i+1]=='#'))
        {
          //cout<<"yes4";
          ans=0;
          break;
          
        }
        
        else if((s1[i]=='#'||s1[i+1]=='#')&&(s3[i]!='#'&&s3[i+1]!='#'))
        {
          i++;
          
        }
        
        else if((s1[i]!='#' && s1[i+1]!='#')&&(s3[i]=='#'||s3[i+1]=='#'))
        {
          i++;
        //cout<<ans<<" " ;
        }
        
        else
        {
          ans*=2;
          i++;

          //cout<<ans<<" " ;
        }
        ans=ans%1000000007;
      }
        
      cout<<"Case #"<<s<<": "<<ans<<endl;
    }
  }
}
