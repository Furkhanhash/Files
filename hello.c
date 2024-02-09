#include <stdio.h>
#include <sys/utsname.h>

int main(void) {
    struct utsname sysInfo;
    
    // Retrieve system information
    if (uname(&sysInfo) == -1) {
        perror("uname");
        return 1;
    }
    
    // Print system information along with student name
    printf("Hello, World!\n");
    printf("System Name: %s\n", sysInfo.sysname);
    printf("Node Name:   %s\n", sysInfo.nodename);
    printf("Machine:     %s\n", sysInfo.machine);
    printf("Student Name: Shubham Milind Kasar\n");
    
    return 0;
}

