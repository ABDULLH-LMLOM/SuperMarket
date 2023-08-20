#include "Hedder.h"
void mainlist()
{
    system("cls");
    cout << "-------------------------------------------\n";
    cout << "               Super Market                \n";
    cout << "-------------------------------------------\n\n";
    cout << "1-admin:\n";
    cout << "2-buy:\n";
    cout << "3-close:\n";
    cout << "chose option in the list\n";
}
void adminlist()
{
    system("cls");
    cout << "1- add product :\n";
    cout << "2- edit proudct :\n";
    cout << "3- delete proudct :\n";
    cout << "4- show proudct :\n";
    cout << "5- back :\n";
    cout << "chose option in the list\n";
}
void show_product()
{
    system("cls");
    fstream data;
    data.open("database.txt", ios::in);
    cout << "Code"
         << " "
         << "Name"
         << " "
         << "salary\n";
    string line;
    while (getline(data, line))
    {
        cout << line << "\n";
    }
    data.close();
    cout << "enter any key to back \n";
    string a;
    cin >> a;
}
void add_proudct(product obj)
{

    bool ans = true;
    while (ans)
    {
        system("cls");
        string code, name;
        int salary;

        cout << "enter code product:\n";
        cin >> code;
        cout << "enter name product:\n";
        cin >> name;
        cout << "enter salary product:\n";
        cin >> salary;

        obj.add_product(code, name, salary);
        system("cls");
        cout << "are you want add again [y/n] :\n";
        char input;
        cin >> input;
        if (input == 'n' || input == 'N')
            ans = false;
    }
}
void buylist()
{
    cout << "not finished:\npress any key to continue ";
    string m;
    cin >> m;
}
void edit_proudct(product obj)
{
    system("cls");
    cout << "Code"
         << "  "
         << "Name"
         << "  "
         << "Salary\n";
    obj.print_data();
    cout << "\n"
         << "enter code product to edit :\n";
    bool ans = true;
    while (ans)
    {
        string code;
        cin >> code;
        if (obj.edit_product(code) == 1)
        {
            cout << "no found code enter again \n";
        }
        else
        {
            cout << "edit has sucssfull\n";
            cout << "press any key to continue\n";
            string s;
            cin >> s;
            break;
        }
    }
}
void delete_product(product obj)
{
    system("cls");
    cout << "Code"
         << "  "
         << "Name"
         << "  "
         << "Salary\n";
    obj.print_data();
    cout << "\n"
         << "enter code product to delete :\n";
    string code;
    cin >> code;
    obj.delete_product(code);
    cout << "successful delete\npress any key to continue\n ";
    string r;
    cin >> r;
}
int main()
{
    bool loop = true;
    while (loop)
    {
        mainlist();
        int choise;
        cin >> choise;

        if (choise == 1)
        {
            bool loop2 = true;
            while (loop2)
            {
                adminlist();
                int ch;
                cin >> ch;
                if (ch == 1)
                {
                    product obj;
                    add_proudct(obj);
                }
                else if (ch == 2)
                {
                    product obj;
                    if (obj.num_object > 0)
                    {
                        edit_proudct(obj);
                    }
                    else
                    {
                        cout << "no any proudct:\npress any key to back\n";
                        string k;
                        cin >> k;
                        continue;
                    }
                }
                else if (ch == 3)
                {
                    product obj;
                    if (obj.num_object > 0)
                    {
                        delete_product(obj);
                    }
                    else
                    {
                        cout << "no any proudct:\npress any key to back\n";
                        string k;
                        cin >> k;
                        continue;
                    }
                }
                else if (ch == 4)
                {
                    show_product();
                }
                else if (ch == 5)
                    break;
            }
        }

        else if (choise == 2)
        {
            buylist();
        }
        else if (choise == 3)
        {
            return 0;
        }
    }
}
