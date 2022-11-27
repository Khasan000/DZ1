#pragma once
class String
{
public:
	String();
	String(int charSize);
	String(char *user_input);
	~String();

private:
	char* str;
};

