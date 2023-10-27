#pragma once

using namespace System;
using namespace System::Collections::Generic;

public ref class User {
public:
	String^ userName;
	List<String^>^ orders;
	int^ orderNumber;

	User() {
		userName = nullptr;
		orders = gcnew List<String^>();
		orderNumber = 0; 
	}
};
