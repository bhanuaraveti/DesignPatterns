#include "Field.hpp"

Field::Field(const std::string& name, const std::string& type)
	: name{ name },
	type{ type }
{
}

std::ostream& operator<<(std::ostream& os, const Field& obj)
{
	return os << obj.getType() << " " << obj.getName() << ";";
}

std::string Field::getName() const { return name; }
void Field::setName(const std::string& val) { name = val; }

std::string Field::getType() const { return type; }
void Field::setType(const std::string& val) { type = val; }