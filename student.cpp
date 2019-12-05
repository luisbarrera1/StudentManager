// author luis barrera
# include <iostream>
#include <string>
# include "student.h"

void student:: setName( string firstName, string lastName)
{
first = firstName;
last = lastName;


}

string student::fullName()
{
string Name;
Name.append(first);
Name.append(" ");
Name.append(last);

return Name;
}
