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
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
        // case will acc to argument in switch
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
    }
    cout << "Done";
}