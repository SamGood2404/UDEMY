#pragma once
class Cat
{

private:

	bool happy;

public:

	//bool happy; // means every cat will have its own copy of this 
	// every cat is happy
	// because this is public I can access it in Data Members main...


	void makeHappy();
	void makeSad();
	void speak();

	Cat();
	~Cat();
};

