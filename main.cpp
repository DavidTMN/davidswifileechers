#include <iostream>

using namespace std;
class UserAccount {
public:
    UserAccount (string a, string b, int c){
        name = a;
        address = b;
        contactNum = c;
    }
    void PrintAccount (){
        cout << "Username: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << contactNum << endl;
    }
protected:
    string name;
    string address;
    int contactNum;
};
class StudentAccount : public UserAccount  {
public:
    StudentAccount (string a, string b, int c, int d, string e, string f): UserAccount(a,b,c){
        studentnum = d;
        subject1 = e;
        subject2 = f;
    }
    void AssignNum (int z){
        studentnum = z = 142638;
    }
     void SetSubject (string subj1, string subj2){
        subject1 = subj1;
        subject2 = subj2;
    }
    void PrintAccount () {
        cout << "Student Number: #" << studentnum << endl;
        cout << "Username: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << contactNum << endl;
        cout << "Subject #1: " << subject1 << endl;
        cout << "Subject #2: " << subject2 << endl;
    }
private:
    int studentnum;
    string subject1;
    string subject2;
};
class TeacherAccount : UserAccount {
public:
     TeacherAccount (string a, string b, int c, int d, string e, string f): UserAccount(a,b,c){
        teachernum = d;
        subject1 = e;
        subject2 = f;
    }
    void AssignNum (int z){
        teachernum = z = 524393;
    }
    void SetSubject (string subj1, string subj2){
        subject1 = subj1;
        subject2 = subj2;
    }
    void PrintAccount () {
        cout << "Teacher Number: #" << teachernum << endl;
        cout << "Username: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << contactNum << endl;
        cout << "Subject #1: " << subject1 << endl;
        cout << "Subject #2: " << subject2 << endl;
    }
private:
    int teachernum;
    string subject1;
    string subject2;
};

int main()
{
    //Student Acc
    string username, address, subject1, subject2;
    int contactNum, Num;

    cout << "Student Account: " << endl << endl;
    cout << "Enter Username: ";
    getline (cin,username);
    cout << "Enter Address: ";
    getline (cin, address);
    cout << "Enter Contact Number: ";
    while (!(cin >> contactNum)){
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "!! ERROR !! Please enter a [Number]: ";
            }
    StudentAccount SA1 (username, address, contactNum, Num, subject1, subject2);
    cout << "Subject #1: ";
    cin.sync();
    getline (cin, subject1);
    cout << "Subject #2: ";
    cin.sync();
    getline (cin, subject2);
    SA1.SetSubject(subject1, subject2);
    SA1.AssignNum(Num);
    cout << endl;
    SA1.PrintAccount();

    //Teacher Acc
    cout << endl << "Teacher Account: " << endl << endl;

        cout << "Enter Username: ";
    getline (cin,username);
    cout << "Enter Address: ";
    getline (cin, address);
    cout << "Enter Contact Number: ";
    while (!(cin >> contactNum)){
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "!! ERROR !! Please enter a [Number]: ";
            }
    TeacherAccount TA1 (username, address, contactNum, Num, subject1, subject2);
    cout << "Subject #1: ";
    cin.sync();
    getline (cin, subject1);
    cout << "Subject #2: ";
    cin.sync();
    getline (cin, subject2);
    TA1.SetSubject(subject1, subject2);
    TA1.AssignNum(Num);
    cout << endl;
    TA1.PrintAccount();
    return 0;
}
