#include<bits/stdc++.h>
using namespace std;

int main(){

    //Employee ID -> Employee Name
    unordered_map< int , string > eMap;

    int size;
    cout<<"\n What is the length of employees ?\n Answer : ";
    cin>>size;

    for( int i = 0 ; i < size ; i++ ){
        int employeeID;
        string employeeName;

        cout<<" What is Employee ID? ";
        cin>>employeeID;
        
        cout<<" What is Employee Name? ";
        //cin>>employeeName;
        getline(cin , employeeName);

        eMap[employeeID] = employeeName;

    }

    cout<<"\n Company Employee List \n\n";

    // employeeDetail is a Pair of key & value.
    for( auto &employeeDetail : eMap ){
        // first = key , second = value
        cout<<employeeDetail.first<<" : "<<employeeDetail.second;
        cout<<"\n";
    }

    // the order depends on hash(key) not insertion order.



    //Method : find , count , erase ?

/*

find() -> used to search wheather a key exists / not ?

freq.find( ch ); <- this returns an iterator.

--What is iterator ?

think fo iterator as a pointer to an element inside the map.

auto result = freqMap.find('a');

if found :

result
|
|
v 

'a' : 5;

if not found :

result 
|
|
v

end()

if we only need to check the use .find()
as using [] operator will make a pair if it doesnot exist in the map.



--> count()

purpose - check wheater key exists.

0 -> if key doesnot exist 
1 -> if key exist.

find() -> returns iterator;
count() -> return 0/1;

erase() -> the purpose it to remove the element from the map.

use key to remove that value from that map.

example : Raj left DB to joing AMEX as a employee with 33 LPA base salary.

then DB said 

// given empID of Raj is 10221. 
empDB.erase( 10221 );
now Raj is not the part of the empDB.

also id is removed

erase()


this will iterate on the map

auto it = employee.find(102);

// O(1) or O(n) if collision is there and n is the number of element in that bucket.
if( it != employee.end()){
    employee.erase(it);
}


Pattern 1 : Check -> Insert
Pattern 2 : Search -> Use Value
Pattern 3 : Search -> Delete

*/


    return 0;

}