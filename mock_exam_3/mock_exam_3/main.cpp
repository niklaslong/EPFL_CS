/* SCIPER:
 * NOM :
 */
#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

/* nombre de caract`eres diff'erents utilis'es pour le codage
 des nucl'eotides :
 VOUS N'AVEZ PAS BESOIN DE CETTE CONSTANTE POUR CODER CE QUI
 VOUS EST DEMAND'E
 */
constexpr size_t NB_PROT(5);

// Alias de type pour repr'esenter une s'equence de nucl'eotides
typedef vector<char> Sequence;

// COMPLETER ICI LES FONCTIONS DEMANDEES :

bool compare_to(char first, char second, char value1, char value2);
bool purines(char first, char second);
bool pyramidines(char first, char second);
int score(char first, char second);


// VOUS DECOMMENTEREZ LES FONCTIONS SUIVANTES EN FONCTION DE CE QUE VOUS
// DEMANDE l'ENONCE

/* FONCTION UTILITAIRE FOURNIE
 * NE PAS MODIFIER
 * affiche les scores rĆ©sultant de tous les appariements possibles
 */

 void test1(const array<char, NB_PROT>& all_prots)
 {
 for (size_t i(0); i < all_prots.size(); ++i)
 {
 for (size_t j(0); j < all_prots.size(); ++j)
 {
 char first(all_prots[i]);
 char second (all_prots[j]);
 cout << "Le score de l'alignement : " << flush;
 cout << first << " " << second << flush;
 cout << " vaut : " << score(first, second) << endl;
 }
 }
 }
 

/* FONCTION UTILITAIRE FOURNIE
 * NE PAS MODIFIER
 * affiche le score de l'alignement de seq1 avec seq2
 */
/*
 void test2(const Sequence& seq1, const Sequence& seq2)
 {
 cout << "L'alignement de ";
 display(seq1);
 cout << " avec ";
 display(seq2);
 cout << " a pour score : " << score(seq1, seq2);
 cout << endl;
 }
 /*
 
 /* PROGRAMME PRINCIPAL FOURNI
 NE MODIFIER QUE CONFORMĆ‰MENT A L'Ć‰NONCĆ‰
 */

int main()
{
    
     // TEST 1
     array<char, NB_PROT> all_prots = {'A', 'G', 'T', 'C', '-'};
     
     cout << "Test de la partie 1: " << endl;
     cout << "-------------------- " << endl;
     test1(all_prots);
     
     // FIN TEST 1
    
    
    /*
     // TEST 2
     cout << "Test de la partie 2: " << endl;
     cout << "-------------------- " << endl;
     Sequence seq1 = {'A', 'C', 'T', 'G'};
     Sequence seq2 = {'-', 'G', 'A' , 'T' };
     test2(seq1, seq2);
     
     seq2 = {'A', 'T', 'G', '-' };
     
     test2(seq1, seq2);
     
     seq2 = {'C', 'C', 'A' , 'G'};
     
     test2(seq1, seq2);
     
     seq2 = {'T', 'C', 'A' , 'G'};
     test2(seq1, seq2);
     
     seq2 = {'C', 'G', 'T', 'A'};
     
     test2(seq1, seq2);
     
     seq2 = {'C', 'G', 'T', 'A', 'C'};
     test2(seq1, seq2);
     
     seq2 = { 'C', 'G', 'T'};
     test2(seq1, seq2);
     
     // FIN TEST 2
     */
    
    /*
     // TEST 3
     cout << "Test de la partie 3: " << endl;
     cout << "-------------------- " << endl;
     Sequence reference = {'A', 'C', 'T', 'G'};
     
     vector<Sequence> candidates = {
     {'-', 'G', 'A' , 'T' },
     {'A', 'T', 'G', '-' },
     {'C', 'C', 'A' , 'G'},
     {'C', 'G', 'T', 'A'}
     };
     
     
     display_best(reference, candidates);
     
     vector<Sequence> no_candidates;
     
     display_best(reference, no_candidates);
     
     
     // FIN TEST 3
     */
    
    return 0;
    
}

bool compare_to(char first, char second, char value1, char value2) {
    if (first == value1 && second == value2) {
        return true;
    } else if (first == value2 && second == value1) {
        return true;
    } else {
        return false;
    }
}

bool purines(char first, char second) {
    return compare_to(first, second, 'A', 'G');
}

bool pyramidines(char first, char second) {
    return compare_to(first, second, 'C', 'T');
}

int score(char first, char second) {
    if (first == second && second == '-') {
        return 0;
    } else if (first == '-' || second == '-') {
        return -1;
    } else if (first == second) {
        return 2;
    } else if (purines(first, second) || pyramidines(first, second)) {
        return 1;
    } else {
        return -1;
    }
}
