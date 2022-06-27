#include<iostream>
#include<fstream>
using namespace std;
class Password
{
public:

    int Entrance()
    {
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        if (!log.is_open() && !pass.is_open())
        {
            cout << "Error!" << endl;
        }
        else
        {
            string log_cheker;
            string pass_cheker;

            while (!log.eof()) 
            {
                log_cheker = "";
                log >> log_cheker; 
            }
            while (!pass.eof())            {
                pass_cheker = "";
                pass >> pass_cheker; 
            }

            string login_correct;
            string pass_correct;

            cout << "Enter your login: "; cin >> login_correct;
            cout << endl;
            cout << "Enter your password: "; cin >> pass_correct;

            if (login_correct != log_cheker && pass_correct != pass_cheker)
            {
                cout << "Password or username entered incorrectly!" << endl;
            }
            else
            {
                cout << "Data entered correctly!" << endl;
            }
            return 0;
        }
    }
    int Sign_up()
    {
        string login = "login.txt";
        string password = "password.txt";

        fstream log;
        fstream pass;

        log.open(login, fstream::in | fstream::out | fstream::app);
        pass.open(password, fstream::in | fstream::out | fstream::app);

        if (!log.is_open() && !pass.is_open())
        {
            cout << "Error!" << endl;
        }
        else
        {
            string log_cheker;
            string pass_cheker;
            cout << "Enter your login: "; cin >> log_cheker;
            cout << endl;
            cout << "Enter your password: "; cin >> pass_cheker;

            log << log_cheker;
            pass << pass_cheker;

            cout << "Registration completed successfully!" << endl;

            return 0;

        }
    }

};
class menu
{
public:

    int RunMenu()
    {
        int punkt;
        cout << "Welcome!" << endl;
        cout << "1.Login" << endl;
        cout << "2.Registration" << endl;
        cin >> punkt;

        if (punkt != 1 && punkt != 2)
        {
            cout << "Wrong menu item selected!" << endl;
        }
        if (punkt == 1)
        {
            system("cls");
            Password pass;
            pass.Entrance();
        }
        if (punkt == 2)
        {
            system("cls");
            Password pass;
            pass.Sign_up();
        }
        return 0;
    }
};
int main()
{

    menu Menu;

    Menu.RunMenu();

    return 0;
}