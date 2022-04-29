# cppLib
- A library consisting of a bunch of functions
- every function uses coop namespace `coop::function(1,2)`
- to avoid having to retype `coop::` add `using namespace coop;` to the top of your main
- repl.it source code: https://replit.com/@GeorgeLebor/Lib#lib.h
#### to add: download and drag and drop the file into your project, then have `#include "lib.h"` in your main


## Functions:
### min(array, arraySize, [start])
- returns the smallest value in an array
- start is the first index to check (default is 0)
```cpp
int array[5] = {0,2,3,1,4};
int a = min(array,5,1); // starts at first index
cout << a;
```
output: 3
### minIndex(array, arraySize, [start])
- returns the smallest value index in an array
```cpp
int array[4] = {2,3,1,4};
int a = minIndex(array,4);
cout << a;
```
output: 2
### max & maxIndex
- works the exact same as min except returns the greatest value
### randomD(min,max,[dec])
- returns a random double between two ints 
- [dec] is the amount of decimal places (default is 2)
### random(min,max)
- returns a random integer between min and max
### input(string)
- same as getline except it never skips
- returns user input
```cpp
string name;
cout << "Whats your first and last name:" << endl;
input(string);
cout << "Hello " << name << endl;
```
input: John Doe

Output: Hello John Doe
### askFile(stream)
- asks the user for a file and then opens the file using a file stream
- automatically adds .txt if there is no file type
- assert check is included
```cpp
cout << "Enter a file name:";
fstream read;
askFile(read);
```
### sort(array,arraySize)
- sorts an array from least to greatest
```cpp
int a[3] = {1,5,2};
sort(array,3);
print(array,3);
```
output: {1,2,5}
### print(array,length)
- prints an array using cout
```cpp
int a[3] = {1,5,2};
print(array,3);
```
output: {1,5,2}
### clamp(var, min, max)
- constrains a value between a min and max

`cout << clamp(3,4,5);` Output: 4

`cout << clamp(10,4,5);` Output: 5

`cout << clamp(4.5,4,5);` Output: 4.5
### reverse(array,lenght)
- reverses an array
```cpp
int arr[4] = {1,2,3,4};
reverse(arr,4);
print(arr,4);
```
output: {4,3,2,1}
### shuffle
- shuffles an array
### toDegrees(num)
- converts radians to degrees
### toRadians(num)
- converts degrees to radians
### pow(num,exp)
- raises num to an exponent;
```cpp
cout << pow(10,2);
```
output: 100
### sq(num)
- squares a number
### insertionSort(arr, length)
- sorts an array using a insertion sort
### contains(str, substr)
- returns true if the substr is present in the string
```cpp
string str = "Hello, World!";
cout << contains(str,"World");
```
output: True
## Other
### PI
- constant double that equals 3.1415926535
