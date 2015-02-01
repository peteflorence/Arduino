//code that translates a phrase, inputted below, into morse code 
//on an arduino led light
//translation of letters into morse code taken from international morse code
//conventions

#include <std.io>


int ledPin = 13;

int main() {

  setup();
	while (1) {
		loop();
	}
}





void setup() {
	pinMode(ledPin, OUTPUT);


	string nextword;
	string phrase;
	char letter;
	string Morse;

// input phrase which can be changed
	phrase = "Hello World you're the bomb";


// for duration of the length of the entire string
//while


//for each character in subsequent word
//for 


//conventions for morse code

	int unit;
	unit = 200;
	int dot;
	dot = unit;
	same_letter = unit;
	dash = 3*unit;
	next_letter= 3*unit;
	space = 7*unit;


//morse code data library

	int maxlength;
  string A;
	A = "dot dash";
	string B;
	B = "dash dot dot dot";
	string C;
	C = "dash dot dash dot";
	string D;
	D = "dash dot dot";
	string E;
	E = "dot";
	string F;
	F = "dot dot dash dot";
	string G;
	G = "dash dash dot";
	string H;
	H = "dot dot dot dot";
	string I;
	I = "dot dot";
	string J;
	J = "dot dash dash dash";
	string K;
	K = "dash dot dash";
	string L;
	L = "dot dash dot dot";
	string M;
	M = "dash dash";
	string N;
	N = "dash dot";
	string O;
	O = "dash dash dash";
	string P;
	P = "dot dash dash dot";
	string Q;
	Q = "dash dash dot dash";
	string R;
	R = "dot dash dot";
	string S;
	S = "dot dot dot";
	string T;
	T = "dash";
	string U;
	U = "dot dot dash";
	string V;
	V = "dot dot dot dash";
	string W;
	W = "dot dash dash";
	string X;
	X = "dash dot dot dash";
	string Y;
	Y = "dash dot dash dash";
	string Z;
	Z = "dash dash dot dot";

}



//need for loop for entire phrase

void loop() {
	digitalWrite(ledPin, HIGH);
	delay(10000);
	digitalWrite(ledPin, LOW);
	delay(5000);
}