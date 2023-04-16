/*
---> int * se pata lagta h kis type ka data hai
---> kitni byte ko consider karna hai
Creating a Double Pointer
for ex int ** ptr2 = &ptr;
---> Jis bhii value k corresponding pointer banana haii uska data type likhdo or * lagado
---> To create triple pointer
write int ** * ptr3 = &ptr2;
*/
/*#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    cout<<"Printing i "<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    cout<<endl;

    cout<<"Printing address of i "<<endl;
    cout<<&i<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;

    cout<<endl;

    cout<<"Printing the address of p1 "<<endl;
    cout<<&p1<<endl;
    cout<<p2<<endl;



    return 0;
}
*/
#include <iostream>
using namespace std;

void update(int **p)
{
    p = p + 1;
    // Kuch change hoga - NO
    *p = *p + 1;
    // Kuch change hoga - YES p will get changed
    **p = **p + 1;
    // Kuch change hoga YES i will get changed
}

int main()
{
    int i = 8;
    int *p = &i;
    int **p2 = &p;

    cout << "BEFORE " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    update(p2);
    cout << "AFTER " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    return 0;
}
