#include <bits/stdc++.h>
using namespace std;
int main (){

        int a[5];
        for(int i=0; i<5; i++){
            cin>>a[i];
        }

        for (int i=0; i<4; i++){
            for(int j=0; j<4-i;j++){
                if(a[j]<a[j+1]){
                   int tmp = a[j];
                   a[j]=a[j+1];
                   a[j+1]= tmp;
                    
                }
            }
        }

        for(int i =0; i<5; i++)cout<<a[i]<<" ";

    return 0;
}