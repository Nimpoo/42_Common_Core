/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:34:25 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:48:13 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public:

/*------------- CONST / DEST --------------*/
	AMateria( void );
	AMateria( std::string const &type );
	AMateria( AMateria const &src );
	virtual ~AMateria( void );

/*---------------- GETERS -----------------*/
	std::string const & getType( void ) const; //Returns the materia type

	virtual AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter &target );

/*----------- OPERATOR OVERLOAD -----------*/
	AMateria	&operator=( AMateria const &rhs );

protected:

	std::string	_type;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, AMateria const &i );

#endif
