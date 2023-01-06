/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 04:17:42 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 04:20:21 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void menu()
{
    std::cout << "==========================" << std::endl;
    std::cout << "| 1. Add new contact     |" << std::endl;
    std::cout << "| 2. Search a contact    |" << std::endl;
    std::cout << "| 3. Exit                |" << std::endl;
    std::cout << "==========================" << std::endl;

}

int check_override(int i)
{
    if (i == 8)
    {
        std::cout << "I have to override the latest entry sorry :(" << std::endl;
        return (0);
    }
    return (i);
}

std::string getStringForContactArgument()
{
    std::string str;
    std::cin.clear();
    fflush(stdin);
    std::getline(std::cin, str);
    return (str);
}

void add_contact(PhoneBook *pb)
{
    pb->i = check_override(pb->i);
    std::cout << "\nPlease enter first name: ";
    pb->contacts[pb->i].first_name = getStringForContactArgument();

    std::cout << "\nPlease enter last name: ";
    pb->contacts[pb->i].last_name = getStringForContactArgument();

    std::cout << "\nPlease enter nick name: ";
    pb->contacts[pb->i].nick_name = getStringForContactArgument();

    std::cout << "\nPlease enter phone number: ";
    pb->contacts[pb->i].phone_number = getStringForContactArgument();

    std::cout << "\nPlease enter darkest secret: ";
    pb->contacts[pb->i].darkest_secret = getStringForContactArgument();

    pb->i++;
}

void    shortstring(std::string str)
{
    std::cout << std::right << std::setw(10) << str.substr(0, 10) << "|";
}

void    shortstring_PhoneBook(PhoneBook *pb, int i)
{
    std::cout << i << " - ";
    shortstring(pb->contacts[i].first_name);
    shortstring(pb->contacts[i].last_name);
    shortstring(pb->contacts[i].nick_name);
    shortstring(pb->contacts[i].phone_number);
    shortstring(pb->contacts[i].darkest_secret);
    std::cout << std::endl;
}

void show_detail(PhoneBook *pb, int i)
{
    std::cout << "First name: " << pb->contacts[i].first_name << "\nLast name: " << pb->contacts[i].last_name << "\nNick name: " << pb->contacts[i].nick_name << "\nPhone number: "<<pb->contacts[i].phone_number << "\nDarkest secret: " <<pb->contacts[i].darkest_secret << std::endl;
}

void seeInDetail(PhoneBook *pb)
{
    int a;
    std::cout << "Chose the index that you would like to see in detail."<< std::endl;
    a = pb->getNumInput();
    if (a == -1)
        return ;
    if ((a < 8 && a >= 0) && pb->contacts[a].first_name != "")
        show_detail(pb, a);
    else
        std::cout << ":(" << std::endl;
}

void show_contacts(PhoneBook *pb)
{
    int i = 0;
    int a;
    while (pb->contacts[i].first_name != "" && i < 8)
        shortstring_PhoneBook(pb, i++);
    std::cout << "Would you like to see in detail. (1)"<< std::endl;
    a = pb->getNumInput();
    if (a == -1)
        return ;
    else if (a == 1)
        seeInDetail(pb);
}

void main_switch(int a, PhoneBook *pb)
{
        switch (a)
        {
            case 1:
                add_contact(pb);
                break;
            case 2:
                std::cout << "          Name|   Surname|      Nick|     Phone|    Secret|" << std::endl;
                show_contacts(pb);
                break;
            case 3:
                exit(1);
            default:
                std::cout << "Warning bak gelmeyim oraya" << std::endl;
                break;
        };
}


int main(void)
{
    PhoneBook pb;
    pb.i = 0;
    while (1)
    {
        menu();
        int a = pb.getNumInput();
        if (a != -1)
            main_switch(a, &pb);
    }
    return (0);
}