/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:34:22 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:29:01 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
AMateria::AMateria( void ) : _type( "basic_materia" ) { }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
AMateria::AMateria( std::string const &type ) : _type( type ) { }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
AMateria::AMateria( AMateria const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
AMateria::~AMateria( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	AMateria::use( ICharacter &target ) {

	std::cout << "---> ABSTRACT MATERIA : " << this->_type << " is used on " << target.getName() << "." << std::endl;
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string const   &AMateria::getType( void ) const { return ( this->_type ); }
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
AMateria    &AMateria::operator=( AMateria const &rhs ) {

	this->_type = rhs._type;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, AMateria const &i ) {

	o << i.getType();

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
