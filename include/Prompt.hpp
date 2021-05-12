/*
** EPITECH PROJECT, 2021
** ReadMeCreator
** File description:
** Prompt
*/

#ifndef PROMPT_HPP_
#define PROMPT_HPP_

#include "ReadmeCreator.hpp"
#include <memory>
#include <vector>
#include <functional>

using namespace std;

class Prompt {
    public:
        Prompt();
        ~Prompt();
        void runPrompt();

    protected:
    private:
        unique_ptr<ReadmeCreator> _readmeCreator;
        using Func = std::function<void(Prompt &, std::string)>;
        vector<string> _questions;
        vector<Func> _functions;
        void getQuestionOne(std::string);
        void getQuestionTwo(std::string);
        void getQuestionThree(std::string);
        void getQuestionFour(std::string);
        void getQuestionFive(std::string);
        void getQuestionSix(std::string);
        void getQuestionSeven(std::string);
};

#endif /* !PROMPT_HPP_ */
