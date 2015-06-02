class LinkedListChar {

public:

	struct Node{
		char curChar;
		Node* nextNode;
	};

	LinkedListChar(void);
	
	//~LinkedListChar(void);

	/** Creates a new LinkedListChar with the characters in 
	 * the string str for the first elements */
	LinkedListChar(const std::string& str);

	/** Copy constructor */
	//LinkedListChar(const LinkedListChar& other);

	/** Move constructor */
	//LinkedListChar(LinkedListChar&& other) noexcept;

	/** Copy assignment operator */
	//LinkedListChar& operator= (const LinkedListChar& other);

	/** Move assignment operator */
	//LinkedListChar& operator= (LinkedListChar&& other) noexcept;

	/** Appends a character onto the end of the linked list */
	void append(char c);

	/** Replaces the character at the following index with the 
	 * character c.  Throws an out of bounds exception if the index
	 * is greater than size() - 1 or if index < 0. */
	//void set(int index, char c);

	/** Inserts the character c into the index given and shifts all 
	 * characters after the index to the right.  Throws an out of 
	 * bounds exception if the index is greater than size() - 1 or if
	 * index < 0. */
	//void insert(int index, char c);

	/** Returns the size of the linked list */
	int size() const;

	/** Returns the character at the specified index
	 * Throws an index out of bounds exception if the index is greater
	 * than size() - 1 or if index < 0. */
	char getChar(int index) const;


	
private:
	/** the first value is not valid */
	Node firstNode;
};
