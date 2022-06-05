//Create and entered book information text 
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cctype>

using namespace std;

typedef struct
{
    string name;
    char author[50];
    double price;
}Book;

int main(void)
{

    int num;
    Book *pbook = new Book;
    ofstream outFile;
    //std::ios_base::app	在每次写入前都会寻找到流的末端
    outFile.open("Book_Information.txt", ios_base::app);

    cout << "How many books you want to entry ? ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the name of Book " << i + 1 << endl;
        cin.get();
        getline(cin, pbook->name);
        cout << "Enter the author of Book " << i + 1 << endl;
        cin.getline(pbook->author, 50);
        cout << "Enter the price of Book " << i + 1 << endl;
        cin >> pbook->price;

        if (outFile.is_open())
        {
            outFile << "Book Name : " << pbook->name << endl;

            for (int j = 0; j < strlen(pbook->author); j++)
            {
                if (islower(pbook->author[j]))
                    pbook->author[j] = toupper(pbook->author[j]);
            }
            outFile << "Book Author : " << pbook->author << endl;

            outFile << fixed;
            outFile.precision(2);
            outFile.setf(ios_base::showpoint);
            outFile << "Book Price : " << pbook->price << endl;
        }
    }
    outFile.close();
    
    return 0;
}