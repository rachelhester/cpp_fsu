#include <iostream>
#include <string>

using namespace std;

int main() {
  //variable declaration
  int choice = -1;
  string names[100];
  int numsBooks[100];
  string booksBorrowed[100];
  string borrowedStrings[100];
  int currentIndex = 0;
  //do while loop so stays continuous
  do {
    
    int sorl = 0;

    cout << "Are you a student or librarian?" << endl;

    cout << "Hit 1 for student or 2 for librarian.";

    cin >> sorl;

    if(sorl == 1) 
    {
      string name;
      cout << "Enter Name: ";
      cin >> name;
      int numBooks = 0;
      cout << "How many books do you want to take?";
      cin >> numBooks;
      cout << "Enter book ISBN no(Ex: 563467)";
      int books[numBooks];
      string currentBorrowed = "";
      
      for(int i = 0; i < numBooks; i++) 
      {
        int isbn;
        cin >> isbn;
        books[i] = isbn;
        currentBorrowed += to_string(isbn) + "\r\n";
      }
      cout << name << " borrowed " << numBooks << " books." << endl;

      names[currentIndex] = name;

      numsBooks[currentIndex] = numBooks;

      booksBorrowed[currentIndex] = currentBorrowed;

      borrowedStrings[currentIndex] = name + " borrowed " + to_string(numBooks) + " books.";
      
      currentIndex++;
    } 

    else {
      string name;

      cout << "Enter Name: ";

      cin >> name;

      for(int i = 0; i < currentIndex; i++) 
      {
        cout << i << " " << borrowedStrings[i] << endl;
      }

      cout << "Type student id for more info.";

      int id;
      cin >> id;

      cout << borrowedStrings[id] << endl;

      cout << booksBorrowed[id];
    }
    cout << "Hit 1 to continue 0 to end system.";
    cin >> choice;
  } 
  while (choice != 0);
  
  return 0;
}