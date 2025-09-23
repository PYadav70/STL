#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string>mp;

    mp[1] = "abs";  //o(log(n))
    mp[8] = "rty";
    mp[4] = "qwe";
    mp.insert({4, "afg"});

    // map<int,string> :: iterator it;
    // for(it = mp.begin(); it!= mp.end(); it++){
       
    //     cout<< it->first << " " << it->second << endl; 

    for(auto &pair : mp){
        cout << pair.first << " " << pair.second << endl;
        mp.erase(4);
    }
    

    //given N string print unique strings in lexographical order
    //with thier frequency



    map<string, int> mp;
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        string s;
        cin>> s;

        mp[s]++;
    }
    for(auto pair:mp){
        cout<< pair.first << " " <<pair.second << endl;
    }
    


}