#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define MAX_LINE 1024
#define MAX_USER 50
#define MAX_CMD  256
struct process_info {
    char user[MAX_USER];
    int pid;
    float cpu;
    float mem;
    int lwp;
    int nlwp;
    char command[MAX_CMD];
};
void generate_files();
void merge_files();
void display_output();

int main() {

    generate_files();
    merge_files();
    display_output();

    return 0;
}

void generate_files() {

    system("ps aux > x1.txt");
    system("ps -eLf > x2.txt");
}