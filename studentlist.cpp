#include <iostream>
#include <cstring>
using namespace std;
//Diya Ganguly 10-16-2026
//This program allows the user to add and remove studnEts fom a struct. Each student will have their name, student id, and GPA

//function prototypes
void readIn();
void printOut();
void remove();

struct StudentInfo {
  char firstname[10];
  char lastname[10];
  int studentid;
  float gpa;
};

int main() {
  char user_input[50];

  cout << "Would you like to ADD, PRINT, or REMOVE: ";
  cin >> user_input;

  if(strcmp(user_input, "ADD") == 0) {
    cout << "Adding..." << endl;
  } else if(strcmp(user_input, "REMOVE") == 0) {
    cout << "Removing..." << endl;
  } else if(strcmp(user_input, "PRINT") == 0) {
    cout << "Printing..." << endl;
  }

  return 0;
}

//functions

void readIn() {
  
}

void printOut() {

}

void remove() {

}
	       
