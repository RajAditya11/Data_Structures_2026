#include<bits/stdc++.h>
using namespace std;

bool areSentenceSimilar( vector<string> sentence1 , vector<string> sentence2 , vector<vector<string>> similarPairs ){

    if( sentence1.size() != sentence2.size() ){
        return false;
    }

    int i = 0;
    while( i < sentence1.size() ){
        bool checker = false;
        if( sentence1[i] != sentence2[i] ){
            
            for( int i = 0 ; i < similarPairs.size() ; i++ ){

                if( similarPairs[i][0] == sentence1[i] || similarPairs[i][1] == sentence1[i] ){
                    if( similarPairs[i][0] == sentence2[i] || similarPairs[i][1] == sentence2[i] ){
                        checker = true;
                        break;
                    }
                }
            }
            if( checker == false ){
                return false;
            }
        }
        i++;
    }

    return true;
}

int main(){
    vector<string> sentence1 = { "great" , "acting" , "skills"};
    vector<string> sentence2 = { "fine" , "drama" , "talent" };

    vector<vector<string>> similarPairs = {
        { "great" , "fine" } , 
        { "acting" , "drama" } ,
        { "skills" , "talent" }
    };

    bool isSimilar = areSentenceSimilar( sentence1 , sentence2 , similarPairs );

    cout<<isSimilar;
    

    return 0;
}