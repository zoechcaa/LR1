#pragma once
#include <string>


class Pokemon {
    protected:
        std::string m_PokemonName;
        int m_PokemonHp;
        int m_PokemonAttack;
        int m_PokemonDefense;
        int m_PokemonSpeed;


    public:
        Pokemon();
        Pokemon(std::string);
        Pokemon(std::string, int);
        Pokemon(std::string, int, int);
        Pokemon(std::string, int, int, int);
        Pokemon(std::string, int, int, int, int);

        ~Pokemon();

        void setPokemonName(std::string l_PokemonName);
        std::string getPokemonName(){return m_PokemonName;};

        void setPokemonHp(int l_PokemonHp);
        int getPokemonHp(){return m_PokemonHp;};

        void setPokemonAttack(int l_PokemonAttack);
        int getPokemonAttack(){return m_PokemonAttack;};

        void setPokemonDefense(int l_PokemonDefense);
        int getPokemonDefense() {return m_PokemonDefense;};

        void setPokemonSpeed(int l_PokemonSpeed);
        int getPokemonSpeed(){return m_PokemonSpeed;};

        void print();
};

class Cat : public Pokemon
{
    private:
        int m_specialattack;
        int m_specialdefense;

    public:
        Cat(int, int);
        Cat (std::string, int);
        Cat(std::string, int, int, int, int, int);
        Cat(std::string, int, int, int, int, int, int);


        void setspecialattack (int l_specialattack);
        int getspecialattack(){return m_specialattack;};

        void setspecialdefense (int l_specialdfense);
        int getspecialdefense(){return m_specialdefense;};

        void print();
        void print_xml();

};

class Bird : public Pokemon
{
    private:
        int m_specialattack;
        int m_specialdefense;

    public:
        Bird(int, int);
        Bird(std::string, int);
        Bird(std::string, int, int, int, int, int);
        Bird(std::string, int, int, int, int, int, int);

        void setspecialattack (int l_specialattack);
        int getspecialattack(){return m_specialattack;};

        void setspecialdefense (int l_specialdfense);
        int getspecialdefense(){return m_specialdefense;};

        void print();
        void print_xml();

};


class Pikachu : public Pokemon
{
    private:
        int m_specialattack;
        int m_specialdefense;

    public:
        Pikachu(int, int);
        Pikachu(std::string, int);
        Pikachu(std::string, int, int, int, int, int);
        Pikachu(std::string, int, int, int, int, int, int);

        void setspecialattack (int l_specialattack);
        int getspecialattack(){return m_specialattack;};

        void setspecialdefense (int l_specialdefense);
        int getspecialdefense(){return m_specialdefense;};

        void print();
        void print_xml();

};
