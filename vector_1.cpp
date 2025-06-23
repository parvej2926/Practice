#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true;

    return false;
}

int main(){
    vector<int>v={3,5,1,8,2};
    sort(v.begin(),v.end()); // sort(v.begin(), v.end())

    cout<<"sorted vector  ascending order:";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"sorted vector descending order:";

    sort(v.begin(),v.end(),greater<int>());
     for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    //in case of pair:
    cout<<"Pair sorted according to first element:\n";
    vector<pair<int,int>>vp={{3,3},{2,1},{7,1},{5,2}};
    sort(vp.begin(),vp.end());
    for(auto it:vp){
        cout<<it.first<<" "<<it.second<<endl;
    }
        cout<<"Pair sorted according to second element:\n";

        sort(vp.begin(),vp.end(),comparator);

        for(auto it:vp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //REVERSE
    cout<<"Reverse vector:\n";
    vector<int>vec={1,2,3,4};
    reverse(vec.begin(),vec.end());

    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;





}
