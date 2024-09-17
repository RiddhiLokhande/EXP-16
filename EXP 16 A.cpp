// NAME - RIDDHI LOKHANDE
// PRN- 23070123107
// EXPERIMENT - 16(A) 

#include<iostream> 
using namespace std;

int main() {
    float n1, n2, ans;
    cout<<"Enter values of numbers 1& 2";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;

        }
        else{
            ans=n1/n2;
            cout<<"Ans ="<<ans<<endl;
        }
    }
catch(float num){
    cout<<"\n error: divison by "<<num<<endl;
}

}