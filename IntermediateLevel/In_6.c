#include <stdio.h>
#include <string.h>
#include <ctype.h> //used this for isprint() function so that only printable characters are taken into count

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // removes newline
    for (int i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;
    printf("Character frequencies\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i])
        {
            if (isprint(i))
                printf("%c\t %d\n", i, freq[i]);
            else
                printf("Non printable %d\n", freq[i]);
        }
    }

    return 0;
}
