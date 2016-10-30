#include <iostream>

using namespace std;

class TestScores {
	private :
		float score1;
		float score2;
		float score3;
	public :
		TestScores(float score1, float score2, float score3){
			this->score1 = score1;
			this->score2 = score2;
			this->score3 = score3;
		}
		float getScore1(){
			return score1;
		}
		float getScore2(){
			return score2;
		}
		float getScore3(){
			return score3;
		}
};

int main(){
	float scores[3];
	float sum, average;
	
	for (int x = 0; x <= 2; x++){
		cout << "Enter first score : ";
		cin >> scores[x];
		sum += scores[x];
	}
	average = sum / 3;
	
	TestScores(scores[0], scores[1], scores[2]);
	cout << endl << "Average : " << average;
	
	return 0;
}

	
	
