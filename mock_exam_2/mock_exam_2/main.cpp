/* SCIPER:
 * NOM :
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <utility>

using namespace std;

// DIVERS OUTILS FOURNIS

// nombre maximal de particules virales
constexpr double MAX_PART_VIR(500000);

// seuil d'erreur sur le nombre de particules
constexpr double ERR_VIR(50);

typedef vector<double> Individu;
typedef vector<Individu> Individus;

/*
 int picSol(const Individu& individu)
 {
 if (individu ==  vector<double>({500, 9.4 })) return 377;
 if (individu ==  vector<double>({400000, 9.2 })) return 381;
 if (individu ==  vector<double>({10000, 9.2 })) return 460;
 if (individu ==  vector<double>({200000, 9.1})) return 482;
 if (individu ==  vector<double>({100000, 9.3})) return 407;
 if (individu ==  vector<double>({300000, 9.2})) return 415;
 return -1;
 }
 */

/*
 void test1()
 {
 cout << "TEST 1: " << endl;
 cout << setprecision(3);
 
 cout << en_jours(48) << endl;
 cout << en_jours(59) << endl;
 
 Individu lambda1 = {200000, 9.1};
 
 cout << croitre(lambda1[0], lambda1[1]) << endl;
 
 cout << en_jours(pic(lambda1)) << endl;
 
 cout << endl;
 }
 */

/*
 void test2(const Individus& individus)
 {
 cout << "TEST 2: " << endl;
 cout << setprecision(3);
 
 afficher(individus);
 
 cout << endl;
 }
 */

/*
 void test3(const Individus& individus, int jourJ)
 {
 Individus echantillon = individus;
 cout << "TEST 3 pour " << jourJ  << " jours : " << endl;
 cout << endl;
 cout << setprecision(3);
 
 Individus pas_sensibles = trier(echantillon, jourJ);
 
 cout << "Individus sensibles au traitement commencé le "
 << jourJ << "ème jour :"
 << endl;
 afficher(echantillon);
 
 cout << endl;
 cout << "Individus non sensibles au traitement commencé le "
 << jourJ
 << "ème jour :"
 << endl;
 
 afficher(pas_sensibles);
 
 cout << endl;
 }
 */


int main()
{
    /*
     //TEST 1
     test1();
     // FIN TEST 1
     */
    
    Individus individus = { {500,    9.4},
        {400000, 9.2},
        {10000,  9.2},
        {200000, 9.1},
        {100000, 9.3},
        {300000, 9.2}
    };
    
    /*
     // TEST 2
     test2(individus);
     // FIN TEST 2
     */
    /*
     // TEST 3
     test3(individus, 16);
     
     test3(individus, 10);
     // FIN TEST 3
     */
    return 0;
}



