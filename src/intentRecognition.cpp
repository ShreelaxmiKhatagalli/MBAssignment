#include <iostream>
#include <sstream>
#include "../inc/intentRecognition.h"

using namespace std;

string intentrecognition (string InputStr){
    
    string intent;
  
    int weather = InputStr.find("weather");
    int today = InputStr.find("today");
    int todays = InputStr.find("today's");
    int paris = InputStr.find("paris");
    int london = InputStr.find("london");
    int tokyo = InputStr.find("tokyo");
    int what = InputStr.find("what");
    int how = InputStr.find("how");
    int tell = InputStr.find("tell");
    int give = InputStr.find("give");
    int say = InputStr.find("say");
    int state = InputStr.find("state");
    int interesting = InputStr.find("interesting");
    int fact = InputStr.find("fact");
    int nnot = InputStr.find("not");
 
  if ((what >= 0 || how >= 0 || give >= 0 || tell >= 0) && weather >= 0 )
    {
        
        intent = "Get weather";
        
        if (paris >= 0 || london >= 0 || tokyo >= 0)
        {
            intent = "Get weather city";
        }
        InputStr = "";
    }

   else if ((tell >= 0 || say >= 0 || give >= 0 || state >= 0) && interesting >= 0 && fact >= 0 && nnot < 0 )
    {
        intent = "Get Fact";
        InputStr = "";
    }

    else
    {
        intent = "Not recognized";
        InputStr = "";
    }

    return (intent);
}
