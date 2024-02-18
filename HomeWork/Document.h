#pragma once
#include <iostream>

using namespace std;

class Document {
private:
	string data;
	string title;
	int year;
	
public:
	friend class DocumentEditor;
	Document() : data{ "Data" }, title{ "Title" }, year{ 2000 } {}
	Document(string data_, string title_, int year_) : data{ data_ }, title{ title_ }, year{ year_ } {}

	void printDocument() {
		cout << endl;
		cout << "Title: " << title << " Year: " << year << " Data: " << data;
		cout << endl;
	}
};

class DocumentEditor {
private:
	Document& document;
	Document& draft;
public:
	DocumentEditor() : document{ *(new Document{}) }, draft{ *(new Document{}) } {};
	DocumentEditor(Document& doc) : document{ doc }, draft{ *(new Document{doc.data, doc.title, doc.year})} {};

	Document createDocument(string data_, string title_, int year) {
		return Document{ data_, title_, year };
	}

	void editData(string data) {
		draft.data = data;
	}

	void editTitle(string title) {
		draft.title = title;
	}

	void editYear(int year) {
		draft.year = year;
	}

	void saveDocument() {
		document.data = draft.data;
		document.title = draft.title;
		document.year = draft.year;

		cout << endl;
		cout << "Document saved";
		cout << endl;
	}

	void printDocument() {
		cout << endl;
		cout << "Title: " << draft.title << " Year: " << draft.year << " Data: " << draft.data;
		cout << endl;
	}
};