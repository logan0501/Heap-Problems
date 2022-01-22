#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/height-of-heap5025/1/?category[]=Heap&category[]=Heap&difficulty[]=-1&page=1&query=category[]Heapdifficulty[]-1page1category[]Heap

// Constant time
int heapHeight(int N, int arr[]){
        // code here
        return (log2(N));
}

// logarithimic time
int height(int N,int arr[]){
    int count=0;
    while(N){
        N/=2;
        count++;
    }
    return count-1;
}
int main(){
    
    return 0;
}