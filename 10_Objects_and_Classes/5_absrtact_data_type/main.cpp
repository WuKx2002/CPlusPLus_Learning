#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;

int main(void)
{
    Stack st;
    char ch;
    unsigned long po;

    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            /*produce a beep sound using \a 
            and instruct the user to enter the right value*/   
            cout << '\a'; 
            continue;
        }
        switch (ch)
        {
            case 'A':
            case 'a':   /*A P.O. or Purchase Order number is a unique number 
                        assigned to a purchase order form. */
                        cout << "Enter a PO number to add: ";
                        cin >> po;
                        if (st.isFull())
                            cout << "Stack already full.\n";
                        else
                            st.push(po);
                        break;
            case 'P':
            case 'p':   if (st.isEmpty())
                            cout << "Stack already empty.\n";
                        else
                        {
                            st.pop(po);
                            cout << "PO #" << po << " popped.\n";
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to press a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0;
}