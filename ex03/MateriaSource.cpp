#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _count = 0;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] != NULL)
            delete _materia[i];
    }
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
    _count = copy._count;
    for (int i = 0; i < 4; i++)
    {
        if (copy._materia[i] != NULL)
            _materia[i] = copy._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &variable)
{
    _count = variable._count;
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] != NULL)
            delete _materia[i];
        if (variable._materia[i] != NULL)
            _materia[i] = variable._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_count < 4)
    {
        _materia[_count++] = m->clone();
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i]->getType() == type)
		{
            return _materia[i]->clone();
		}
    }
    return NULL;
}

