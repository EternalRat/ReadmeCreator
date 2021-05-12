/*
** EPITECH PROJECT, 2021
** ReadmeCreator
** File description:
** Prompt
*/

#include "Prompt.hpp"

Prompt::Prompt()
{
    this->_readmeCreator = std::make_unique<ReadmeCreator>();
    this->_questions = {
        {"What is your project name ?"},
        {"What is your project description ?"},
        {"Do you want to say something before continue ? [y/n]"},
        {"What is the prerequisite about your project ?"},
        {"How can we build your project ?"},
        {"Did you follow a coding style on your project ? [y/n]"},
        {"What are the authors name ?"}
    };
    this->_functions = {
        &Prompt::getQuestionOne,
        &Prompt::getQuestionTwo,
        &Prompt::getQuestionThree,
        &Prompt::getQuestionFour,
        &Prompt::getQuestionFive,
        &Prompt::getQuestionSix,
        &Prompt::getQuestionSeven
    };
}

Prompt::~Prompt()
{
}

void Prompt::runPrompt()
{
    std::string input;
    
    while (true) {
        for (std::size_t i = 0; i < this->_questions.size(); i++) {
            std::cout << this->_questions[i].c_str() << std::endl;
            if (!std::getline(std::cin, input))
                break;
            this->_functions[i](*this, input);
        }
        this->_readmeCreator->dump();
        if (!std::getline(std::cin, input))
            break;
        if (input == "y" || input == "yes")
            break;
        this->_readmeCreator->reset();
    }
    this->_readmeCreator->createReadme();
}

void Prompt::getQuestionOne(std::string buffer)
{
    this->_readmeCreator->setProjectName(buffer);
}

void Prompt::getQuestionTwo(std::string buffer)
{
    this->_readmeCreator->setDescription(buffer);
}

void Prompt::getQuestionThree(std::string buffer)
{
    std::string input;

    if (buffer == "y" || buffer == "yes") {
        std::cout << "What do you want to say ?" << std::endl;
        if (!std::getline(std::cin, input))
            return;
        this->_readmeCreator->setBeforeContinue(input);
        std::cout << "Do you want a gif into your README ? [y/n]" << std::endl;
        if (!std::getline(std::cin, input))
            return;
        if (input == "y" || input == "yes")
            this->_readmeCreator->setThereAGif(true);
    }
}

void Prompt::getQuestionFour(std::string buffer)
{
    this->_readmeCreator->setPreRequisite(buffer);
}

void Prompt::getQuestionFive(std::string buffer)
{
    this->_readmeCreator->setHowToBuild(buffer);
}

void Prompt::getQuestionSix(std::string buffer)
{
    std::string input;

    if (buffer == "y" || buffer == "yes") {
        std::cout << "Which coding style did you follow ?" << std::endl;
        if (!std::getline(std::cin, input))
            return;
        this->_readmeCreator->setCodingStyle(input);
    }
}

void Prompt::getQuestionSeven(std::string buffer)
{
    this->_readmeCreator->setAuthors(buffer);
}
