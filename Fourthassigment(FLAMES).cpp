#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    char name1[50], name2[50];
    char flames[] = "FLAMES";
    int i, j, k, count = 0, index;

    cout << "FLAMES\n";
    cout << "Enter Boy Name: ";
    cin >> name1;
    cout << "Enter Girl Name: ";
    cin >> name2;

    for (i = 0; name1[i]; i++)
        name1[i] = tolower(name1[i]);

    for (i = 0; name2[i]; i++)
        name2[i] = tolower(name2[i]);

    for (i = 0; name1[i]; i++)
    {
        for (j = 0; name2[j]; j++)
        {
            if (name1[i] == name2[j] && name1[i] != ' ')
            {
                name1[i] = ' ';
                name2[j] = ' ';
                break;
            }
        }
    }

    for (i = 0; name1[i]; i++)
        if (name1[i] != ' ')
            count++;

    for (i = 0; name2[i]; i++)
        if (name2[i] != ' ')
            count++;

    int len = strlen(flames);
    index = 0;

    while (len > 1)
    {
        index = (index + count - 1) % len;
        for (k = index; k < len - 1; k++)
            flames[k] = flames[k + 1];
        len--;
    }

    switch (flames[0])
    {
    case 'F':
        printf("Result: Friend\n");
        break;
    case 'L':
        printf("Result: Love\n");
        break;
    case 'A':
        printf("Result: Affection\n");
        break;
    case 'M':
        printf("Result: Marriage\n");
        break;
    case 'E':
        printf("Result: Enemy\n");
        break;
    case 'S':
        printf("Result: Sister\n");
        break;
    }

    return 0;
}
