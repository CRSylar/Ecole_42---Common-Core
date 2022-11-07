/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:49:56 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/18 16:08:26 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack<T>& src);
		~MutantStack(void);

		MutantStack<T>&	operator=(const MutantStack<T>& src);

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator					begin(void);
		iterator					end(void);
		const_iterator				begin(void) const;
		const_iterator				end(void) const;
		reverse_iterator			rbegin(void);
		reverse_iterator			rend(void);
		const_reverse_iterator		rbegin(void) const;
		const_reverse_iterator		rend(void) const;
	private:
};

# include "mutantstack.cpp"

#endif