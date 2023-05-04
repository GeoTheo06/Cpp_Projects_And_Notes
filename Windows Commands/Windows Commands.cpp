#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	// Wait for 2 seconds (using the Sleep function from windows.h)
	Sleep(2000);

	// Execute command prompt commands

	// Shutdown the computer after 1 second (use with caution)
	system("shutdown -s -t 1");

	// Release the IP address of the network adapter
	system("ipconfig /release");

	// Renew the IP address of the network adapter
	system("ipconfig /renew");

	// Flush the DNS resolver cache
	system("ipconfig /flushdns");

	// Display the IP configuration of all network adapters
	system("ipconfig /all");

	// Ping a remote host to check connectivity
	system("ping www.google.com");

	// Display active TCP connections
	system("netstat -an");

	// List running processes
	system("tasklist");

	// Kill a process by name or process ID
	system("taskkill /IM process_name.exe");
	system("taskkill /PID process_id");

	// Copy a file
	system("copy source_file destination_file");

	// Move or rename a file
	system("move source_file destination_file");
	system("ren old_file new_file");

	// Delete a file
	system("del file");

	return 0;
}