#include <iostream>
#include <vector>

using namespace std;

class Book {
private:
	string author;
	string title;
	string publisher;
	int year;
	int pages;

public:
	Book(string author_, string title_, string publisher_, int year_, int pages_) : author{ author_ }, title{ title_ }, publisher{ publisher_ }, year{ year_ }, pages{ pages_ } {}
	explicit Book(string title_) : Book{"Anonym", title_, "Anonymous Publisher", -1, -1} {}

	string getAuthor() {
		return this->author;
	}

	string getTitle() {
		return this->title;
	}

	string getPublisher() {
		return this->publisher;
	}

	int getYear() {
		return this->year;
	}

	int getPages() {
		return this->pages;
	}
};

template <typename T>
void printVector(T books) {
	int size = books.size();

	for (int i = 0; i < size; i++) {

		cout << endl << '\t' << "Book index: " << i << endl;
		cout << "Author: " << books[i].getAuthor() << endl;
		cout << "Title: " << books[i].getTitle() << endl;
		cout << "Publisher: " << books[i].getPublisher() << endl;
		cout << "Year: " << books[i].getYear() << endl;
		cout << "Pages: " << books[i].getPages() << endl;
		cout << endl;

	}
}

template <typename T>
void printBooksByAuthor(string author, T books) {
	if (author == "Anonym") {
		cout << endl << "Author is anonymous" << endl;
		return;
	}
	
	int size = books.size();

	cout << endl << '\t' << author << " book list:" << endl << endl;
	for (int i = 0; i < size; i++) {
		Book book = books[i];
		if (book.getAuthor() == author) {
			cout << book.getTitle() << " ";
		}
	}

	cout << endl;
}

template <typename T>
void printBooksByPublisher(string publisher, T books) {
	if (publisher == "Anonymous Publisher") {
		cout << endl << "Publisher is anonymous" << endl;
		return;
	}

	int size = books.size();

	cout << endl << '\t' << publisher << " book list:" << endl << endl;
	for (int i = 0; i < size; i++) {
		Book book = books[i];
		if (book.getPublisher() == publisher) {
			cout << book.getTitle() << " ";
		}
	}

	cout << endl;
}

template <typename T>
void printBooksByYear(int year, T books) {
	if (year == -1) {
		cout << endl << "Can't print anonymous books" << endl;
		return;
	}

	int size = books.size();

	cout << endl << '\t' << "Books published after " << year << ":" << endl << endl;
	for (int i = 0; i < size; i++) {
		Book book = books[i];
		if (book.getYear() > year) {
			cout << book.getTitle() << " ";
		}
	}

	cout << endl;
}

int main() {
	vector<Book> books;
	books.push_back(Book{ "Anonymous Title1" });
	books.push_back(Book{ "Author1", "Title1", "Publisher1", 2005, 199});
	books.push_back(Book{ "Author1", "Title2", "Publisher2", 2006, 200});
	books.push_back(Book{ "Author1", "Title3", "Publisher2", 2007, 201});
	books.push_back(Book{ "Author2", "Title4", "Publisher4", 2008, 202});
	books.push_back(Book{ "Anonymous Title2" });

	printVector(books);
	printBooksByAuthor("Author1", books);
	printBooksByPublisher("Publisher2", books);
	printBooksByYear(2006, books);

	return 0;
}
