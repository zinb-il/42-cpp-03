/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:34:54 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 12:42:41 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.h"

class FragTrap : public  ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & ob);

        FragTrap &  operator=(FragTrap const & ob);
        void        attack(const std::string & target);
        void        highFivesGuys(void) const;
};

std::ostream & operator<<(std::ostream & o, FragTrap const & ref);

#endif