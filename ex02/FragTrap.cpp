/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:07:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/07 20:21:33 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/
FragTrap::FragTrap()
{
    this->_name = "none";
    this->_hit_p = 100;
    this->_energy_p = 100;
    this->_attack_p = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hit_p = 100;
    this->_energy_p = 100;
    this->_attack_p = 30;
    std::cout << "FragTrap Parameter constroctur called" << std::endl;
}
FragTrap::FragTrap(FragTrap const & ob)
{
     std::cout << "FragTrap Copy constroctur called" << std::endl;
     *this = ob;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called " << std::endl;
}

/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

FragTrap & FragTrap::operator=(FragTrap const & ob)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->_name = ob.getName();
    this->_hit_p = ob.getHP();
    this->_energy_p = ob.getEP();
    this->_attack_p = ob.getAP();
    return (*this);
}

/********************************************************************/


/********************************************************************/
/*                          Public functions                        */
/********************************************************************/

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap Hi Fives !!!" << std::endl;
}

/********************************************************************/

std::ostream & operator<<(std::ostream & o, FragTrap const &ref)
{
    std::cout << GRN << "FragTrap a ClapTrap" << WHT << std::endl;
    std::cout << "Name : " << ref.getName() << std::endl; 
    std::cout << "HP : " << ref.getHP() << std::endl;
    std::cout << "EP : " << ref.getEP() << std::endl;
    std::cout << "AP : " << ref.getAP() << std::endl << std::endl;
    return o;
}