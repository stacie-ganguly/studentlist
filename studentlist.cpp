#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
//Diya Ganguly 10-16-2026
//This program allows the user to add and remove studnEts fom a struct. Each student will have their name, student id, and GPA

//define the struct UP HERE
struct StudentInfo {
  char firstname[50];
  char lastname[50];
  int studentid;
  float gpa;
};


//function prototypes
void readIn(vector<StudentInfo>& entry);
void printOut(vector<StudentInfo>& entry);
void removeStudent();


int main() {
  
  vector<StudentInfo> entry; 
  char user_input[50];
  bool running = true;
  
  while (running == true) {
    cout << "Would you like to ADD, PRINT, REMOVE, or QUIT: ";
    cin >> user_input;

    if(strcmp(user_input, "ADD") == 0) {
      cout << "Adding..." << endl;
      readIn(entry);
    } else if(strcmp(user_input, "REMOVE") == 0) {
      cout << "Removing..." << endl;
    } else if(strcmp(user_input, "PRINT") == 0) {
      cout << "Printing..." << endl;
      printOut(entry);
    } else if(strcmp(user_input, "QUIT") == 0) {
      running = false;
    }
    
  }

  return 0;
}

//functions

void readIn(vector<StudentInfo>& entry) {
  StudentInfo tempStudent;
  
  cin.ignore();

  //add first name
  cout << "Enter the first name of the student: ";
  cin.getline(tempStudent.firstname, 50);
  cout << "You entered: " << tempStudent.firstname << endl;

  //add lastname
  cout << "Enter the last name of the student: ";
  cin.getline(tempStudent.lastname, 50);
  cout << "You entered: " << tempStudent.lastname << endl;

  //enter student id
  cout << "Enter their student id: ";
  cin >> tempStudent.studentid;
  cout << "You entered: " << tempStudent.studentid << endl;

  //enter their gpa
  cout << "Enter their gpa: ";
  cin >> tempStudent.gpa;
  cout << "You entered: " << tempStudent.gpa << endl;
  entry.push_back(tempStudent);
  
}

//mr galbraith helped me with the iterators
void printOut(vector<StudentInfo>& entry) {
  for(vector<StudentInfo>:: iterator it = entry.begin(); it != entry.end(); ++it) {
    cout << "Name: " << it->firstname << " " << it->lastname << endl;
    cout << "ID: " << it->studentid << endl;
    cout << "GPA: " << it->gpa << endl;
  }
}

void removeStudent(vector<StudentInfo>& entry) {
  

}
	       
