#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class employee
{
private:
    string c_name;
    float c_premium;

public:
    int c_year_employment;
    string c_department;
    int c_salary;

    employee();
    employee(string name, string department, int year_employment, int salary);
    void print_info() const;
};

void interface();
void add_employee(vector<employee> &list_employee);
float average_experience(const vector<employee> &list_employee);
void sort_employee(vector<employee> &list_employee);