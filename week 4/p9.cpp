#include <iostream>
using namespace std;
main()
{
    cout<<" enter the fist word";
    string word1;
    cin>>word1;
    cout<<" enter the second word";
    string word2; 
    cin>>word2;
    if( word1 == word2){
    cout<<" yes,the words are same";
    }
    else{
        cout<<" no,the words are different";
    }
}