#include <iostream>
#include <utility>

using namespace std;

// binds to const and non-const lvalues and rvalues
void f(const int&)
{
    cout << "f(const int&)\n";
}

// binds to const and non-const rvalues
void f(const int&&)
{
    cout << "f(const int&&)\n";
}

// binds to non-const rvalues
void f(int&& i)
{
    cout << "f(int&&)\n";
}

// binds to non-const lvalues
void f(int& i)
{
    cout << "f(int&)\n";
}

int main()
{
    int i{42};
    const int ci{69};
   
    f(i);
    f(ci);
    f(std::move(i));
    f(std::move(ci));
}



