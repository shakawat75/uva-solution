#include<iostream>
using namespace std;

int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int T,f,a,b,c,sum;
    cin>>T;
    while(T--)
        {
            cin>>f;
            sum = 0;
            while(f--)
            {
                cin>>a>>b>>c;
                sum+=a*c;
            }
            cout<<sum<<endl;
            }
        }


