#include "CalcForm.h"

int main() {
    WinForms::Application::EnableVisualStyles();
    WinForms::Application::SetCompatibleTextRenderingDefault(false);
    WinForms::MyForm form;
    WinForms::Application::Run(% form);
    return 0;
}