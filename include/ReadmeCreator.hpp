/*
** EPITECH PROJECT, 2021
** ReadMeCreator
** File description:
** ReadmeCreator
*/

#ifndef READMECREATOR_HPP_
#define READMECREATOR_HPP_

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class ReadmeCreator {
    public:
        ReadmeCreator();
        ~ReadmeCreator();
        /**
         * Set the field Description
         * @param string description
         */
        void setDescription(string &);
        /**
         * Set the field ProjectName
         * @param string projectName
         */
        void setProjectName(string &);
        /**
         * Set the field PreRequisite
         * @param string preRequisite
         */
        void setPreRequisite(string &);
        /**
         * Set the field HowToBuild
         * @param string howToBuild
         */
        void setHowToBuild(string &);
        /**
         * Set the field Authors
         * @param string authors
         */
        void setAuthors(string &);
        /**
         * Set the field CodingStyle
         * @param string codingStyle
         */
        void setCodingStyle(string &);
        /**
         * Set the field BeforeContinue
         * @param string beforeContinue
         */
        void setBeforeContinue(string &);
        /**
         * Set the field isThereAGif
         * @param bool isThereAGif
         */
        void setThereAGif(bool);
        /**
         * get the field Description
         * @return string
         */
        string getDescription() const;
        /**
         * get the field ProjectName
         * @return string
         */
        string getProjectName() const;
        /**
         * get the field PreRequisite
         * @return string
         */
        string getPreRequisite() const;
        /**
         * get the field HowToBuild
         * @return string
         */
        string getHowToBuild() const;
        /**
         * get the field Authors
         * @return string
         */
        string getAuthors() const;
        /**
         * get the field CodingStyle
         * @return string
         */
        string getCodingStyle() const;
        /**
         * get the field BeforeContinue
         * @return string
         */
        string getBeforeContinue() const;
        /**
         * get the field isThereAGif
         * @return bool
         */
        bool getThereIsAGif() const;
        /**
         * Create the Readme.MD file
         */
        void createReadme() const;
        /**
         * Show every informations
         */
        void dump() const;
        /**
         * Reset every field
         */
        void reset();

    protected:
    private:
        string _projectName;
        string _beforeContinue;
        string _description;
        string _prerequisite;
        string _howToBuild;
        string _codingStyle;
        string _authors;
        bool _isThereAGif;
};

#endif /* !READMECREATOR_HPP_ */
