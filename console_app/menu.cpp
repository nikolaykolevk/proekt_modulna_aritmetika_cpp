#include "menu.h"


int printMenu () {
    using namespace std;

    cout << "0. Exit" << endl;
    cout << "1. Fill an array with the elements of the ring (task 1)" << endl;
    cout << "2. Addition of two elements in the ring (task 2)" << endl;
    cout << "3. Substraction of two elements in the ring (task 3)" << endl;
    cout << "4. Multiplication of two elements in the ring (task 4)" << endl;
    cout << "5. Find the reciprocal of the numbers (task 5)" << endl;
    cout << "6. Find the reciprocal of a specific number in the ring (task 6)" << endl;
    cout << "7. Find the reciprocal using Bezu's equation (task 7)" << endl;
    cout << "8. Divide two numbers in the ring (task 8)" << endl;
    cout << "9. Exponentiation of a number using method 1 (task 9)" << endl;
    cout << "10. Exponentiation of a number using method 2 (task 10)" << endl;
    cout << "11. Check if a number is a primitive root in Zn (task 11)"  << endl;
    cout << "12. Find all the primitive roots in Zn (task 12)" << endl;
    cout << "13. Calculate discrete logarithm in Zn (task 13)" << endl;
    cout << "14. Check if Zn is a finite field" << endl;


    cout << endl;

    return 0;
}


bool menu (int opt, int **&arr, int &n) {
    using namespace std;

    system("clear");

    int a,b;

    if (arr[0] == nullptr && opt>1 ) {
        cout << "The array is not initialized yet!" << endl;
        return 1;
    }

    switch (opt) {
    case 1:
        task1(arr[0], n);
        break;

    case 2:
    case 3:
    case 4:
    case 8:

        cout << "Enter the first number: " << endl;
        enterNumber(a, 0, n-1);
        cout << "Enter the second number: " << endl;
        enterNumber(b, 0, n-1);

        if (opt==2) task2(n, a, b);
        if (opt==3) task3(n, a, b);
        if (opt==4) task4(n, a, b);
        if (opt==8) task8(arr[1], n, a, b);


        break;

    case 5: task5(arr[1], n);
        break;

    case 6:
    case 7:
    case 11:
        cout << "Enter a number: ";
        enterNumber(a, 0, n-1);

        if (opt==6) task6(arr[1], n, a);
        if (opt==7) task7(n, a);
        if (opt==11) task11(arr[2], n, a);

        break;


    case 9:
    case 10:
        cout << "Enter the base: ";
        enterNumber(a, 0, n-1);
        cout << "Enter the exponent: ";
        enterNumber(b, INT32_MIN, INT32_MAX);

        if (opt==9) task9(arr[1], n, a, b);
        if (opt==10) task10(arr[1], n, a, b);

        break;

    case 12:
        task12(arr[2], n);
        break;

    case 13:
        cout << "Enter the base: ";
        enterNumber(a, 0, n-1);
        cout << "Enter the element: ";
        enterNumber(b, 0, n-1);
        task13(arr[2], n, a, b);
        break;

    case 14:
        task14(n);
        break;

    default:
        cout << "Bye!" << endl;
        return 0;

    }

    cout << endl;

    return 1;
}
