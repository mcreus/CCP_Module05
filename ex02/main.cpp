/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:39:21 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/18 13:24:22 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "----------------------1------------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat("Jack", 1);
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "-----------------------2-----------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat2("lolo", 150);
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.incrementGrade();
		std::cout << bureaucrat2 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "------------------------3----------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	badbureaucrat("Will", 0);
		std::cout << badbureaucrat << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << std::endl;
	std::cout << "-------------------------4---------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	badbureaucrat2("Jane", 151);
		std::cout << badbureaucrat2 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "---------------------------5-------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat4("Paul", 150);
		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.decrementGrade();
		std::cout << bureaucrat4 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "-------------------------6---------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat5("toto", 1);
		PresidentialPardonForm	president;
		RobotomyRequestForm		robotomy;
		ShrubberyCreationForm	shrubbery;
		std::cout << bureaucrat5 << std::endl;
		bureaucrat5.executeForm(president);
		bureaucrat5.executeForm(robotomy);
		bureaucrat5.executeForm(shrubbery);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "------------------------7----------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat6("tata", 140);
		PresidentialPardonForm	president;
		RobotomyRequestForm		robotomy;
		ShrubberyCreationForm	shrubbery;
		std::cout << bureaucrat6 << std::endl;
		bureaucrat6.executeForm(president);
		bureaucrat6.executeForm(robotomy);
		bureaucrat6.executeForm(shrubbery);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "-------------------------8---------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	bureaucrat7("tutu", 50);
		PresidentialPardonForm	president;
		RobotomyRequestForm		robotomy;
		ShrubberyCreationForm	shrubbery;
		std::cout << bureaucrat7 << std::endl;
		bureaucrat7.executeForm(president);
		bureaucrat7.executeForm(robotomy);
		bureaucrat7.executeForm(shrubbery);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "-------------------------9---------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat8("toutou", 20);
		PresidentialPardonForm	president;
		RobotomyRequestForm		robotomy;
		ShrubberyCreationForm	shrubbery;
		std::cout << bureaucrat8 << std::endl;
		bureaucrat8.executeForm(president);
		bureaucrat8.executeForm(robotomy);
		bureaucrat8.executeForm(shrubbery);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;
	
	return (0);
}