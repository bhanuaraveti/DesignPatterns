#pragma once

#include <string>
#include <vector>
#include <ostream>

#include "Class.hpp"
#include "Field.hpp"

class CodeBuilder
{
public:
	CodeBuilder(const std::string& name);

	CodeBuilder& add_field(const std::string& name, const std::string& type);

	friend std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj);
private:
	Class code;
};