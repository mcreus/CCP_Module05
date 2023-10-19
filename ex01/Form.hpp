#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class   Form
{
	public:

		Form();
		Form(std::string const &name, int grade, int gradeToSign);
		Form(Form const &other);
		~Form();
		Form						&operator=(Form const &f);
		std::string					getName() const;
		bool						getSigned() const;
		int							getGrade() const;
		int							getGradeToSign() const;
		std::string					seeSign() const;
		std::string					beSigned(Bureaucrat &bureaucrat);
		void							checkGradeForm(int grade) const;
		class GradeTooHighException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Grade of Form is too hight !");
        	}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Grade of Form is too low !");
			}
		};

	private:

		std::string	_name;
		bool		_signed;
		int			_grade;
		int			_gradeToSign;

};

std::ostream	&operator<<(std::ostream &o, Form const &f);

#endif