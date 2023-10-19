/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:01:04 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/18 18:39:31 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	this->_name = name;
	this->_grade = grade;
	checkGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &b)
{
	this->_name = b._name;
	this->_grade = b._grade;
	return (*this);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::checkGrade(int grade) const
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::incrementGrade()
{
	this->_grade--;
	checkGrade(this->_grade);
}

void	Bureaucrat::decrementGrade()
{
	this->_grade++;
	checkGrade(this->_grade);
}

std::string	Bureaucrat::signForm(AForm &form)
{
	return (form.beSigned(*this));
}

void		Bureaucrat::executeForm(AForm const &form)
{
	form.execute(*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();

	return (o);
}