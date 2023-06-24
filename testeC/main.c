#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    clock_t start = clock();

    // Code or script to be timed
    // ...

    // Command to be executed
    const char *command = "echo OPAA";
    printf("EXECUTION STARTED\n");

    // Execute the command
    int result = system(command);

    // Check the result
    if (result == -1)
    {
        // Failed to execute the command
        printf("Command execution failed.\n");
    }
    else
    {
        // Command executed successfully
        printf("Command executed successfully.\n");
    }

    int a = 0;
    for (int j = 0; j < 1000; j++)
    {
        for (int i = 0; i < 1000000; i++)
        {
            a++;
            
        }
        printf("%d \n",a);
    }
    printf("%d \n", a);

    // End the timer
    clock_t end = clock();

    // Calculate the elapsed time in seconds
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;

    // Print the elapsed time
    printf("Elapsed time: %.5f seconds\n", elapsed_time);
}
