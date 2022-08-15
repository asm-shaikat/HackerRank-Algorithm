#include<iostream>
using namespace std;
int main(){
    int num,i,hrec,hcount=0,wcount=0,wrec;
    cin>>num;
    int li[num];
    for(i=0 ; i<num ; i++){
        cin>>li[i];
    }
    hrec = li[0];
    wrec = li[0];
    for(i=0 ; i<num ; i++){
        if(hrec<li[i]){
            hrec = li[i];
            hcount++;
        }
        if(wrec>li[i]){
            wrec = li[i];
            wcount++;
        }
    }
    cout<<hcount<<" "<<wcount;
    
    // sample input
    // 9
    // 10 5 20 20 4 5 2 25 1
    // Output
    // 2 4
}