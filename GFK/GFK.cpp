// GFK.cpp: ������� ���� �������.

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
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
