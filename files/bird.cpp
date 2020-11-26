#include <iostream>
#include <fstream>
#include "pokemon.hpp"

Bird::Bird(std::string l_PokemonName, int l_PokemonHp) : Pokemon(l_PokemonName, l_PokemonHp)
{}

Bird::Bird(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack, int l_PokemonDefense, int l_PokemonSpeed, int l_specialattack) : Pokemon(l_PokemonName, l_PokemonHp, l_PokemonAttack, l_PokemonDefense, l_PokemonSpeed)
{
    m_specialattack = l_specialattack;
}

Bird::Bird(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack, int l_PokemonDefense, int l_PokemonSpeed, int l_specialattack, int l_specialdefense) : Pokemon(l_PokemonName, l_PokemonHp, l_PokemonAttack, l_PokemonDefense, l_PokemonSpeed)
{
    m_specialattack = l_specialattack;
    m_specialdefense = l_specialdefense;
}

void Bird::setspecialattack (int l_specialattack){
    m_specialattack = l_specialattack;
}

void Bird::setspecialdefense (int l_specialdefense){
    m_specialdefense = l_specialdefense;
}

void Bird::print_xml(){
std::ofstream bird1;
    bird1.open("pokemons.txt", std::ios::app);
    if(!bird1.is_open()){
        std::cout<<"Error open file"<< std::endl;
    }
    else{
        bird1 <<"\t<pokemon name="<< getPokemonName()<<">\n";
        bird1 <<"\t\t<hp>"<< getPokemonHp()<<"</hp>\n";
        bird1 <<"\t\t<attack>"<< getPokemonAttack()<<"</attack>\n";
        bird1 <<"\t\t<defense>"<< getPokemonDefense()<<"</defense>\n";
        bird1 <<"\t\t<speed>"<< getPokemonSpeed()<<"</speed>\n";
        bird1 <<"\t\t<special attack>"<< getspecialattack()<<"</special attack>\n";
        bird1 <<"\t\t<special defense>"<< getspecialdefense()<<"</special defense>\n";
        bird1 <<"\t</pokemon>\n\n";
    }
    bird1.close();
}


void Bird::print(){
    std::string str = "";

    str += (m_PokemonName != "") ? ("BirdName: " + getPokemonName() + "\n") : ("");
    str += (m_PokemonHp) ? ("HP: " + std::to_string(getPokemonHp()) + "\n") : ("");
    str += (m_PokemonAttack) ? ("Attack: " + std::to_string(getPokemonAttack()) + "\n") : ("");
    str += (m_PokemonDefense) ? ("Defense: " + std::to_string(getPokemonDefense()) + "\n") : ("");
    str += (m_PokemonSpeed) ? ("Speed: " + std::to_string(getPokemonSpeed()) + "\n") : ("");
    str += (m_specialattack) ? ("SpecialAttack: " + std::to_string(getspecialattack()) + "\n") : ("");
    str += (m_specialdefense) ? ("SpecialDefense: " + std::to_string(getspecialdefense())+ "\n") : ("");


    std::cout << str;
}
