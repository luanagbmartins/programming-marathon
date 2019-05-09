/*
 * Author: Luana Guedes Barros Martins
 * Problem title: URI Online Judge|1763|Tradutor do Papai Noel
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    char teste[20];
    map<string, string> translate;
    map<string, string>::iterator it;

    translate.insert(pair<string,string>("brasil", "Feliz Natal!"));
    translate.insert(pair<string,string>("alemanha", "Frohliche Weihnachten!"));
    translate.insert(pair<string,string>("austria", "Frohe Weihnacht!"));
    translate.insert(pair<string,string>("coreia", "Chuk Sung Tan!"));
    translate.insert(pair<string,string>("espanha", "Feliz Navidad!"));
    translate.insert(pair<string,string>("grecia", "Kala Christougena!"));
    translate.insert(pair<string,string>("estados-unidos", "Merry Christmas!"));
    translate.insert(pair<string,string>("inglaterra", "Merry Christmas!"));
    translate.insert(pair<string,string>("australia", "Merry Christmas!"));
    translate.insert(pair<string,string>("portugal", "Feliz Natal!"));
    translate.insert(pair<string,string>("suecia", "God Jul!"));
    translate.insert(pair<string,string>("turquia", "Mutlu Noeller"));
    translate.insert(pair<string,string>("argentina", "Feliz Navidad!"));
    translate.insert(pair<string,string>("chile", "Feliz Navidad!"));
    translate.insert(pair<string,string>("mexico", "Feliz Navidad!"));
    translate.insert(pair<string,string>("antardida", "Merry Christmas!"));
    translate.insert(pair<string,string>("canada", "Merry Christmas!"));
    translate.insert(pair<string,string>("irlanda", "Nollaig Shona Dhuit!"));
    translate.insert(pair<string,string>("belgica", "Zalig Kerstfeest!"));
    translate.insert(pair<string,string>("italia", "Buon Natale!"));
    translate.insert(pair<string,string>("libia", "Buon Natale!"));
    translate.insert(pair<string,string>("siria", "Milad Mubarak!"));
    translate.insert(pair<string,string>("marrocos", "Milad Mubarak!"));
    translate.insert(pair<string,string>("japao", "Merii Kurisumasu!"));

    while(scanf("%s", teste) != EOF) {
        it = translate.find(teste);
        if (it != translate.end())
            cout << translate.find(teste)->second << endl;
        else cout << "--- NOT FOUND ---" << endl;
    }
    return 0;
}
