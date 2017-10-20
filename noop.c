#include <unistd.h>

int main()
{
	// close standard file descriptors
	close(STDIN_FILENO);
	close(STDOUT_FILENO);
	close(STDERR_FILENO);

	// wait forever
	while(1) {
		sleep(1000);
	}
}
