#include <iostream>
#include <string>
using namespace std;
int main(){
  //Output on the screen
    string stars = "***********************";
    string Name = "Abdur Rehman";
    string Major = "BS-AI 03";
    string CMSid = "CMS ID: 623486";
    string info[] =  {stars,Name,stars,Major,CMSid,stars}; 
    //im using a fixed size array insteD of a vector to
    // avoid adding another import/include statement

    // im using an array based approach here to make the code look more "neat"
    //we use a for loop to iterate then cout the ith elment of the array with an endl after each
    // element to push output to new line
    // and we avoid having to use multimple endl or new line characters too (\n)
    for (int i = 0; i < 6; i++) {
        cout << info[i] << endl;
    }

    return 0;
}
