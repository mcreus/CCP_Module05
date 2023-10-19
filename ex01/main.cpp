/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:39:21 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/19 10:11:06 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "---------------------1-------------------" << std::endl;
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
	std::cout << "--------------------2--------------------" << std::endl;
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
	std::cout << "--------------------3--------------------" << std::endl;
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
	std::cout << "---------------------4-------------------" << std::endl;
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
	std::cout << "----------------------5------------------" << std::endl;
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
	std::cout << "----------------------6------------------" << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat	bureaucrat5("toto", 1);
		std::cout << bureaucrat5 << std::endl;
		bureaucrat5.incrementGrade();
		std::cout << bureaucrat5 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "----------------------7------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	bureaucrat6("nico", 29);
		std::cout << bureaucrat6 << std::endl;
		Form	form("Noel", 40, 30);
		std::cout << form << std::endl;
		std::cout << bureaucrat6.signForm(form) << std::endl;
		std::cout << bureaucrat6 << " have been downgrade!!!" << std::endl;
		bureaucrat6.decrementGrade();
		std::cout << "New grade : " << bureaucrat6 << std::endl;
		std::cout << bureaucrat6.signForm(form) << std::endl;
		std::cout << bureaucrat6 << " have been downgrade!!!" << std::endl;
		bureaucrat6.decrementGrade();
		std::cout << "New grade : " << bureaucrat6 << std::endl;
		std::cout << bureaucrat6.signForm(form) << std::endl;
		Form	form2("Joyeux", 151, 30);
		std::cout << form2 << std::endl;
		std::cout << bureaucrat6.signForm(form2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;
	
	return (0);
}