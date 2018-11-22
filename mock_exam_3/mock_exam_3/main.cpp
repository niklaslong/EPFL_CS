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

void display(const Sequence &seq);
int score(const Sequence &seq1, const Sequence seq2);

Sequence best(const Sequence &seq, const vector<Sequence> &set_of_sequences);
void display_best(const Sequence &seq, const vector<Sequence> &set_of_sequences);


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

 void test2(const Sequence& seq1, const Sequence& seq2)
 {
 cout << "L'alignement de ";
 display(seq1);
 cout << " avec ";
 display(seq2);
 cout << " a pour score : " << score(seq1, seq2);
 cout << endl;
 }

 
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

void display(const Sequence &seq) {
    for (char c : seq) {
        cout << c;
    }
}

size_t shortest_list(const Sequence &seq1, const Sequence &seq2) {
    size_t s1 = seq1.size();
    size_t s2 = seq2.size();
    
    return s1 < s2 ? s1 : s2;
}

int score(const Sequence &seq1, const Sequence seq2) {
    int score(0);
    
    for (size_t i(0); i < shortest_list(seq1, seq2); ++i) {
        score += ::score(seq1[i], seq2[i]);
    }
    
    return score;
}

Sequence best(const Sequence &seq, const vector<Sequence> &set_of_sequences) {
    if (set_of_sequences.size() == 0) {
        Sequence nil_seq;
        return nil_seq;
    }
    
    int best(-1000);
    size_t best_index(-1);
    
    for (size_t i(0); i < set_of_sequences.size(); ++i) {
        int score = ::score(seq, set_of_sequences[i]);
        
        if (score > best) {
            best = score;
            best_index = i;
        }
    }
    
    
    return set_of_sequences[best_index];
}

void display_best(const Sequence &seq, const vector<Sequence> &set_of_sequences) {
    Sequence best_sequence = best(seq, set_of_sequences);
    
    if (best_sequence.size() == 0) {
        cout << "Aucun alignement optimal!" << endl;
        return;
    }
    
    int score = ::score(seq, best_sequence);
    
    display(best_sequence);
    cout << " est le meilleur allignement avec ";
    display(seq);
    cout << ", score = " << score << endl;
}
