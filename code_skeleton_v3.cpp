#include <iostream>
using namespace std;

int main (){

    int i, temp;
    int variable_counter = 1;
    string statement;

    cout << "Enter the statement:";
    getline (cin, statement);

    cout << "The entered statement was:" << statement << endl;

    if (statement[0] == '0' || statement[0] == '1' || statement[0] == '2' || statement[0] == '3' || statement[0] == '4' || statement[0] == '5' || statement[0] == '6' || statement[0] == '7' || statement[0] == '8' || statement[0] == '9'){

	    cout<<"Lexical error found";
	    return 0;
	    }

    else{
        cout<<"<id,";
	    cout<<variable_counter;
	    cout<<">";
    }

    for (i = 1; i < statement.length (); i++){
		if (statement[i] == '='){
			break;
		}

	}

    cout<<"<=>";

    temp = i;

    if (statement[0] == '0' || statement[0] == '1' || statement[0] == '2' || statement[0] == '3' || statement[0] == '4' || statement[0] == '5' || statement[0] == '6' || statement[0] == '7' || statement[0] == '8' || statement[0] == '9'){
        cout<<"Lexical error found";
	    return 0;
    }

	else{
        variable_counter++;
        cout<<"<id,";
	    cout<<variable_counter;
	    cout<<">";
	}
	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == '+'){
			break;
		}

    }
    cout<<"<+>";

    temp = i;

    if (statement[0] == '0' || statement[0] == '1' || statement[0] == '2' || statement[0] == '3' || statement[0] == '4' || statement[0] == '5' || statement[0] == '6' || statement[0] == '7' || statement[0] == '8' || statement[0] == '9'){
         cout<<"Lexical error found";
	    return 0;
    }
	else{
        variable_counter++;
        cout<<"<id,";
	    cout<<variable_counter;
	    cout<<">";
	}


	for (i = temp + 2; i < statement.length (); i++){
		if (statement[i] == ';'){
			break;
		  }


    }
  cout<<";";

  return 0;
}




