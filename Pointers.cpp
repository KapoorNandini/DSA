/* *****POINTERS*****
addresss ---> &
Address is always in hexadecimal format i-e 1-9 a-z
Pointer ---> Store Address
int*ptr = 0; ---> Pointer Declaration

NEVER DECLARE POINTER WITHOUT INITIALIZATION i-e int * ptr;
ALWAYS INITIALIZE THE POINTER , IF THERE IS NO VALUE THEN INITIALIZE IT WITH 0 , IT WILL BECOME NULL POINTER
If we write int *ptr = &num it means there will a block created in the memory as num and &num will be the address of num
and ptr will point the address of num

----> ptr is a pointer to int or we can say yeh ek pointer hai jo int type ki value/variable ko
point kar raha hai aur uska address store kar raha hai !!!!!!!!

KEEP IN MIND
Always make a pointer acc to the data type of variable on the RHS
i-e char ch = 'a';
so pointer to this will be of character type
char *p = &ch;

FOR PRINTING THE POINTER
for ex : int *p = &num;
---> cout<<*p;  HERE * is the Derefrence Operator that will give the value stores on that address
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 30;
    cout << num << endl;

    // Declaration of Pointer
    int *ptr = &num;

    // Printing The value using pointer
    cout << "Value is " << *ptr << endl;

    // Printing the Address
    cout << "Address is " << ptr << endl;

    // Printing the size
    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;

    double d = 2.6;
    double *p2 = &d;

    cout << "Value is " << *p2 << endl;
    cout << "Address is " << p2 << endl;

    cout << "Size of double is " << sizeof(d) << endl;
    cout << "Size of pointer is " << sizeof(*p2) << endl;

    char ch = 'a';
    char *p3 = &ch;

    cout << "Value is " << *p3 << endl;
    cout << "Address is " << p3 << endl;

    cout << "Size of character is " << sizeof(ch) << endl;
    cout << "Size of pointer is " << sizeof(*p3) << endl;

    cout << endl;

    // int *p4 = 5 ---> So this will give an error bcz we can only store addresses in the pointer nd not
    // the value ......
    int Kapoor = 5;
    int *p4 = &Kapoor;
    cout << *p4 << endl;

    cout << endl;

    int m = 7;
    int *p5 = &m;
    cout << *p5 << endl;
    cout << p5 << endl;

    // WE CAN INITIALIZE THE POINTER IN BOTH WAYS i-e THE ABOVE ONE AND BELOW ONE

    int *p6 = 0;
    p6 = &m;

    cout << *p6 << endl;
    cout << p6 << endl;
    cout << endl;

    int val = 6;
    int a = val;
    a++;

    cout << val << endl;

    int *p7 = &val;
    cout << "Value before increment " << val << endl;
    (*p7)++;
    cout << "Value after increment " << val << endl;

    // Copying a pointer
    int *p8 = p7;
    cout << p7 << "-" << p8 << endl;
    cout << *p7 << "-" << *p8 << endl;
    cout << endl;

    int i = 12;
    int *t = &i;
    cout << "Value before " << *t << endl;
    cout << "Address before " << t << endl;
    (*t)++;
    cout << "Value after " << *t << endl;
    (t)++;
    cout << "Address after " << t << endl;
    t = t + 1; // it will go to next integer i-e 4 bytes ahead
    cout << t << endl;
    return 0;
}