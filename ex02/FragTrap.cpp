/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:15:14 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/07 22:46:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "scav default constructor called !" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    ClapTrap::SetHit(100);
    ClapTrap::SetEnery_point(50);
    ClapTrap::SetEnery_point(20);
    std::cout<< "scav constructor called !"<< std::endl;
}

FragTrap::FragTrap(FragTrap &scav){
    *this = scav;
    std::cout<< "scav coppy constructor called !" << std::endl;
}

// FragTrap& FragTrap::operator = (const FragTrap &comming){
//     Name = comming.Name;
//     Hit= comming.Hit;
//     Energy_points = comming.Energy_points;
//     Attack_damage = comming.Attack_damage;
//     std::cout<< "scav assigne called" << std::endl;
//     return (*this);
// }

FragTrap::~FragTrap(){
    std::cout<< "scav destructor called !" << std::endl;
}

void FragTrap::guardGate(void){
    std::cout<< "FragTrap is now in Gate keeper mode" << std::endl;
}
