#include<iostream>
using namespace std;

//has lowercase and uppercase letters.
bool isAnagram(string s, string t){
    if( s.length() != t.length() ){
        return false;
    }

    int freq[52] = {0};

    int i = 0;
    while( i < s.length() ){
        char ch = s[i];
        if( isupper(ch) ){
            freq[ ch - 'A' ]++;
        }else{
            freq[ ch - 'a' + 26]++; 
        }

        ch = t[i];
        if( isupper(ch)){
            freq[ ch - 'A' ]--;
        }else{
            freq[ ch - 'a' + 26 ]--;
        }
        i++;
    }

    for( int i = 0; i < 52 ; i++ ){
        if( freq[i] != 0 ){
            return false;
        }
    }

    return true;
}

int main(){

    string s = "Raj is a race  laptop";
    string t = "Raj has a acer laptop";

    bool check = isAnagram( s , t );

    cout<<" Are they anagram ? "<<check;

    return 0;
}