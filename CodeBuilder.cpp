#include "CodeBuilder.hpp"

CodeBuilder::CodeBuilder(const std::string& name)
{
	code.setName(name);
}

CodeBuilder& CodeBuilder::add_field(const std::string& name, const std::string& type)
{
	auto fields = code.getFields();
	fields.emplace_back(Field{ name,type });
	code.setFields(fields);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj)
{
	return os << obj.code;
}



/*
	Implement the Builder design pattern for rendering simple chunks of code.

	Sample use off the builder you are asked to create:

		auto cb = CodeBuilder("Person").add_field("name", "string").add_field("age", "int");
		cout << cb;

	The expected output of the above code is:

		class Person
		{
		  string name;
		  int age;
		};

	Please observe the same placement of curly braces and use two-space indentation.
*/

#include <string>
#include <iostream>

int main() {
	auto cb = CodeBuilder{ "Person" }.add_field("name", "string").add_field("age", "int");
	std::cout << cb;
	return 0;
}