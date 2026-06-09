#include<iostream>
using namespace std;
#include <string>
#include<vector>
bool checkinclusion(string s1, string s2){
    int n=s1.size();
    int m=s2.size();
    vector<int>freq1(26,0),freq2(26,0);
    for(char c:s1){
        freq1[c-'a']++;

    }
    int j=0;
    for(int i=0;i<m;i++)
    {
        freq2[s2[i]-'a']++;
        if(i-j+1>n){
            freq2[s2[j]-'a']--;
            j++;
        } if(freq1== freq2)
          return true;
    } return false;
}
int main(){
    string s="ab";
    string t="bdgsba";
    if(checkinclusion(s,t)){
        cout<<"true";
    }
    else 
    cout<< "false";
    return 0;
}
