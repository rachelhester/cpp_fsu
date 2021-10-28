#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int persona;
    int loop_cntrl = 1;
    int i = 0;
    int n = 0;
    int m;

    int id;
    int g;

    string isbn_num;
    int isbn_start[20];
    int isbn_end[20];
    string isbn[100];
    string student_names[20];
    int num_of_books[20];
    int student_id[20];
//  string librarian_names[20];  //Don't need this anymore because we need to store librarian info in structure now
    struct Librarian {
        string name;
        string password;
        string emplid;
    };
    Librarian librarians[100];
    int index = 0;
    while (loop_cntrl == 1)
    {
        cout <<"                  Library Management System 2.0                    \n" <<endl;
        cout <<"-------------------------------------------------------------------\n" <<endl;
        cout <<"Press 1 if you are a student and press 2 if you are a librarian:" <<endl;
        cin >> persona;
        if (persona == 1)
        {
            student_id[i] = i;
            cout << "please enter your name: " << endl;
            cin.ignore ();
            getline (cin, student_names[i]);
            cout << "How many books did you rent?" << endl;
            cin >> num_of_books[i];
            cout << "What was the ISBN number(s)? " << endl;
            isbn_start[i] = n;
            for (m = 0; m < num_of_books[i]; m++)
            {
                cin >> isbn[n];
                n++;

            }
            n--;
            isbn_end[i] = n;
            n++;
            cout << "\n" << student_names[i] << " borrowed " <<num_of_books[i] << " books." << "\n";
            i++;

        }

        else if (persona == 2)
        {
            //librarian account system to be implemented here
            cout << "1. Create new account 2. Login";
            int selection = 0;
            cin >> selection;
            if(selection == 1) {
                cout << "Enter name: ";
                string name;
                cin >> name;
                cout << "Enter password: ";
                string password;
                cin >> password;
                cout << "Emplid_no: ";
                string emplid;
                cin >> emplid;
                Librarian lib1;
                lib1.name = name;
                lib1.password = password;
                lib1.emplid = emplid;
                librarians[index] = lib1;
                index++;
                cout << "Libarian successfully registered!";
            } else if(selection == 2) {
                string username;
                string password;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                for(int i = 0; i < 100; i++) {
                    if (librarians[i].name == username && librarians[i].password == password) {
                        cout << "\nPlease enter a student id for more details:" << endl;
                        cin >> id;
                        cout << "\n" << student_names[id] << " rented " << num_of_books[id]
                             << " books with ISBN number(s) of:" << endl;
                        for (g = isbn_start[id]; g <= isbn_end[id]; g++) {
                            cout << isbn[g] << endl;
                        }
                    }
                }
            }
        }
        cout << "\nenter 1 to continue or 0 to end:" << endl;
        cin >> loop_cntrl;
    }
    return 0;
}

