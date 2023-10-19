#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Intern
{
	public:

		Intern();
		Intern(Intern const &other);
		~Intern();
		Intern  &operator=(Intern const &);
		AForm	*makeForm(std::string const &form, std::string const &target);
		int		checkTarget(std::string const &target);
		int		getForm(std::string const &form) const;
		class InternException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Intern don't create form !");
			}
		};

	private:

		ShrubberyCreationForm	_shrubbery;
		RobotomyRequestForm		_robotomy;
		PresidentialPardonForm	_pardon;

};

#endif