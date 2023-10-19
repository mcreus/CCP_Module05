/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:54 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/19 10:15:29 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	this->_target = "Santa cruz";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s)
{
	this->_target = s._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 145)
		std::cout << executor.getName() << " have not sign and not execute ShrubberyCreationForm because grade of bureaucrat is too low!" << std::endl;
	else if (executor.getGrade() < 145 && executor.getGrade() > 137)
		std::cout << executor.getName() << " have sign but not execute ShrubberyCreationForm because grade of bureaucrat is too low!" << std::endl;
	else
	{
		std::string	file(this->_target + "_shrubbery");
		std::ofstream	file2(file.c_str());
		if(file2)
		{
			file2 << "                  ++                  " << std::endl;
			file2 << "                 +  +                 " << std::endl;
			file2 << "                  ++                  " << std::endl;
			file2 << "                  ||                  " << std::endl;
			file2 << "                  ++                  " << std::endl;
			file2 << "                 ++++                 " << std::endl;
			file2 << "                ++++++                " << std::endl;
			file2 << "               ++++++++               " << std::endl;
			file2 << "              ++++++++++              " << std::endl;
			file2 << "             ++++++++++++             " << std::endl;
			file2 << "            ++++++++++++++            " << std::endl;
			file2 << "           ++++++++++++++++           " << std::endl;
			file2 << "          ------------------          " << std::endl;
			file2 << "                 |  |                 " << std::endl;
			file2 << "                 |  |                 " << std::endl;
			file2 << "            --------------            " << std::endl;
		}
		std::cout << "Writes ASCII trees inside : " << file << std::endl;
	}
}