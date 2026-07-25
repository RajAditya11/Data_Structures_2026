#include<bits/stdc++.h>

// #include<unordered_map> <- the header file we need to include.



using namespace std;

/*

unordered_map<key_datatype , value_datatype> name;

1.- Why we use map?

-> frequency problems : { say find the frequency of characters in the given word. };
-> lookup problems : { }
-> caching concept : { hashmap }
-> java equivalent : hashmaps;


2.- What is unordered_map ?

-> these are key-value data-structure which stores data using hashing.
-> every value is associated with unique key.

Example :

Student ID  → Student Name


101          Raj
102          Aditya
103          Aman

key = Student ID
value = Student Name

3.- Why do we need map as DataStructure?

-> assume we have a vector/array storing the marks of the students , but we need to find the mark of 
-> topper, so either we write a algo to find max marks then map it the index == index for the student array
-> then we find out that who is the topper. 

-> but with map, we can directly access the name of the student using the marks or vise versa.

-> vector = O(n) if unsorted
-> hashmap = O(1) in any case because you directly access the value of the students name with the key.


*/


int main(){ 

    // declare = { unordered_map<int,string> student }

    // initialize 
    unordered_map<int,string> student = {
        { 101 , "Raj" } ,
        { 102 , "Aditya" } , 
        { 103 , "Simmi" }
    };

    // TC = Average( 1 );

    //inserting in map using key directly.    [] <- operator  // if key exisits updates the value.

    student[104] = "Chaudhary";

    // using insert

    student.insert({105 , "Raj"});   // this doesnot override the previous key.

    //Printing unordered_map;

    // range based loop
    for( auto pair : student ){

        cout<<pair.first<<" ";
        cout<<pair.second<<endl;

    }// order is not guaranteed 




    return 0;

}



/*

Internal Working 

student[101] = "Raj";


Hash Function

101
|
|
v

Bucket Number

Bucket[5]
       |
       |
       v
       101 ---> Raj;

       Hash Function Decides where data goes.
*/



/*

Time Complexity :

| Operation | Average | Worst |
| --------- | ------- | ----- |
| Insert    | O(1)    | O(n)  |
| Search    | O(1)    | O(n)  |
| Delete    | O(1)    | O(n)  |

Why O(n) ?

- collision.

Example Bad Hashing :

Bucket 1 :

10
20
30 
40
50

now searching 50 :

need traversal.

*/