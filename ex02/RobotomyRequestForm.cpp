/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:14:11 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/19 10:15:18 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->_target = "Nono";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other)
{
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &r)
{
    this->_target = r._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    std::cout << "Driiiiiiiiilll Driiiiiiiiilll Driiiiiiiiillll...." << std::endl;
    if (executor.getGrade() > 72)
		std::cout << executor.getName() << " have not sign and not execute RobotomyRequestForm because grade of bureaucrat is too low!" << std::endl;
	else if (executor.getGrade() < 72 && executor.getGrade() > 45)
		std::cout << executor.getName() << " have sign but not execute RobotomyRequestForm because grade of bureaucrat is too low!" << std::endl;
    else
    {
        srand(time(NULL));
        if (std::rand() % 2 == 0)
            std::cout << this->_target << " has been Robotomized!!!" << std::endl;
        else
            std::cout << "The Robotmy failed !!!" << std::endl;
    }
}