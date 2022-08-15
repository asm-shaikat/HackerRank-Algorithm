#include<iostream>
using namespace std;
void Grading(int n,int ary[]){
    int i,f1;
    for(i=0; i<n;i++){
        cin>>ary[i];
    }
    for(i=0; i<n;i++){
        if(ary[i]>=38){
            f1=ary[i]%5;
            if(f1==3){
                ary[i]=ary[i]+2;
                cout<<ary[i]<<endl;
            }
            else if(f1==4){
                ary[i]=ary[i]+1;
                cout<<ary[i]<<endl;
            }
            else{
                cout<<ary[i]<<endl;
            }

    }
    else
    cout<<ary[i]<<endl;

}
}
int main(){
    int n;
    cin>>n;
    int ary[n];
    Grading(n,ary);
}