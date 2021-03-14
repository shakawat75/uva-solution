#include <iostream>
#include<vector>

using namespace std;
vector<int>v;
int f(int number){
    v.clear();
     while(number)
    {
        v.push_back(number%10);
        number = number/10;
    }
    for(int i=v.size()-1; i>=0;i--)
        number+=v[i];
        return number;

}

void g(int number){
   int d = f(number);
   if(d<10)
   cout<<d<<endl;
   else
    g(d);
}

int main(){


    int number;
    while(cin>>number){
    if(number==0)
    return 0;
    else
    g(number);}



}
