#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

const std::string &Warlock::getName() const
{
    return (this->name);
}

const std::string &Warlock::getTitle() const
{
    return (this->title);
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *mag)
{
    std::map<std::string, ASpell *>::iterator it = spell.find(mag->getName());

    if (it == spell.end())
        spell[mag->getName()] = mag->clone();
}

void Warlock::forgetSpell(std::string magname)
{
    std::map<std::string, ASpell *>::iterator it = spell.find(magname);

    if (it != spell.end())
    {
        delete it->second;
        spell.erase(magname);
    }
}

void Warlock::launchSpell(std::string magname, const ATarget &src)
{
    std::map<std::string, ASpell *>::iterator it = spell.find(magname);

    if (it != spell.end())
        it->second->launch(src);
}

Warlock::Warlock(const std::string &name, const std::string &title):name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}
