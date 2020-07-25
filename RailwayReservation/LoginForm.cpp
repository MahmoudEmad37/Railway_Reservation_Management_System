#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RailwayReservation::LoginForm form;
	Application::Run(%form);
	return 0;
}


