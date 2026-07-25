#include <bits/stdc++.h>
using namespace std;

int findDuplicateEmployee(
    const vector<int> &employeeID,
    const vector<string> &employeeName,
    unordered_map<int, string> &employeeDB,
    int totalEmployee )
{
    int index = 0;
    int duplicate = -1;

    while (index < totalEmployee)
    {

        if (employeeDB.find(employeeID[index]) == employeeDB.end())
        {
            employeeDB[employeeID[index]] = employeeName[index];
        }

        else
        {
            duplicate = index;
        }
        index++;
    }

    return duplicate;
}

int main()
{

    int size;
    cout << " What is the total Employees?\n Input : ";
    cin >> size;

    vector<int> employeeID(size);
    vector<string> employeeName(size);

    for (int i = 0; i < size; i++)
    {

        int empID;
        string empName;

        cout << "\n What is employee ID?\n Answer : ";
        cin >> empID;

        // remove leftover newline
        cin.ignore();

        cout << "\n What is employee Name?\n Answer : ";
        getline(cin, empName);

        employeeID[i] = empID;
        employeeName[i] = empName;
    }

    unordered_map<int, string> employeeDB;

    int duplicate = findDuplicateEmployee(employeeID, employeeName, employeeDB, size);

    if (duplicate != -1)
    {
        cout
        << "\n\n Duplicate Employee Entered = "
        << employeeID[duplicate]
        << " : "
        << employeeName[duplicate]
        << endl;
    }else{
        cout
        <<"\n\n There is no Duplicate Employee Record."<<endl;
    }

    cout << "\n Employee DataBase " << "\n";

    cout << "\n\n Employee ID          :     Employee Name \n\n";
    for (auto &employeeDetail : employeeDB)
    {
        cout
        << " "
        << employeeDetail.first
        << "                               "
        << employeeDetail.second
        << endl;
    }

    // first find() the iterator.
    auto itr = employeeDB.find( employeeID[duplicate]);

    //check the itr found or is it pointing to end().
    if( itr != employeeDB.end() ){
        employeeDB.erase( itr );
    }

    employeeDB.insert( {employeeID[duplicate] , employeeName[duplicate]} );

    cout<<"\n\n\n After Erasing and Inserting Fresh Record. \n\n\n";

    cout << "\n Employee DataBase " << "\n";

    cout << "\n\n Employee ID          :     Employee Name \n\n";
    for (auto &employeeDetail : employeeDB)
    {
        cout
        << " "
        << employeeDetail.first
        << "                               "
        << employeeDetail.second
        << endl;
    }

    return 0;
}