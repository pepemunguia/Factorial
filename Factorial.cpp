#include <iostream>
using namespace std;

int main ()
{
  char d;
  do {
    int n,g,f; //n=numbero input, g=variable que se multiplica, f=factorial.
    g=0;
    f=1;
    cout<< "Please enter an integer number you want to convert into factorial" << endl;
    cin>> n;
    n=n+1;
    do {
      g=g+1;
      f=f*g;
    } while (g!=n);
    f=f/n;
    cout<< "The factorial number of " << n-1 << " is " << f << endl;
    cout<< "Would you like to convert a number again, press y for yes, and n for no" << endl;
    cin>> d;
  } while (d=='y');
  cout<< "Thank you" << endl;
  return 0;
}
