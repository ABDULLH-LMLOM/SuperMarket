#include "Hedder.h"
int product ::num_object = 0;

void product::add_product(string code, string name, int salary)
{
    fstream data;
    data.open("database.txt", ios::app);
    data << code << " " << name << " " << salary << "\n";
    data.close();
    num_object++;
}
void product::print_data()
{
    fstream data;
    data.open("database.txt", ios::in);
    for (int i = 0; i < num_object; i++)
    {
        data >> code >> name >> salary;
        cout << code << "     " << name << "  " << salary << "\n";
    }
    data.close();
}
int product::edit_product(string code)
{
    fstream data;
    data.open("database.txt", ios::in);
    int loop = num_object;
    string code_in, name_in;
    int salary_in;
    while (loop--)
    {
        data >> code_in >> name_in >> salary_in;
        codes.push_back(code_in);
        names.push_back(name_in);
        salarys.push_back(salary_in);
    }
    data.close();
    int index = -1;
    for (int i = 0; i < num_object; i++)
    {
        if (codes[i] == code)
        {
            cout << "enter your new code \n";
            cin >> codes[i];
            cout << "enter your new name \n";
            cin >> names[i];
            cout << "enter your new salary \n";
            cin >> salarys[i];
            index = 0;
            break;
        }
    }
    if (index == -1)
    {
        return 1;
    }
    data.open("database.txt", ios::out);
    for (int i = 0; i < num_object; i++)
    {
        data << codes[i] << " " << names[i] << " " << salarys[i] << "\n";
    }
    data.close();
    return 0;
}
void product::delete_product(string code)
{
    fstream data;
    data.open("database.txt", ios::in);
    string code_d, name_d;
    int salary_d;
    for (int i = 0; i < num_object; i++)
    {
        data >> code_d >> name_d >> salary_d;
        if (code_d != code)
        {
            codes.push_back(code_d);
            names.push_back(name_d);
            salarys.push_back(salary_d);
        }
    }
    data.close();
    data.open("database.txt", ios::out);
    for (int i = 0; i < codes.size(); i++)
    {
        data << codes[i] << " " << names[i] << " " << salarys[i] << "\n";
    }
    data.close();
    num_object--;
}