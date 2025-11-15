#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

void viewchapternames()
{
  string path = "path/to/cnotes";
  for (const auto &entry : fs::directory_iterator(path))
    cout << entry.path() << endl;
}
void viewchapternotes()
{
  int ch;
  cin >> ch;
  cin.ignore();
  string filename;

  switch (ch)
  {
  case 1:
    filename = "cnotes/chapter1 Variables,Data Types..txt";
    break;
  case 2:
    filename = "cnotes/chapter2 Instructions and Operators..txt";
    break;
  case 3:
    filename = "cnotes/chapter3 Conditional Sttments..txt";
    break;
  case 4:
    filename = "cnotes/chapter4 Loop Contorl Statments..txt";
    break;
  case 5:
    filename = "cnotes/chapter5 Functions And Recursions..txt";
    break;
  default:
    cout << "Invalid chapter number!\n";
    return;
  }

  ifstream file(filename);

  if (!file)
  {
    cout << "File doesn't exist." << filename;
  }

  string line;
  while (getline(file, line))
  {
    cout << line;
  }
  file.close();
}

int main()
{

  string name;

  cout << "Enter 'ok' to read C notes: ";
  getline(cin, name);

  if (name == "ok")
  {
    cout << "Enter 'view' to see chapter names: ";
    getline(cin, name);

    if (name == "view")
    {
      viewchapternames();

      cout << "Enter chapter no. to read the notes: ";

      viewchapternotes();
    }
    else
    {
      cout << "Invaild input.\n";
    }
  }
  else
  {
    cout << "You didn't enter ok. Please enter ok to read notes.\n";
  }

  return 0;
}
