//id: 24006841
//Muhammad Najmi
//Group: G2
#include <iostream>     
using namespace std;

struct Student{
        
        int id;
        string name;
        int contact;
        string email;
        
    };
    
int main() {
    
    Student students[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> students[i].id;
        cin.ignore();
        

        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, students[i].name);
        
        cout << "Enter contact for student " << i + 1 << ": ";
        cin >> students[i].contact;
        cin.ignore();
        
        cout << "Enter email for student " << i + 1 << ": ";
        getline(cin, students[i].email);
    }
    
    for(int i=0; i<5; i++){
        
        cout <<"**********" << endl;
        
        cout<< "Student " << i+1<< endl;
        
        cout << "id: " << students[i].id << endl;
        cout << "name: " << students[i].name<< endl;
        cout << "contact: " << students[i].contact << endl;
        cout << "email: " << students[i].email<< endl;


    }
    

    return 0;
}