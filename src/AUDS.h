#include <iostream>

template<typename T>

class AUDS {

	public:
		// Constructor
		AUDS() {
			initialSize = 100;
			currentSize = 0;
			maxSize = 100;
			ourData = new T[initSize];
		}
		//Deep Copy Constructor
		AUDS(const AUDS &other) {
			ourData = new T[initialSize];
			if (other.ourData){
				for (int i=0; i <= currentSize; ++i){
					ourData[i] = other.ourData[i];	
				}
			}
			else {
				ourData = 0;
			}
		}
		//Copy Operator
		AUDS& operator=(AUDS other) {
			
		}
		// Destructor
		~AUDS() {
			delete[] ourData;
		}
		// Returns number of elements in array
		int size(){
			return ourData.size()
                        }
		}
		// Pushes a new element of any data type onto the end of the array
		void push(T x){
			for (i=0; i <= currentSize; ++i){
				if (!ourData[i]){
					ourData[i] = x;	
					break;
				}
			}	
		}
	private:
		int initialSize;;
		int currentSize;
		int maxSize;
		T* ourData;

};
