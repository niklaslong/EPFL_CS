/* SCIPER:
 * NOM :
 */
#include <iostream>
#include <vector>
using namespace std;

// TAUX MAXIMAL POSSIBLE DE CHOLESTEROL
constexpr double CHOLEST_MAX(5.9);

// QUELQUES TYPES FOURNIS
// une souris est modélisée par l'ensemble de ses mesures
typedef vector<double> Souris;
// un élevage est un ensemble de souris
typedef vector<Souris> Elevage;

// COMPLETER LES PROTOTYPES MANQUANT ICI

double cholest_moyen(const Souris& s);
void afficher(const Souris& s);
bool en_danger(const Souris& s, double seuil);


// FONCTION UTILITAIRE FOURNIE
// A DECOMMENTER POUR TEST 2
void population_a_risque(const Elevage& elevage, double seuil)
{
    /*
     cout << "Pourcentage de souris en danger avec le seuil critique a "
     << seuil << " : "<< flush;
     
     if (elevage.empty()) cout << "0" << flush;
     
     // TYPO DANS L'ENONCE, CORRIGEE PENDANT L'EXAMEN
     // cout << pourcent_en_danger(elevage, seuil) * 100.0  << flush;
     cout << ratio_en_danger(elevage, seuil) * 100.0  << flush;
     cout << "%" << endl;
     */
}

// FONCTION UTILITAIRE FOURNIE
double moyenne_sol(const Souris& souris)
{
    if (souris ==  vector<double>({1.5 , 1.75, 0.5})) return 1.25;
    if (souris ==  vector<double>({0.5 , 0.75, 1})) return 0.75;
    if (souris ==  vector<double>({1.5 , 1.25, 1.75})) return 1.5;
    if (souris ==  vector<double>({1.0 , 1.25, 0.75})) return 1;
    return 0.0;
}

//PROGRAMME PRINCIPAL FOURNI (NE PAS MODIFIER LE CONTENU)
int main()
{
    
    // TEST 1
    
     cout << "Test 1: " << endl;
     Souris souris( {1.5 , 1.75, 0.5} );
     afficher(souris);
     cout << en_danger(souris, 1) << endl;
     cout << en_danger(souris, 1.5)<<endl;
     
     cout << endl;
     // FIN TEST 1
    
    
    
    // TEST 2
    /*
     cout << "Test 2: " << endl;
     Elevage elevage = { {0.5 , 0.75, 1},
     {1.5 , 1.25, 1.75},
     {1.0 , 1.25, 0.75},
     {1.5 , 1.75, 0.5}
     };
     
     afficher(elevage);
     cout << "Taux minimum dans l'élevage : ";
     cout << cholest_min(elevage) << endl;
     
     population_a_risque(elevage, 1.0);
     population_a_risque(elevage, 1.5);
     population_a_risque(elevage, 2);
     
     cout << endl;
     // FIN TEST 2
     */
    
    // TEST 4
    /*
     cout << "Test 4: " << endl;
     Elevage nouvel_elevage;
     double seuil(1.0);
     double pourcent(0.1);
     
     cout << "Elevage avant atténuation: " << endl;
     afficher(elevage);
     population_a_risque(elevage, seuil);
     
     nouvel_elevage = attenuer_mesures(elevage, pourcent);
     
     cout << "Elevage après atténuation de " <<  pourcent << endl;
     
     afficher(nouvel_elevage);
     population_a_risque(nouvel_elevage, seuil);
     
     cout << endl;
     // FIN TEST 4
     */
    
    // TEST 5
    /*
     cout << "Test 5: " << endl;
     afficher(elevage);
     seuil = 1;
     cout << "Indice première souris saine avec un seuil de " << seuil << endl;
     cout << premiere_saine(elevage, seuil) << endl;
     
     seuil = 0.5;
     cout << "Indice première souris saine avec un seuil de " << seuil << endl;
     cout << premiere_saine(elevage, seuil) << endl;
     
     // FIN TEST 5
     */
    
    // TEST 3
    /*
     cout << "Test 3: " << endl;
     ajouter_souris(elevage, souris);
     afficher(elevage);
     population_a_risque(elevage, 1.0);
     population_a_risque(elevage, 1.5);
     population_a_risque(elevage, 2);
     //FIN TEST 3
     */
    
    return 0;
    
}


// COMPLETER LES DEFINITIONS MANQUANTES ICI

double cholest_moyen(const Souris& s) {
    double average(0);
    
    for (auto measurement : s) {
        average += measurement;
    }
    
    average /= s.size(); 
    
    return average;
}

void afficher(const Souris& s) {
    for (auto measurement : s) {
        cout << measurement << " ";
    }
    
    cout << ", Taux moyen : " << cholest_moyen(s) << endl;
}

bool en_danger(const Souris& s, double seuil) {
    return cholest_moyen(s) >= seuil ? true : false;
}

