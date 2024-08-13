#ifndef TERM_HPP
# define TERM_HPP
# include <string>
# include <vector>

class Term
{
	public:
		Term(std::string newTerm, bool ispositive);
		~Term();
		class	EmptyValue : public std::exception {const char *what() const throw();};
		void	ParseAndAdd(std::string val, bool ispositive);
		Term	&operator+=(const Term& rhs);
		int		getExponent();
		long	getValue();
	private:
		int	_exponent = -1;
		long	_value = 0;
		Term();

};

enum	Steps
{
	Sign,
	Multiplicator,
	Multiplication,
	X,
	Power,
	Exponent,
	End
};

#endif