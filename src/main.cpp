/*
** EPITECH PROJECT, 2021
** ReadMeCreator
** File description:
** main
*/

#include "Prompt.hpp"
#include <cstring>

int printUsage(void)
{
    std::printf("This ReadmeCreator has been made by Benjamin HENRY.\n\
To create your README.md you'll just have to follow the steps which will appear.\n\n\
It would be great for me if you stared my project ! Do --github for that !\n");
    return (0);
}

int openGithub(void)
{
    system("x-www-browser https://github.com/EternalRat/ReadmeCreator");
    return (0);
}

int printVersion(void)
{
    std::printf("This ReadmeCreator is actually in v1.0.0.\n");
    return (0);
}

int main(int ac, char **av)
{
    std::unique_ptr<Prompt> prompt = std::make_unique<Prompt>();

    if (ac == 2 && std::strcmp(av[1], "--usage") == 0)
        return (printUsage());
    else if (ac == 2 && std::strcmp(av[1], "--github") == 0)
        return (openGithub());
    else if (ac == 2 && std::strcmp(av[1], "--version") == 0)
        return (printVersion());
    prompt->runPrompt();
    return (0);
}