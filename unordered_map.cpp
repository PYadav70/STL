#include<bits/stdc++.h>
using namespace std;

 void print(unordered_map<int,string> &mp){
        cout<<mp.size()<<endl;
        for(auto &pr :mp){
            cout << pr.first << " " << pr.second << endl;

        }
    }

int main(){
   unordered_map<int,string>mp;
    mp[1] = "abs";  //o(1)
    mp[8] = "rty";
    mp[4] = "qwe";

    
    for(auto &pair : mp){
        cout << pair.first << " " << pair.second << endl;
        mp.erase(4);
    }
    

}

