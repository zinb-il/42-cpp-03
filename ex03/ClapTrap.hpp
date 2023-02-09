/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:30:50 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 11:25:06 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "ClapTrap.h"

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hit_p;
        unsigned int    _energy_p;
        unsigned int    _attack_p;
    public:
        ClapTrap();
        virtual ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &ob);
        ClapTrap & operator=(ClapTrap const &ob);
        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        std::string     getName(void) const;
        unsigned int    getHP(void) const;
        unsigned int    getEP(void) const;
        unsigned int    getAP(void) const;
        void            setName(std::string name);
        void            setHP(unsigned int hp);
        void            setEP(unsigned int ep);
        void            setAP(unsigned int ap);
};

std::ostream & operator<<(std::ostream & o, ClapTrap const &ref);

#endif