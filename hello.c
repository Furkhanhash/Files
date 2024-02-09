#include <stdio.h>
#include <sys/utsname.h>

int main(void) {
    struct utsname sysInfo;
    

if (uname(&sysInfo) == -1) {
        perror("uname");
        return 1;
    }

    printf("Hello, World!\n");
    printf("System Name: %s\n", sysInfo.sysname);
    printf("Node Name:   %s\n", sysInfo.nodename);
    printf("Machine:     %s\n", sysInfo.machine);
    printf("\n Student Name: Shubham Milind Kasar");
	printf("\n Student Name: Syedfurkhan Feroz Hashmi");
	printf("\n Student Name: Pratishtha Pant");
	printf("\n Student Name: Suhas Thandaga Ramesh\n");
  
  
    
    return 0;
}

