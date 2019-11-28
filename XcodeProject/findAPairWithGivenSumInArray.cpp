//
//  findAPairWithGivenSumInArray.cpp
//  XcodeProject
//
//  Created by Ajay Shakya on 11/28/19.
//  Copyright © 2019 Ajay Shakya. All rights reserved.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void printPair(int a[], int n,int sum){
    
    
    unordered_map<int,int> m;
    int cnt=0;
    for(int i=0;i<n;i++) m[a[i]]++;
    for(int i=0;i<n;i++)
    {
        cnt=cnt+m[sum-a[i]];
        if(sum-a[i]==a[i])cnt--;
    }
    
    cout<< "total pairs: "<<cnt/2<<'\n';
}

int main(){
    
    int A[] = {10, 12, 10, 15, -1, 7, 6,5, 4, 2, 1, 1, 1};
    int sum = 11;
    int size =sizeof(A)/sizeof(A[0]);
    
    printPair(A,size,sum);
    
    cout<< "mehtod ended"<<'\n';
    
    return 0;
}
