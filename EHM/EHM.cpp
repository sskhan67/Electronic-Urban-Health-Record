// EHM.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Login.h"
#include "DispalyPhysicalEnvironmentAndInfrastructure.h"

using namespace EHM;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Login());
	//Application::Run(gcnew DispalyPhysicalEnvironmentAndInfrastructure());
	return 0;
}
