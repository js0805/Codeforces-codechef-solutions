#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=0;
        int three=0, five=0, seven=0;
        int rem=n%3;
        if(rem==1){
            if(n>=7){
                three = (n/3)-2;
                seven = 1;
            }
            else{
                flag=1;
            }
        }
        else if(rem==2){
            if(n>=5){
                three = (n/3)-1;
                five = 1;
            }
            else{
                flag=1;
            }
        }
        else{
            three = n/3;
        }
        if(flag==0){
            cout<<three<<" "<<five<<" "<<seven<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
