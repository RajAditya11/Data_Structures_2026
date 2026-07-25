/*

// ================= FIND =================

// Purpose:
// Search whether a key exists in the map.

// Syntax:
freq.find(key);


// Return:
// Iterator pointing to the key-value pair if found.
// Iterator pointing to freq.end() if not found.


auto result = freq.find('a');


// Found:

result
 |
 v

'a' : 5


// Not Found:

result
 |
 v

freq.end()



// Important:
// Use find() when you need:
// 1. Check existence
// 2. Access the value after searching


// Avoid using [] for checking existence:
//
// freq['x'];
//
// Because if x does not exist:
// C++ creates:
//
// x -> 0
//
// This modifies the map unintentionally.



// ================= COUNT =================


// Purpose:
// Only check whether a key exists.

freq.count(key);


// Return:

0 -> key does not exist

1 -> key exists



// Difference:

find()
    -> gives iterator
    -> useful when you need value


count()
    -> gives 0/1
    -> useful only for existence checking




// ================= ERASE =================


// Purpose:
// Remove key-value pair from map.


employee.erase(empID);


// Example:

// Before:

10221 -> Raj


employee.erase(10221);


// After:

// Raj removed
// 10221 key removed



employee.end() - points the place after the last valid element. 

it is an actual object created by container.

*/