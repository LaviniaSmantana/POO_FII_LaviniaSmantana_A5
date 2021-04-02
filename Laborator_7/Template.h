#pragma once

template<typename T>
void callback_comparare(T x, T y)
{
	if (x > y)
	{
		int aux = x;
		x = y;
		y = aux;
	}
}

template <class T, int Nr_Elemente>
class VectorTemplate {
	T vector[Nr_Elemente]; int size;
	T Nr_Elemente;
	int i, j, valoare;
public:

	VectorTemplate(int Nr_Elemente, int* vector[])
	{
		this->Nr_Elemente = Nr_Elemente;
		this->size = Nr_Elemente;
		this->vector = (int*)(malloc(size * sizeof(int)));
	}

	VectorTemplate() : Nr_Elemente(0) { }

	void push_vector(T valoare) 
	{
		this->vector[this->Nr_Elemente++] = valoare;
		this->size = Nr_Elemente;
		vector = new T * [size];
	}

	T pop_vector() 
	{
		return this->vector[--this->Nr_Elemente];
	}

	void delete_element(T index)
	{
		for (i = index; i < Nr_Elemente - 1; i++)
			this->vector[i] = this->vector[i + 1];
		this->Nr_Elemente = Nr_Elemente - 1;
	}

	void insert_element(T index, T valoare)
	{
		for (i = Nr_Elemente - 1; i >= index; i--)
			vector[i + 1] = vector[i];
		this->Nr_Elemente = Nr_Elemente + 1;
		vector[index] = valoare;
	}

	int sort_vector(int (*callback)(T, T))
	{
		for(i=0;i<Nr_Elemente-1;i++)
			if (callback != nullptr)
			{
				return callback(this->vector[i], this->vector[i+1]);
			}
		return (this->vector[i] < this->vector[i+1]);
	}
	
	int count_method()
	{
		return this->Nr_Elemente;
	}


};
