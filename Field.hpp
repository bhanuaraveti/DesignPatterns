#pragma once

#include <string>
#include <ostream>

class Field
{
public:
	Field(const std::string& name, const std::string& type);

	friend std::ostream& operator<<(std::ostream& os, const Field& obj);

	std::string getName() const;
	void setName(const std::string& val);

	std::string getType() const;
	void setType(const std::string& val);
private:
	std::string name, type;
};