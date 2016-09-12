#include <Arduino.h>

class foo
{
  public:
    foo();
    void init(int x);
    void get();

  private:
    int x;
};

foo::foo()
{
  Serial.printf("Detta foo-objekt har adress: 0x");
  Serial.print((long) this, HEX);
  Serial.println();
}
void foo::init(int _x)
{
  x = _x;

  Serial.print("foo.init(");
  Serial.print(_x);
  Serial.print(")\n");
}

void foo::get()
{
  Serial.print("x = ");
  Serial.println(x);
}


void setup()
{


  Serial.begin(115200);


  Serial.print("\n\nSkapar 5 foo-objekt med pekare:\n");
  foo *x[5];

  Serial.print("Initierar..\n");
  for(int i = 0; i < 5; i++)
  {
      x[i] = new foo;
      x[i]->init(i * 10);
  }
  Serial.print("done\n");

  Serial.print("Läser..\n");
  for(int i = 0; i < 5; i++)
  {
      x[i]->get();
  }
  Serial.print("done.\n");

  Serial.print("---\n");

  /**************************************************/

  Serial.print("Skapar 5 foo-objekt på stacken:\n");
  foo y[5];

  Serial.print("Initierar..\n");
  for(int i = 0; i < 5; i++)
  {
      y[i].init(i * 100);
  }
  Serial.print("done\n");

  Serial.print("Läser..\n");
  for(int i = 0; i < 5; i++)
  {
      y[i].get();
  }
  Serial.print("done.\n");

  Serial.print("---\n");

}


void loop()
{

}
