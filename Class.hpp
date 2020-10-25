#pragma once

#include <string>
#include <ostream>
#include <vector>

#include "Field.hpp"

class Class
{
public:
	Class() {}
	friend std::ostream& operator<<(std::ostream& os, const Class& obj);

	std::string getName() const;
	void setName(const std::string& val);

	std::vector<Field> getFields() const;
	void setFields(const std::vector<Field>& val);

private:
	std::string name;
	std::vector<Field> fields;
};