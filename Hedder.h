#include <iostream >
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class product
{
private:
    string code;
    vector<string> codes;
    string name;
    vector<string> names;
    int salary;
    vector<int> salarys;

public:
    static int num_object;
    void print_data();
    void add_product(string code, string name, int salary);
    int edit_product(string code);
    void delete_product(string code);
};
class admin
{
};
class buyer
{
};