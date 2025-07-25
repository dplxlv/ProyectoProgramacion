#include "MyForm.h"
#include "agregarProducto.h"
#include "actualizarProducto.h"
#include "buscarProducto.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	proyecto:: MyForm form;
	Application::Run(% form);

}