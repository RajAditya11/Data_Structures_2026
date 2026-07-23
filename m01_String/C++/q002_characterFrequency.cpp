#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<char , int> getCharacterFrequency( string& word){
    
    unordered_map<char,int> freqMap;
    
    int start = 0;
    int total = word.length();

    while( start < total ){
        char ch = word[start];
        freqMap[ ch ]++;

        start++;
    }

    return freqMap;
}

int main(){

    string word = "There is a Backend Engineer Raj Adiya with a salary of  18,00,000 ";

    unordered_map<char,int> freq = getCharacterFrequency( word );

    for( auto it : freq){
        cout<<it.first<<" ";
        cout<<it.second<<endl;
    }

    return 0;
}