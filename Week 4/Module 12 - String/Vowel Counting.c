#include <stdio.h>
int main()
{
    char sentence[1000];
    // scanf("%s", sentence);
    // gets(sentence);
    fgets(sentence, sizeof(sentence), stdin);
    int i = 0;
    int counter = 0;
    while (sentence[i] != '\0')
    {
        if (sentence[i] == 'a')
            counter++;
        else if (sentence[i] == 'e')
            counter++;
        else if (sentence[i] == 'i')
            counter++;
        else if (sentence[i] == 'o')
            counter++;
        else if (sentence[i] == 'u')
            counter++;
        i++;
    }
    printf("The number of vowel in this sentence is %d", counter);

    return 0;
}
