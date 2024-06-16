#include "Windows.h"
#include <iostream>

int main() {
	HWND my_window{ FindWindow(NULL, L"Simple Sticky Notes") };

	DWORD PID{};
	GetWindowThreadProcessId(my_window, &PID);
	std::cout << PID << std::endl;

	HANDLE process{ OpenProcess(PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE, false, PID) };

	char val{};
	ReadProcessMemory(process, (void*)0x04BF914A, &val, sizeof(val), 0);
	std::cout << "Value is: " << val << std::endl;

	val = 'K';
	WriteProcessMemory(process, (void*)0x04BF914A, &val, sizeof(val), 0);
}