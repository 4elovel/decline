#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define next cout << endl;

class Personal
{
public:
	string name="NULL";
	string surname = "NULL";
	string birth_date = "NULL";
	string number = "NULL";
public:
	Personal() : Personal("NULL", "NULL", "NULL","NULL"){}
	Personal(string name, string surname, string birth_date, string number) {
		this->name = name;
		this->surname = surname;
		this->birth_date = birth_date;
		this->number = number;
	};
};


class Job
{
public:
	string last_job = "NULL";
	string last_job_date = "NULL";
	int m_per_hour = 0;
public:
	Job() : Job("NULL", "NULL", 0){}
	Job(string last_job, string last_job_date, int m_per_hour) {
		this->last_job = last_job;
		this->last_job_date = last_job_date;
		this->m_per_hour = m_per_hour;
	}
};




class Resume : public Personal, public Job
{
	string disciption;
public:
	Resume(string name, string surname, string birth_date, string number, string last_job, string last_job_date, int m_per_hour, string disciption)
		: Personal(name, surname, birth_date, number), Job(last_job, last_job_date , m_per_hour), disciption(disciption) {
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Date of Birthsday: " << birth_date << endl;
		cout << "Number: " << number << endl;
		cout << "Before job: " << last_job << endl;
		cout << "Last job date: " << last_job_date << endl;
		cout << "Last salary: " << m_per_hour << endl;
		cout << "disciption: " << disciption << endl;
	}
};



int main()
{
	Resume programmer("Alisa", "Rymun", "21.02.1973", "0662479353", "Microsoft", "28.06.2021", 300, "Node.js, React, SQL, noSQL");
	programmer.print();
	next
	next
	Resume designer("Anya", "shachko", "13.01.1988", "0507191345", "Neetpeak", "13.07.2022", 20, "Adobe PhotoShop, Adobe Illustator, Adobe AfterEffects");
	designer.print();
}
