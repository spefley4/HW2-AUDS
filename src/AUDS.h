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
		AUDS& operator=(AUDS other);
		// Destructor
		~AUDS() {
			delete[] ourData;
		}
		int size(){
			return ourData.size()
                        }
		}
		void push(T x){
			for (i=0; i <= currentSize; ++i){
				if (!ourData[i]){
					ourData[i] = x;	
				}
			}	
		}
	private:
		int initialSize;;
		int currentSize;
		int maxSize;
		T* ourData;

};
