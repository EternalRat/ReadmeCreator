/*
** EPITECH PROJECT, 2021
** ReadMeCreator
** File description:
** ReadmeCreator
*/

#include "ReadmeCreator.hpp"

ReadmeCreator::ReadmeCreator()
{
    this->_isThereAGif = false;
}

ReadmeCreator::~ReadmeCreator()
{
}

void ReadmeCreator::setDescription(string &desc)
{
    this->_description.append(desc);
}

void ReadmeCreator::setProjectName(string &name)
{
    this->_projectName = name;
}

void ReadmeCreator::setPreRequisite(string &prerequisite)
{
    this->_prerequisite.append(prerequisite);
}

void ReadmeCreator::setHowToBuild(string &howToBuild)
{
    this->_howToBuild.append(howToBuild);
}

void ReadmeCreator::setAuthors(string &author)
{
    this->_authors.append(author);
}

void ReadmeCreator::setBeforeContinue(string &beforeContinue)
{
    this->_beforeContinue.append(beforeContinue);
}

void ReadmeCreator::setCodingStyle(string &codingStyle)
{
    this->_codingStyle.append(codingStyle);
}

void ReadmeCreator::setThereAGif(bool isThereAGif)
{
    this->_isThereAGif = isThereAGif;
}

string ReadmeCreator::getDescription() const
{
    return (this->_description);
}

string ReadmeCreator::getProjectName() const
{
    return (this->_projectName);
}

string ReadmeCreator::getPreRequisite() const
{
    return (this->_prerequisite);
}

string ReadmeCreator::getHowToBuild() const
{
    return (this->_howToBuild);
}

string ReadmeCreator::getAuthors() const
{
    return (this->_authors);
}

string ReadmeCreator::getBeforeContinue() const
{
    return (this->_beforeContinue);
}

string ReadmeCreator::getCodingStyle() const
{
    return (this->_codingStyle);
}

bool ReadmeCreator::getThereIsAGif() const
{
    return (this->_isThereAGif);
}

void ReadmeCreator::createReadme() const
{
    ofstream readMe("README.md");

    readMe << "# " << this->_projectName << endl << endl;
    readMe << this->_description << endl << endl;
    if (!this->_beforeContinue.empty()) {
        readMe << "### Before Continuing..." << endl << endl;
        readMe << this->_beforeContinue << endl << endl;
        if (this->_isThereAGif) {
            readMe << "![Alt Text](https://media.tenor.com/images/7d000f9dd411ef6c7c7f503ac14581a6/tenor.gif)" << endl << endl;
        }
    }
    readMe << "### Prerequisites" << endl << endl;
    readMe << this->_prerequisite << endl << endl;
    readMe << "### How to build this program" << endl << endl;
    readMe << this->_howToBuild << endl << endl;
    if (!this->_codingStyle.empty()) {
        readMe << "### Coding Style" << endl << endl;
        readMe << this->_codingStyle << endl << endl;
    }
    readMe << "### Authors" << endl << endl;
    readMe << this->_authors << endl << endl;
    readMe << "This README has been made with ReadmeCreator. Here's the repository github : [https://github.com/EternalRat/ReadmeCreator](ReadmeCreator)" << endl; 
}

void ReadmeCreator::dump() const
{
    cout << "Are those information correct ? Type [y/n]" << endl;
    cout << "--------------------------------------------------" << std::endl;
    cout << "Project name : " << this->_projectName << endl;
    cout << this->_description << endl;
    if (!this->_beforeContinue.empty()) {
        cout << "Before Continuing : " << this->_beforeContinue << endl;
        if (this->_isThereAGif)
            cout << "Gif : Yes" << endl;
        else
            cout << "Gif : No" << endl;
    }
    cout << "Prerequisites : " << this->_prerequisite << endl;
    cout << "How to build this program : " << this->_howToBuild << endl;
    if (!this->_codingStyle.empty()) {
        cout << "Coding Style : " << this->_codingStyle << endl;
    }
    cout << "Authors : " << this->_authors << endl;
    cout << "--------------------------------------------------" << std::endl;
}

void ReadmeCreator::reset()
{
    this->_authors.clear();
    this->_beforeContinue.clear();
    this->_codingStyle.clear();
    this->_description.clear();
    this->_howToBuild.clear();
    this->_isThereAGif = false;
    this->_prerequisite.clear();
    this->_projectName.clear();
}