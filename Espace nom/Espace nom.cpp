// Espace nom.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int a = 10;

using namespace std; // permet d'enlever std, mais il vaut mieux continuer de l'écrire, pour éviter les conflits avec la bibliothèque standart et d'autres bibliothèque


namespace Orange
{
    void DisplayFruit()
    {
        std::cout << "je suis une orange" << std::endl;
    }

    namespace sanguine
    {
        int a = 3;
    }

}
namespace Pomme
{
    void DisplayFruit()
    {
        std::cout << "je suis une Pomme" << std::endl;
    }
}


// using namespace Orange;
// using namespace Pomme;
// Il peut y avoir des conflits

int main()
{
    {
        int a = 2;
        std::cout << a << std::endl; // variable local priorité
    }

    {
        int a = 2;
        std::cout << ::a << std::endl; // variable global priorité
        // operateur de resolution de porté
    }

    // DisplayFruit(); Error, il ne sait pas si il doit appeler Orange ou Pomme

    Orange::DisplayFruit();
    Pomme::DisplayFruit();

    std::cout << Orange::sanguine::a;


}

