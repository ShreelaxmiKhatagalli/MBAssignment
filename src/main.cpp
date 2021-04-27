#include <iostream>
#include <string>
#include <algorithm>
#include "../inc/intentRecognition.hpp"

using namespace std;

int main()
{
    cout << "Hello!" << endl;

    string question = "";

    while(1)
    {
        cout << "what can I help you with today?" << endl;
        
        getline(cin, question);

        transform(question.begin(), question.end(), question.begin(), ::tolower);
       
        string intent = intentrecognition (question);

        cout << "Intent is : " << intent << endl;

        intent.clear();
        
        question.clear();

    }
    
    return 0;
}