#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class   AForm
{
	public:

		AForm();
		AForm(std::string const &name, int gradeToSign, int gradeToExecute);
		AForm(AForm const &other);
		virtual ~AForm();
		AForm						&operator=(AForm const &f);
		std::string					getName() const;
		bool						getSigned() const;
		int							getGrade() const;
		int							getGradeToSign() const;
		int							getGradeToExecute() const;
		std::string					seeSign() const;
		std::string					beSigned(Bureaucrat &bureaucrat);
		void						checkGradeAForm(int grade) const;
		virtual void				execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Grade form is too hight !");
        	}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Grade form is too low !");
			}
		};

	private:

		std::string	_name;
		bool		_signed;
		int			_grade;
		int			_gradeToSign;
		int			_gradeToExecute;

};

std::ostream	&operator<<(std::ostream &o, AForm const &f);

#endif