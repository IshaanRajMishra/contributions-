#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40};
    cout<<*arr<<endl;
    cout<<" "<<endl;
    for(int i=0; i<4; i++){
        cout<<*(arr+i)<<endl;
    }
    return 0;
}