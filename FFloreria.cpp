
#include "FFloreria.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PFloreria::FFloreria form;
	Application::Run(% form);
}