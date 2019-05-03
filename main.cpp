#include <iostream>
#include<bits/stdc++.h>
#include"huf.h"
using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
   Huffmantree a;
   char arr[6];
   for(int i=0;i<6;i++){
    cin>>arr[i];
   }
    int freq[6];
    for(int i=0;i<6;i++){
    cin>>freq[i];
   }

    int size = sizeof(arr) / sizeof(arr[0]);
     a.HuffmanCodes(arr,freq,size);
    return 0;
}
