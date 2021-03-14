#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class person{
    public:
    char name[13];
    int balance = 0;
    };

int main(){

    int nop;
    int c = 0;

    while(scanf("%d",&nop)==1){
           person p[10];
 for(int i=0;i<nop;i++)
        cin>>p[i].name;




     int n = 1;
     char nm[13];
     int givm;
     int ngivp;
     char nmgivp[13];

   while(n<=nop){

    cin>>nm;

    cin>>givm;

    cin>>ngivp;



    for(int i = 0 ;i<ngivp;i++){
        cin>>nmgivp;
    for(int j = 0;j<nop;j++){
        if(strcmp(p[j].name,nmgivp)==0)
            p[j].balance = p[j].balance + ceil(givm/ngivp);
    }
    }
    for(int k = 0;k<nop;k++){
        if(strcmp(p[k].name,nm)==0 && ngivp>0)
            p[k].balance = p[k].balance - ceil(givm/ngivp)*ngivp;

    }


       n++;


   }

   if(c)
    cout<<endl;
   for(int i = 0; i<nop;i++)
    cout<<p[i].name<<" "<<p[i].balance<<endl;
    c++;


    }
    return 0;

}
