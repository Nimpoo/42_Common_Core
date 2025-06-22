/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:42:34 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/04 11:56:57 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>

# include "AMateria.hpp"

class IMateriaSource {

public:

	virtual			~IMateriaSource( void ) {};
	virtual void	learnMateria( AMateria* ) = 0;
	virtual			AMateria* createMateria( std::string const & type ) = 0;

};

#endif
