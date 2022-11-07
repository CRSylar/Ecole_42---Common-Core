/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:01:06 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/18 16:12:01 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

/* ************************************************************************** */
template <typename T>
MutantStack<T>::MutantStack(void) :
	std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src) :
	std::stack<T>(src)
{}

template <typename T>
MutantStack<T>::~MutantStack(void)
{}
/* ************************************************************************** */
template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& src)
{
	this->c = src.c;
	return *this;
}

/* ************************************************************************** */
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin(void) const
{
	return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend(void) const
{
	return this->c.rend();
}