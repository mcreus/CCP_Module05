#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat	&operator=(Bureaucrat const &b);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		checkGrade(int grade) const;
		void		incrementGrade();
		void		decrementGrade();
		class GradeTooHighException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Grade is too hight !");
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Grade is too low !");
			}
		};
		
	private:

		std::string			_name;
		int					_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif