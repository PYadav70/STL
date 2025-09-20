#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout << endl;

    // vector<int> :: iterator it;
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<(*it) << " ";
    }

    vector<pair<int,int>> v_p = {{1,2},{2,3}};
    for(auto &value : v_p){
        cout << value.first << " " << value.second << endl;
    }

    // for(int &value: v){
    //     value++;
    //     // cout << value  << " ";
    // }

    // for(int value: v){
    //     // value++;
    //     cout << value  << " ";
    // }


    // auto keyword

    auto a = 1;
    

    cout << endl;

}