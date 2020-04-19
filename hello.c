#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n"); //Accepting Name of User
    printf("hello, %s\n", name); //Sayinh Hello to the user with his/her name
}
