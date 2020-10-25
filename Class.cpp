#include "Class.hpp"

std::ostream& operator<<(std::ostream& os, const Class& obj)
{
	os << "class " << obj.name << "\n";
	os << "{" << "\n";
	for (const auto& field : obj.fields) {
		os << "  " << field << "\n";
	}
	os << "};\n";
	return os;
}


std::string Class::getName() const { return name; }
void Class::setName(const std::string& val) { name = val; }

std::vector<Field> Class::getFields() const { return fields; }
void Class::setFields(const std::vector<Field>& val) { fields = val; }