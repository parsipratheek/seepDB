#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "enter a file name: ";
    getline(cin, name);
    name = name + ".txt";
    cout << name;
    ofstream file;
    file.open(name, ios::app);

    ifstream ffile(name);

    if (ffile)
    {
        cout << "\nfile already exist.\n";
        cout << "Text saved in the file is :\n";
        string line;
        while (getline(ffile, line))
        {
            cout << line;
        }
    }
    else
    {
        cout << "\nFile does not exist.A new file created.\n";
    }
    ffile.close();

    cout << "\n enter something:\n";
    string somee;
    getline(cin, somee);
    file << somee;
    file.close();

    return 0;
}
