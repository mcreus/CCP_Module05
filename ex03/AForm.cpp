/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:39:49 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/16 18:40:37 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{
	this->_signed = false;
}

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute)
{
	this->_name = name;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExecute = gradeToExecute;
	//checkGradeAForm(this->_grade);
}

AForm::AForm(AForm const &other)
{
	*this = other;
}

AForm::~AForm()
{

}

AForm	&AForm::operator=(AForm const &f)
{
	this->_grade = f._grade;
	this->_gradeToSign = f._gradeToSign;
	this->_name = f._name;
	this->_signed = f._signed;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGrade() const
{
	return (this->_grade);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

std::string	AForm::seeSign() const
{
	if (this->_signed == true)
		return("signed");
	else
		return ("not signed");
}

std::string	AForm::beSigned(Bureaucrat &bureaucrat)
{
	std::string	str;
	if (bureaucrat.getGrade() > this->_gradeToSign)
	{
		this->_signed = false;
		str.append(bureaucrat.getName());
		str.append(" couldn't sign ");
		str.append(this->_name);
		str.append(" because Grade of bureaucrat is too low.\n");
		return (str);
	}
	else
	{
		this->_signed = true;
		str.append(bureaucrat.getName());
		str.append(" signed AForm ");
		str.append(this->_name);
		str.append("\n");
		return (str);
	}
}

void	AForm::checkGradeAForm(int grade) const
{
	if (grade < 1)
	{
		throw	GradeTooHighException();
	}
	if (grade > 150)
	{
		throw	GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &o, AForm const &f)
{
	o << f.getName() << ", AForm grade " << f.getGrade() << ", " << f.seeSign() << ", Bureaucrat take to have " << f.getGradeToSign() << " grade or less to sign form.";
	return (o);
}