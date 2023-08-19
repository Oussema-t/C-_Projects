#include <iostream>
#include <liquidcrystal.h>
using namespace std;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int TMP36 = A0; //Der Sensor soll am analogen Pin A0 angeschlossen werden. Wir nennen den Pin ab jetzt "TMP36"
int sensorwert;
int temperatur = 0; //Unter der Variablen "temperatur" wird später der Temperaturwert abgespeichert.
int t=5000; //Der Wert für „t“ gibt im Code die zeitlichen Abstände zwischen den einzelnen Messungen vor.
void setup() 
{
Serial.begin(9600); //Im Setup beginnt die serielle Kommunikation, damit die Temperatur an den serial monitor übertragen wird. Über die serielle Kommunikation sendet das Board die Messwerte an den Computer. In der Arduino-Software kann man unter „Werkzeuge“ den „Seriellen Monitor“ starten um die Messwerte zu sehen.
}

void loop() 
{
sensorwert=analogRead(TMP36); //Auslesen des Sensorwertes.
temperatur= map(sensorwert, 0, 410, -50, 150); //Umwandeln des Sensorwertes mit Hilfe des "map" Befehls.
delay(t); // Nach jeder Messung ist je eine kleine Pause mit der Dauer „t“ in Millisekunden.
Serial.print(temperatur); //Nun wird der Wert „temperatur“ über die serielle Kommunikation an den PC gesendet. Durch öffnen des seriellen Monitors in der Arduino-Software kann die Temperatur abgelesen werden.
}
int main()
{  float w ,d , l,h ;  
 
     cout<<"Geben Sie bitte die Waermeleitfaehigkeit der Wandkabine ";
    cin>>w;   
     cout<<"Geben Sie bitte die Durchmesserverhaeltnis der Kabine ";
    cin>> d;  
     cout<<"Geben Sie bitte die  Laenge der Kabine  ";
    cin>>l;  
    h=((w*2*3.141592*l)*(22-temperatur))/(log(d))
    return 0;
}
void setup() 
{
lcd.begin(16, 2); //Im Setup wird angegeben, wie viele Zeichen und Zeilen verwendet werden. Hier: 16 Zeichen in 2 Zeilen.
}

void loop() 
{
lcd.setCursor(0, 0); //Startposition der Darstellung auf dem LCD festlegen. lcd.setCursor(0,0) bedeutet: Erstes Zeichen in der ersten Zeile.
lcd.print("h"); //Dort soll der Text „www.funduino.de“ erscheinen. Der Befehl lcd.setCursor ist dem Mikrocontrollerboard durch das Aufrufen der Bibliothek bekannt.
lcd.setCursor(0, 1); // lcd.setCursor(0,1) bedeutet: Erstes Zeichen in der zweiten Zeile.
lcd.print("h"); //Dort soll dann der Text „abgegebene Warme “ auftauchen.
}
