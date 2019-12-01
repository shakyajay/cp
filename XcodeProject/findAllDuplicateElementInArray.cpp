//
//  findAllDuplicateElementInArray.cpp
//  XcodeProject
//
//  Created by Ajay Shakya on 12/1/19.
//  Copyright © 2019 Ajay Shakya. All rights reserved.
//

#include <iostream>
#include <unordered_map>
using namespace std;

void printAllDuplicateArrayElement(int arr[],int n) {
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    
    for( auto i: mp)
    {
        int value=i.second;
        int key=i.first;
        if(value>1)
        {
            cout<< key<<" & "<<value<<endl;
        }
    }
           
}

int main(){
    
    int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11}; ;
    int n=sizeof(arr)/sizeof(arr[0]);
    printAllDuplicateArrayElement(arr,n);
    return 0;
}
