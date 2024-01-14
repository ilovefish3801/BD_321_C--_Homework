#pragma once
#include <iostream>

using namespace std;

// Ви говорили, що у структурі можуть бути прості методи ( Надіюсь гетири і сетири у них входять )
struct Book {
    string title;
    string author;
    string publisher;
    string genre;

    string getTitle() {
        return title;
    }
    string getAuthor() {
        return author;
    }
    string getPublisher() {
        return publisher;
    }
    string getGenre() {
        return genre;
    }
    void setTitle(string title) {
        this->title = title;
    }
    void setAuthor(string author) {
        this->author = author;
    }
    void setPublisher(string publisher) {
        this->publisher = publisher;
    }
    void setGenre(string genre) {
        this->genre = genre;
    }
};

// Друкування всіх книг
void printAllBooks(Book arr[], int Size) {
    for (int i = 0; i < Size; i++) {
        string title = arr[i].getTitle();
        string author = arr[i].getAuthor();
        string publisher = arr[i].getPublisher();
        string genre = arr[i].getGenre();

        cout << "Book " << i + 1 << ": " << title << ", " << author << ", " << publisher << ", " << genre << endl;
    }
}

// Редагування книги за назвою
void editBook(Book arr[], int Size, string bookTitle) {
    int choise;
    string newInfo;

    cout << endl << "1 - Title" << endl << "2 - Author" << endl << "3 - Publisher" << endl << "4 - Genre" << endl << "5 - Exit" << endl;

    cout << "Choose what do you want to edit: ";
    cin >> choise;

    switch (choise) {
    case 1:
        cout << endl << "Enter new title: ";
        cin >> newInfo;

        for (int i = 0; i < Size; i++) {
            string title = arr[i].getTitle();

            if (title == bookTitle) {
                arr[i].setTitle(newInfo);
            }
        }

        break;
    case 2:
        cout << endl << "Enter new author: ";
        cin >> newInfo;

        for (int i = 0; i < Size; i++) {
            string title = arr[i].getTitle();

            if (title == bookTitle) {
                arr[i].setAuthor(newInfo);
            }
        }

        break;
    case 3:
        cout << endl << "Enter new publisher: ";
        cin >> newInfo;

        for (int i = 0; i < Size; i++) {
            string title = arr[i].getTitle();

            if (title == bookTitle) {
                arr[i].setPublisher(newInfo);
            }
        }

        break;
    case 4:
        cout << endl << "Enter new genre: ";
        cin >> newInfo;

        for (int i = 0; i < Size; i++) {
            string title = arr[i].getTitle();

            if (title == bookTitle) {
                arr[i].setGenre(newInfo);
            }
        }

        break;
    }
}
