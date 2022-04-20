#include <iostream>
using namespace std;

int main() {
    string sentences;

    getline(cin,sentences); 
    cout << sentences[0];
    for(int i=0; i<sentences.length(); i++){
        if(sentences[i] == ' '){
           cout << sentences[i+1];
        }
    }

    return 0;
}
