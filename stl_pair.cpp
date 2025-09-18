#include<bits/stdc++.h>
using namespace std;

int main(){
    //pairs on STL
    pair<int, string>p;
    // p = make_pair(3,"abc");
    p = {3,"abc"};
    pair<int, string> &p1 = p;
    p1.first = 5;
    cout << p.first << " " << p.second << endl;
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    pair<int,int>p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);

    for(int i=0; i<3; i++){
        cout<< p_array[i].first << " " << p_array[i].second <<endl;
    }

}