#include <iostream>

void to_lower(char* str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        ++str;
    }
}

void to_upper(char* str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        ++str;
    }
}

int main()
{
    constexpr int max_len = 1000;
    char str[max_len];

    std::cin.getline(str, max_len);

    char lowercase[max_len];
    strcpy(lowercase, str);

    char uppercase[max_len];
    strcpy(uppercase, str);

    to_lower(lowercase);

    to_upper(uppercase);

    std::cout << lowercase << '\n';
    std::cout << uppercase << '\n';

    return 0;
}
