#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cont = 0, casos, altura, diametro, galhos;
    cin >> casos;
    while (cont < casos){
        cin >> altura;
        cin >> diametro;
        cin >> galhos;
        if (altura >= 200 && altura <= 300){
            if (diametro >= 50){
                if (galhos >= 150){
                    cout << "Sim" <<endl;
                }else{
                    cout << "Nao" <<endl;
                }
            }else{
                cout << "Nao" <<endl;
            }
        }else{
            cout << "Nao" <<endl;
        }
        cont++;
    }
    return 0;
}
