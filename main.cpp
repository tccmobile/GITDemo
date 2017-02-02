#include <iostream>

//
// Created by SE420701 on 2/2/17.
//

#include <iostream>
#include <string>
using namespace std;

int main(){

    string abreviation;
    cout<<"Input an abbreviation:"<<endl;
    cin>>abreviation;

    if (abreviation =="LOL") {
        cout<<"laughing out loud"<<endl;
    } else  if (abreviation == "IDK"){
        cout<<"I don't know"<<endl;
    } else  if (abreviation == "BFF"){
        cout<<"best friends forever"<<endl;
    } else if (abreviation == "IMHO"){
        cout<<"in my humble opinion"<<endl;
    } else if (abreviation == "TMI") {
        cout<<"too much information"<<endl;
    }else if (abreviation == "YOLO") {
        cout<<"you only live once"<<endl;
    }
    else {
        cout<<"Unknown"<<endl;
    }

    return 0;
}
