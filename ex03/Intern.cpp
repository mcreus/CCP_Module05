/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:27:35 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/19 12:35:01 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern::~Intern()
{
	
}

Intern	&Intern::operator=(Intern const &)
{
	return (*this);
}

AForm	*Intern::makeForm(std::string const &form, std::string const &target)
{
	AForm	*createForm;
	createForm = NULL;
	switch (checkTarget(target))
	{
		case 0:
			switch (getForm(form))
			{
				case 1:
					std::cout << "coucou" << std::endl;
					std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
					createForm = new ShrubberyCreationForm(target);
					break ;
				case 2:
					std::cout << "Intern creates PresidentialPardonForm" << std::endl;
					createForm = new PresidentialPardonForm(target);
					break ;
				case 3:
					std::cout << "Intern creates RobotomyRequestForm" << std::endl;
					createForm = new RobotomyRequestForm(target);
					break ;
				default:
					throw InternException();
					delete (createForm);
			}
			break;
		default:
			throw InternException();
			delete (createForm);	
	}
	return (createForm);
}

int	Intern::checkTarget(std::string const &target)
{ 
	if (target == _shrubbery.getTarget() || target == _pardon.getTarget() || target == _robotomy.getTarget())
		return (0);
	return(-1);
}

int	Intern::getForm(std::string const &form) const
{
	if (form == "shrubbery creation")
		return(1);
	else if (form == "presidential pardon")
		return (2);
	else if (form == "robotomy request")
		return (3);
	return(0);
}