/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:39:49 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/16 18:40:37 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	this->_signed = false;
}

Form::Form(std::string const &name, int grade, int gradeToSign)
{
	this->_name = name;
	this->_grade = grade;
	this->_gradeToSign = gradeToSign;
	checkGradeForm(grade);
}

Form::Form(Form const &other)
{
	*this = other;
}

Form::~Form()
{
	
}

Form	&Form::operator=(Form const &f)
{
	this->_grade = f._grade;
	this->_gradeToSign = f._gradeToSign;
	this->_name = f._name;
	this->_signed = f._signed;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGrade() const
{
	return (this->_grade);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

std::string	Form::seeSign() const
{
	if (this->_signed == true)
		return("signed");
	else
		return ("not signed");
}

std::string	Form::beSigned(Bureaucrat &bureaucrat)
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
		throw	GradeTooLowException();
	}
	else
	{
		this->_signed = true;
		str.append(bureaucrat.getName());
		str.append(" signed form ");
		str.append(this->_name);
		str.append("\n");
		return (str);
	}
}

void	Form::checkGradeForm(int grade) const
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

std::ostream	&operator<<(std::ostream &o, Form const &f)
{
	o << f.getName() << ", form grade " << f.getGrade() << ", " << f.seeSign() << ", Bureaucrat take to have " << f.getGradeToSign() << " grade or less to sign form.";
	return (o);
}