#include <iostream>
#include <string>
using namespace std;
int main(){
  //declare a string variable
  string myName,description;
  //prompt user for their full name
  cout<<"Enter your name: ";
  getline(cin,myName);
  //prompt user for their description
  cout<<"please describe yourself: "<<endl;
  getline(cin,description);
  cout<<"your name is "<<myName<<endl;
  cout<<"You said the following about yourself:"<<description<<endl;
  }