#include <vector>
using namespace std;

// geeft de absolute waarde van elk geheel getal in een gegeven vector.
// deze functie geef een kopie van de vector mee.
// voordeel: De originele vector kan niet aangepast worden.
// nadeel: Vectors kunnen erg lang zijn, waardoor dit veel geheugen in kan nemen.
vector<int> positive1(vector<int> numbers){
    for(unsigned int i=0; i<numbers.size(); i++){
        if(numbers[i] < 0){
            numbers[i] *= -1;
        }
    }
    return numbers;
}

// geen return value. Geeft een referentie van de vector mee in de parameters.
// en past het originele vector object aan, om bij alle waardes de absolute waarde terug te geven.
// voordeel: Met deze referentie kan je direct de lijst aanpassen zonder deze te kopiëren.
// nadeel: Met deze methode worden alle aanpassingen direct op de originele vector uitgevoerd. Alle veranderingen staan vast.
void positive2(vector<int> & numbers){
    for(unsigned int i=0; i<numbers.size(); i++){
        if(numbers[i] < 0){
            numbers[i] *= -1;
        }
    }
}

// Deze functie geeft newNumbers terug, wat een kopie is van de originele vector.
// Vervolgens worden alle negatieve waardes in newNumbers absoluut gemaakt.
// voordeel: Je hebt beide de referentie van de originele lijst, en een kopie. Dit is handig voor wanneer het origineel nodig is.
// nadeel: Als alleen de kopie nodig is, is functie 1 beter.
vector<int> positive3(const vector<int> & numbers){
    vector<int> newNumbers = numbers;

    for(unsigned int i=0; i<newNumbers.size(); i++){
        if(newNumbers[i] < 0){
            newNumbers[i] *= -1;
        }
    }
    return newNumbers;
}

// Wanneer er data verloren raakt zoals hier (Het is niet meer te zien welk getal negatief was bij de output)
// is het beter als de originele lijst blijft bestaan. Mijn voorkeur gaat daarom uit voor functie 1.
// Functie 3