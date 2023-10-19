/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:35 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/19 10:05:06 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	this->_target = "Francois Hollande";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
	this->_target = p._target;
	return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > 25)
		std::cout << executor.getName() << " have not sign and not execute PresidentialPardonForm in because grade of bureaucrat is too low!" << std::endl;
	else if (executor.getGrade() < 25 && executor.getGrade() > 5)
		std::cout << executor.getName() << " have sign but not execute PresidentialPardonForm in because grade of bureaucrat is too low!" << std::endl;
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beedblebrox." << std::endl;
}