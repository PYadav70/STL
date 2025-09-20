#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>&v){
    cout << "size:" << v.size() << endl;
    for(int i=0 ; i<v.size(); i++){
      //v.size() ->O(1)
    cout<< v[i].first << " " << v[i].second <<endl;
    }
    // v.push_back(8);
    cout << endl;
   
}

int main() {
    // vecotr in stl for integer
    // vector<int> v;
    // v.push_back(7);
    // v.push_back(6);

    // vector<int> &v2 = v; //O(n)
    // v2.push_back(5);

    // int n;
    // cin >> n;
    // for(int i=0; i<n ; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // printVec(v);
    // printVec(v);
    // printVec(v2);

    // // vector of stl for string
    // vector<string>v;

    // int n;
    // cin>> n;

    // for(int i=0; i<n;i++){
    //     string s;
    //     cin >> s;
    //     v.push_back(s);

    // }
    // printVec(v);


    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    printVec(v);


    

};