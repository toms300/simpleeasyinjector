#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>

DWORD GetProdId(const char* procnName)
{
    DWORD procId = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (hSnap != INVALID_HANDLE_VALUE)
    {
        PROCESSENTRY32 procEntry;
        procEntry.dwsize = sizeof(procEntry);

        if (Process32First(hSnap, &procEntry))
        {
            do
            {
                
            }
        }
    }

}

int main()
{
    std::cout << "Hello World!\n";
}

