// GFK.cpp: главный файл проекта.

#include "stdafx.h"
#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Gamefunction.h"
#include "Form1.h"

using namespace GFK;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());
	return 0;
}
