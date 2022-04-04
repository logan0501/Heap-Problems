#include<bits/stdc++.h>
using namespace std;
struct Comp{
    bool operator()(pair<int,int> a,pair<int,int> b){
        if(a.first!=b.first)return a.first > b.first;
        else{
            return a.second > b.second;
        }
    }
};

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,Comp> heap;  
    vector<int> res;
    for(int i=0;i<mat.size();i++){
        int no1=0;
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1)no1++;
        }
        heap.push({no1,i});
    }
    while(k--){
        res.push_back(heap.top().second);
        heap.pop();
    }
    return res;
}
int main(){
    vector<vector<int>> mat = {{1,1,0,0,0},
 {1,1,1,1,0},
 {1,0,0,0,0},
 {1,1,0,0,0},
 {1,1,1,1,1}};

    return 0;
}