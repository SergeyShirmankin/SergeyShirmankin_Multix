#include <iostream>
#include  "Operator.h"
#include "Multex.h"
#include <mutex>
#include <thread>
#include <windows.h>
Multex  objMultex;
void writer(std::mutex& mtxA)
{
	std::string text;
	while (1)
	{
		mtxA.lock();
		std::cout << "Введите сообщение" << std::endl;
		std::cin >> text;
		objMultex.writeFile(text);
		mtxA.unlock();
		Sleep(500);
	}
}
void reader(std::mutex& mtxB)
{
	std::string tempMess;
	while (1)
	{
		mtxB.lock();
		objMultex.readFile();
		std::cout << "\nНаберите любую букву :" << std::endl;
		std::cin >> tempMess;
		mtxB.unlock();
		Sleep(500);
	}
}


int main()
{
	std::cout << "Hello World!\n"; 
	Operator counter1("20 30 40");
    std::cout << counter1 << std::endl;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		std::mutex mtxAll;
		std::thread w1(writer, ref(mtxAll));
		std::thread r1(reader, ref(mtxAll));
		w1.join();
		r1.join();
}

