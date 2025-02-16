#include <iostream>
using namespace std;
#include <vector>

struct T 
{
    string desc;
    bool done;
};

vector<T> t;

void add() 
{
    T newT;
    cout << "Enter task: ";
    cin.ignore();
    getline(std::cin, newT.desc);
    newT.done = false;
    t.push_back(newT);
}

void view() 
{
    cout<<"All Tasks :"<<endl;
    for (int i = 0; i < t.size(); i++)
        cout << i + 1 << ". " << t[i].desc << " [" << (t[i].done ? "Done" : "Pending") << "]\n";
}

void mark() 
{
    int i;
    view();
    cout << "Enter task number to mark done: ";
    cin >> i;
    if (i > 0 && i <= t.size()) t[i - 1].done = true;
}

void remove() 
{
    int i;
    view();
    cout << "Enter task number to remove: ";
    cin >> i;
    if (i > 0 && i <= t.size()) t.erase(t.begin() + i - 1);
}

int main() 
{
    int ch;
    cout<<"********************************************************"<<endl;
    cout<<"*************** TO-DO LIST BY ABHISHEK *****************"<<endl;
    cout<<"********************************************************\n"<<endl;
    while (1) 
    {
        cout << "\n1. Add\n2. View\n3. Mark Done\n4. Remove\n5. Exit\n";
        cout<<"Enter the Number: ";
        cin >> ch ;
        cout<<"\n\n";
        if (ch == 1) add();
        else if (ch == 2) view();
        else if (ch == 3) mark();
        else if (ch == 4) remove();
        else if (ch == 5) break;
    }
    return 0;
}