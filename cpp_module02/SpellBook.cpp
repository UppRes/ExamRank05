#include "SpellBook.hpp"
#include "ASpell.hpp"

void SpellBook::learnSpell(ASpell *mag)
{
    std::map<std::string, ASpell *>::iterator it = spell.find(mag->getName());

    if (it == spell.end())
        spell[mag->getName()] = mag->clone();
}

void SpellBook::forgetSpell(const std::string &magname)
{
    std::map<std::string, ASpell *>::iterator it = spell.find(magname);

    if (it != spell.end())
    {
        delete it->second;
        spell.erase(magname);
    }
}

ASpell *SpellBook::createSpell(const std::string &magname)
{
    std::map<std::string, ASpell *>::iterator it = spell.find(magname);

    if (it != spell.end())
        return (it->second->clone());
    return nullptr;
}

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
    spell.clear();
}
