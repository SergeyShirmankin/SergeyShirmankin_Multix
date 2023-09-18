#pragma once
#include <iostream>
#include <thread>
#include <iostream>
#include <fstream>
class Multex
{
public:
	Multex();
	void writeFile(const std::string& msg);
	~Multex();
	void readFile();
public:
	std::ofstream out;
	std::string fileName = "log.txt";
};
