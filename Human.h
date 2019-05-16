#pragma once
#include <string>
#include <iostream>
#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

class human
{
protected:
	string surname, name,midname;
	int age;
public:
	human()
	{
		surname = "NONE";
		name = "NONE";
		midname = "NONE";
		age = 0;
	}
	human(string sur, string nam, string mid, int ag)
	{
		surname = sur;
		name = nam;
		midname = mid;
		age = ag;
	}
	virtual void print()
	{
		cout << surname << " " << name << " " << midname << " " << age << " лет" << endl;
	}
	~human()
	{}
};

class student : public human
{
private:
	bool on_lesson;
protected:
	student() : human()
	{
		on_lesson = 0;
	}
public:
	student(string sur, string nam, string mid, int ag, int less) : human(sur, nam, mid, ag)
	{
		on_lesson = less;
	}
	void print() override
	{
		cout << "я " << surname << " " << name << " " << midname << " " << age << " года и € студент." << endl;
		if (on_lesson)
			cout << "я на уроке." << endl;
		else
			cout << "я не на уроке." << endl;
	}
	~student()
	{
	}
};

class boss : public human
{
private:
	int number_of_workers;
protected:
	boss() : human()
	{
		number_of_workers = 0;
	}
public:
	boss(string sur, string nam, string mid, int ag, int number) : human(sur, nam, mid, ag)
	{
		number_of_workers = number;
	}
	void print() override
	{
		cout << "я " << surname << " " << name << " " << midname << " " << age << " года и € начальник." << endl;
		cout << "≈сть " << number_of_workers << " рабочих в моей компании." << endl;
	}
	~boss()
	{
	}
};
#endif#pragma once
