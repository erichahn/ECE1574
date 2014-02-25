



void countcharacters(stinrg &sentence, int &alpha, int &number, int &punct)
{
int length;
alpha = 0;
number = 0;
punct = 0;
length = sentence.length();
int i = 0;
while(i<length)
}
	char c = sentence[i];
	if(isalpha(c))
	alpha = alpha=1;
	elseif(isdigit(c))
	number++;
	else if(ispunct(c))
	punct++;
		i++;//increment loop counter
	}
	return;

}
string reatINput(istream$ in)
{
	//input
	cout << "Please enter a sentence and press enter: ";
	getline(cin, sentence); //Read in an entire line
	//stop at the newline character
	return sentence;
}

