#pragma once

template <class T>
class VectorTemplate {
	T* vector; int Nr_Elemente;
public:

	VectorTemplate(int Nr_Elemente) 
	{
		this->vector = (int*)(malloc(Nr_Elemente * sizeof(int)));
	}
	void push_vector(int x) 
	{
		vector[Nr_Elemente] = x;
		Nr_Elemente++;
	}
	int pop_vector(int x) 
	{
		Nr_Elemente--;
		return vector[Nr_Elemente];
	}
	void delete_element(int index)
	{
		for (int i = index; i < Nr_Elemente - 1; i++)
			vector[i] = vector[i + 1];
		Nr_Elemente--;
	}
	void insert_element(int index, int valoare)
	{
		for (i = Nr_Elemente - 1; i >= index; i--)
			vector[i + 1] = vector[i];
		vector[index] = valoare;
		Nr_Elemente++;
	}



};
