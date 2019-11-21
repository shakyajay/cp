#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

void leftRotate(int a[],int d,int n);

void leftRotateByOne(int arr[],int n){
    int value= arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=value;

}

void printArray(int a[],int n){

    for(int i=0;i<n;i++)
      cout<< a[i]<<" ";
    cout<< endl;
}
int main()
{
    // typedef pair<int,int> int_pair;
    int a[]={1,2,3,4,5,6,7};
    int len= sizeof(a)/sizeof(a[0]);
    printArray(a,len);
    leftRotate(a,3,len);
   printArray(a,len);
    // for(int i=0;i<a.)

    return 0;
}


void leftRotate(int a[],int d,int n){
    int gcd= __algo_gcd(n,d);
    // cout<< gcd<< endl;
    for(int i=0;i<gcd;i++)
    {
        int tmp=a[i];
        int j=i;
        while (1)
        {
            int k=j+d;
            if(k>=n)k=k-n;
            if(k==i)break;
            a[j]=a[k];
            j=k;
        }
        a[j]=tmp;
        
    }
}

