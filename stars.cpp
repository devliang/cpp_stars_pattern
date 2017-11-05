#include<iostream>
using namespace std;

void rightUpward (int side);
void rightDownward (int side1);
void pyramid (int side2);
void diamond (int side3);
void numTri (int side4);

int main(){
	char select; 
	int side=0, side1=0, side2=0, side3=0, side4=0;
	cout << "Enter a for right upward triange, b for right downward triangle, "
	<< "\nc for pyramid triangle, d for diamond triangle, e for number triange: \n";
	cin >> select;

	switch (select){
		case 'a': rightUpward (side);
		break;
		case 'b': rightDownward (side1);
		break;
		case 'c': pyramid (side2);
		break;
		case 'd': diamond (side3);
		break;
		case 'e': numTri (side4);
		break;
		default: cout << "Invalid Input";
		break;
	}
	
	system ("pause");
	return 0;
}

void rightUpward (int side){

	cout << "Please enter how many sides of a triangle: \n";
	cin >> side;
	
	for (int i=1; i<=side; i++){
		for (int j=1; j<=i;j++){
			cout << '*';
		}
		cout << endl;
	}
}

void rightDownward (int side1){
	cout << "Please enter how many sides of a triangle: \n";
	cin >> side1;
	
	for (int i=1; i<=side1; i++){
		for (int j=side1; j>=i; j--){
			cout << '*';
		}
		cout << endl;
	}
}

void pyramid (int side2){
	cout << "Please enter how many sides of a triangle: \n";
	cin >> side2;
	
	for (int i=1; i<=side2; i++){
		for (int j=side2-1; j>= i;j--){
			cout << " ";
		}
		for (int k=1; k<=i*2-1; k++){
			cout << '*';
		}
		cout << endl;
	}
}

void diamond (int side3){
	cout << "Please enter how many sides of upper part of a diamond triangle: \n";
	cin >> side3;
	
	for (int i=1; i<=side3; i++){
		for (int j=side3-1; j>=i; j--){
			cout << " ";
		}
		for (int k=1; k<=i*2-1; k++){
			cout << '*';
		}
		cout << endl;
	}
	
	for (int m=1; m <=side3-1; m++){
		for (int n=1; n<=m ;n++){
			cout << " ";
		}
		for (int p=2*side3-3; p>=m*2-1;p--){
			cout << '*';
		}
		cout << endl;
	}
}

void numTri (int side4){
	cout << "Please enter how many sides for a number based triangle: \n";
	cin >> side4;
		int count =1;
	for (int i=1; i<=side4; i++){
		for (int j=1; j<=i; j++){
			cout << count << " ";
			count ++;
		}
		cout << endl;	
	}

}
	
