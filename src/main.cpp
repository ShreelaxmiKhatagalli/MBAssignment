#include <iostream>
#include <string>
#include <algorithm>
#include "../inc/intentRecognition.h"

using namespace std;

int main()
{
    cout << "Hello!" << endl;
    
    string question = "";

    while(1)
    {
        cout << "what can I help you with today?" << endl;
        
        //read user text
        getline(cin, question);
        
        //converting the text to lower case to avoide failed intent recognition due to case sensitivity
        transform(question.begin(), question.end(), question.begin(), ::tolower);
       
        string intent = intentrecognition (question);

        cout << "Intent is : " << intent << endl;

    }
    
    return 0;
}
