#include<bits/stdc++.h>
using namespace std;

void print(set<string>&s){
    for(auto it = s.begin(); it !=s.end(); it++){
        cout<< (*it) <<endl;
    }
}

int main(){
    // set store unique element
    set<string> s;
    s.insert("eryt"); //log(n)
    s.insert("rertt");
    s.insert("iiuuk");
    s.insert("eryt");
    auto it = s.find("eryt");
    if(it != s.end()){
        s.erase(it);
    }
    print(s); 
}