#include<bits/stdc++.h>
using namespace std;

unordered_map<char , int > getFrequencyMap(const string& word ){
    unordered_map<char,int> freqMap;

    for( char ch : word ){
        freqMap[ch]++;
    }

    return freqMap;
}

// const to accept the temporay object and clearly communicate that read only.
void printFrequencyMap(const unordered_map<char,int> &freqMap ){
    for( auto &freqPair : freqMap ){
        cout
        <<freqPair.first
        <<" : "
        <<freqPair.second
        <<endl;
    }
} 


int main(){

    string word;

    cout<<" What is the word?\n Input : ";
    getline( cin , word  );

    printFrequencyMap ( getFrequencyMap(word) );

    return 0;
}