#include<iostream>
using namespace std;

void reverseString( string& word){
    int left = 0 , right = word.length()-1;

    while( left < right ){
        swap( word[left++] , word[right--]);
    }
}

int main(){
    string word = "erutaerc a si ereht";

    cout<<"The Original String :" + word + "\n";

    reverseString( word );

    cout<<"The Reverse String : " + word;
}