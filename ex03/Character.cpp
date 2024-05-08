#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    std::cout << "Character Default Constructor called\n";
}

Character::~Character()
{
    std::cout << "Character Destructor called\n";
    for (int i = 0; i < 4; i++)
    {
        if (_readyMateria[i] != NULL)
		{
            delete _readyMateria[i];
		}
    }
}

Character::Character(Character &copy)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = copy;
}

Character &Character::operator=(const Character &variable)
{
    _name = variable._name;
    for (int i = 0; i < 4; i++)
    {
        if (variable._readyMateria[i])
            _readyMateria[i] = variable._readyMateria[i]->clone();
    }
    std::cout << "Character Assignment operator = called\n";
    return *this;
}

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "Character constructor called for " << name << std::endl;
    for (int i = 0; i < 4; i++)
        _readyMateria[i] = NULL;
}

std::string const &Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
            if (_readyMateria[i] == NULL)
            {
                _readyMateria[i] = m->clone();
				return;
            }
    }
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _readyMateria[idx] != NULL)
	{
		delete _readyMateria[idx];
		_readyMateria[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _readyMateria[idx] != NULL)
		_readyMateria[idx]->use(target);
}

