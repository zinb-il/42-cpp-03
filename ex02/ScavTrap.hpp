/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:15:22 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/07 18:24:42 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & ob);
        ~ScavTrap();

        ScavTrap &  operator=(ScavTrap const & ob);
        void        attack(const std::string& target);
        void        guardGate(void) const;
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & ref);

#endif