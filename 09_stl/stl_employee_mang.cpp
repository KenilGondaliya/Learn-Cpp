#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <numeric>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee &emp)
{
    cout << "ID: " << emp.id << " ,Name:" << emp.name << " ,Salary: $" << emp.salary << endl;
}

int main()
{
    vector<Employee> employees = {
        {101, "steve", 100000},
        {102, "tichala", 100000},
        {103, "tony", 100000},
        {104, "piter", 100000},
        {105, "bruce", 100000},
    };

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employee Sorted by salary -> Highest to lowest \n";

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employees.begin(),
        employees.end(),
        back_inserter(highEarners),
        [](const Employee &e)
        {
            return e.salary > 50000;
        });

    cout << "Employee who ate high earners \n";

    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee &e)
                                    { return sum + e.salary; });

    double avatageSalary = totalSalary / employees.size();

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee &e1, Employee &e2)
                                   { return e1.salary < e2.salary; });

    return 0;
}