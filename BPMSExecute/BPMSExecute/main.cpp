#include "main.h"

INT WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrev, LPWSTR lpwCmdLine, int mode)
{
	MessageBoxW(NULL, L"Сработал скрипт заведение учётной записи студента в базе redmine.", L"Жизненный цикл студента.", MB_OK | MB_ICONINFORMATION);
	
	return 0;
}