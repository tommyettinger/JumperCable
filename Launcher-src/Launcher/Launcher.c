// Launcher.cpp : Defines the entry point for the console application.
//

#include <tchar.h>
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory( &si, sizeof(si) );
	si.cb = sizeof(si);
	ZeroMemory( &pi, sizeof(pi) );
	TCHAR cmd[] = {
		_T('j'), _T('r'), _T('e'), _T('\\'), _T('b'), _T('i'), _T('n'), _T('\\'),
		_T('j'), _T('a'), _T('v'), _T('a'), _T('.'), _T('e'), _T('x'), _T('e'), _T(' '),
		_T('-'), _T('s'), _T('e'), _T('r'), _T('v'), _T('e'), _T('r'), _T(' '), _T('-'),
		_T('X'), _T('X'), _T(':'), _T('+'), _T('T'), _T('i'), _T('e'), _T('r'), _T('e'),
		_T('d'), _T('C'), _T('o'), _T('m'), _T('p'), _T('i'), _T('l'), _T('a'), _T('t'),
		_T('i'), _T('o'), _T('n'), _T(' '), _T('-'), _T('X'), _T('m'), _T('s'), _T('5'),
		_T('1'), _T('2'), _T('m'), _T(' '), _T('-'), _T('X'), _T('m'), _T('x'), _T('1'),
		_T('0'), _T('2'), _T('4'), _T('m'), _T(' '), _T('-'), _T('j'), _T('a'), _T('r'),
		_T(' '), _T('f'), _T('i'), _T('l'), _T('e'), _T('s'), _T('\\'), _T('A'),
		_T('p'), _T('p'), _T('.'), _T('j'), _T('a'), _T('r'), _T('\0')
	};
	LPTSTR commandline = cmd;
	return CreateProcess( NULL,   // No module name (use command line)
		commandline,
		//_tcsdup(TEXT("jre\\bin\\java.exe -server -XX:+TieredCompilation -Xms512m -Xmx1024m -jar files\\App.jar")),        // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si,            // Pointer to STARTUPINFO structure
		&pi );           // Pointer to PROCESS_INFORMATION structure;
}

