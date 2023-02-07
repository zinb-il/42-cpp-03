/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:29:57 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/07 21:48:05 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &ob);
        DiamondTrap & operator=(DiamondTrap const &ob);
        void whoAmI();
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const &ref);

#   endif