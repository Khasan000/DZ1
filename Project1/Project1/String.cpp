#include "String.h"

String::String()
{
	char* str1 = new char[80];
}
String::String(int charSize)
{
	char* str2 = new char[charSize];
}

String::String(char *user_input)
{
	str = user_input;
}
String::~String()
{
	delete[] str;
}
