#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>

class Person {
public:
	Person(const std::string&, int, const std::string&);
	Person() = default;
	std::string get_name() const;
	void set_name(const std::string&);
    	int get_age() const;
    	void set_age(int);
    	std::string get_passport() const;
	void set_passport(const std::string&);

private:
	std::string name_;
	int age_;
    std::string passport_;
};

#endif // PERSON_H
