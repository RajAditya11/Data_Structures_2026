#include<iostream>
using namespace std;

// ex : s = "node" , t = "neetcode"; true;
bool isSubsequence(string s, string t) {
    int i = 0 , j = 0;

    while( i < s.length() && j < t.length() ){
        if( s[i] == t[j] ){
            i++;
            j++;
        }else{
            j++;
        }
    }

    // after the loop the i become 4 as last check value to end it.
    return i == s.length();
}

int main(){
    string s = "node";
    string t = "neetcode";

    bool isSub = isSubsequence( s , t );

    cout<<"They  are Subsequene : "<<isSub;

    return 0;
}