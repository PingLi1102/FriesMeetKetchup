#include <iostream>
#include "project.hpp"

using namespace std;

void menu()
{
  cout << "============Main Menu============" << endl;
  cout << "1. Get group information from file" << endl;
  cout << "2. Add a group to Priority Queue" << endl;
  cout << "3. Show next group in the queue" << endl;
  cout << "4. Serve Next group" << endl;
  cout << "5. Serve Entire Queue" << endl;
  cout << "6. Quit" << endl;
}

int main(int argc, char* argv[])
{
  Heap pq(stoi(argv[1]));
  string choice;
  
  while (choice != "7")
  {
    menu();
    getline(cin, choice);
    switch (stoi(choice))
    {
      case 1:
      {
        breakl;
      }
        
        
        
      case 6:
      {
        cout << "Goodbye!" << endl;
        return 0;
      }
      default:
      {
        cout << "invalid input" << endl<<endl;
        break;
      }
    }
  }
  menu();
  return 0;
}
