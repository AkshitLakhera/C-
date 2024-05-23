// #include <iostream>

// int main()
// {
//     // Declare variables
//     int num1, num2, sum;

//     // Prompt the user to enter two numbers
//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     // Perform the calculation
//     sum = num1 + num2;

//     // Print the result
//     std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

//     return 0;
// }

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult";
    }
    else if (age <= 15)
    {
        cout << "You are teenager";
    }
    return 0;
}
*/

//       IF else statement  good question

/*
A school has following rules for grading system
a. below 25 -F
b. 25 to 44 -E
c.45 to 49  -D
d.50 to 59  -C
e.60  to 79   -B
f . 88  to 100 -A
Ask user to  enter marks and print follwoig  message
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int grade;
//     cin >> grade;
//     if (grade < 25)
//     {
//         cout << "F";
//     }
//     //  We use && to check
//     else if (grade <= 44) // we don't have to checked condition again and gain
//     {
//         cout << "E";
//     }
//     else if (grade <= 49)
//     {
//         cout << "D";
//     }
//     else if (grade <= 59)
//     {
//         cout << "C";
//     }
//     else if (grade <= 79)
//     {
//         cout << "B";
//     }
//     else if (grade <= 100)
//     {
//         cout << "A";
//     }
//     return 0;
// }

// Question -2 solutions
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age;
//     cin >> age;
//     if (age < 18)
//     {
//         cout << "not eligible for job";
//     }
//     else if (age <= 57)
//     {
//         cout << "eligibe for job";
//         if (age >= 55)
//         {
//             cout << ",retirement soon";
//         }
//     }
//     else
//     {
//         cout << "Retirement soon";
//     }
// }

// Switch statements
/* Take the day and no andprint the corresponding day
for 1 print Monday
for 2 prinnt Tuesday and so on 7 print Sunday */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int day;
//     cin >> day;
//     switch (day)
//     {
//         // case will acc to argument in switch
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Invalid";
//     }
//     cout << "Done";
// }

//    Array  basics
//  1d array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5]; // making array of size 5
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     arr[4] += 10; // we can do any commutation
//     cout << arr[4];
//     return 0;
// }
// Where is entire error in stored ?
// The entire array is stored in specific address called memorey address .0th address doesn't know where will be stored, but rest  of will be store consecutively( one after another)

//   2d array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // 2d array
//     int arr[3][5];
//     arr[1][3] = 48;
//     cout << arr[1][2];
//     return 0;
// }

//  String
// It is collection of characters eg 'z'
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "Striver";
//     int len = s.size();
//     s[len - 1] = 'z'; //"z" will not work
//     cout << s[len - 1];
//     return 0;
// }

// For loops
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {

//         cout << "Hey, I am akshit lakhera" << endl;
//     }
// }
// converting in while loop
// int main()
// {
//     int i = 1;
//     while (i < 5)
//     {
//         cout << "Hey, I am akshit lakhera" << endl;
//         i = i + 1;
//     }
// }

// Do while loop concept
// int main()
// {
//     int i = 2;
//     do
//     {
//         cout << "striver" << i << endl;
//         i = i + 1;
//     } while (i <= 1);
//     cout << i << endl;
//     return 0;
// }

//     Functions
// Funcyions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readablity
// Functions are used to  tun same code multiple times
// Void ==> which  does not returns anything
// return
// parameterised
// non parameterised

// void printName(string name)
// {
//     cout << "Hey" << " " << name << endl;
// }
// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);
// }

// Question - Take two number prints its sum ?

// int addNumber(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }
//  Having int as a datatype function should definitely return something
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     // int res = addNumber(num1, num2);
//     // Some in built function
//     int maximun = max(num1, num2);
//     cout << maximun;
//     return 0;
//  }

// Pass by value
// here it will take the copy and do commputation with copy
// void doSomething(int num1)
// // if we write as  &num1 in this way we are passing by reference ,I mean we are passing the moemorey refernce of the place .
// {
//     cout << num1 << endl;
//     num1 += 10;
//     cout << num1 << endl;
//     num1 += 10;
//     cout << num1 << endl;
// }
// int main()
// {
//     int num1 = 11;
//     doSomething(num1);    // it is sending copy there
//     cout << num1 << endl; // it doing acc to original num passed
//     return 0;
// }
