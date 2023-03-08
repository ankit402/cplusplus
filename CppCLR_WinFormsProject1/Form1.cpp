#include "pch.h"
#include "Form1.h"
#include <winscard.h>
#include <iostream>


SCARD_READERSTATE	ReaderState[NUMBER_OF_READERS];
SCARD_IO_REQUEST	IO_Request;
SCARDCONTEXT		ContextHandle;
SCARDHANDLE			CardHandle;

using namespace std;

ReadCardUtility::Form1::Form1(void){
	InitializeComponent();
}

//overloaded constructor
ReadCardUtility::Form1::Form1(int Readernumbers) {
	Readernumber = Readernumbers;
}
//
//int ReadCardUtility::Form1::OnConnect() {
//	DWORD	ActiveProtocol = 0;
//	ProtocolType = SCARD_PROTOCOL_T0 | SCARD_PROTOCOL_T1;
//
//	ret = SCardConnect(ContextHandle, ReaderName[act_Name], SCARD_SHARE_SHARED, ProtocolType, &CardHandle, &ActiveProtocol);
//
//	if (ret != SCARD_S_SUCCESS) {
//		GetErrorCode(ret);
//		return;
//	}
//	ProtocolType = ActiveProtocol;
//
//	switch (ProtocolType) {
//	case SCARD_PROTOCOL_T0:
//		SetDlgItemText(IDC_OUT, "Function SCardConnect ok\nProtocoltype = T0");
//		break;
//	case SCARD_PROTOCOL_T1:
//		SetDlgItemText(IDC_OUT, "Function SCardConnect ok\nProtocoltype = T1");
//		break;
//	default:
//		sprintf((char*)pOutBuffer, "Function SCardConnect ok\n%.8x", ActiveProtocol);
//		SetDlgItemText(IDC_OUT, (char*)pOutBuffer);
//		break;
//	}
//	OutBufferLine = 0;
//}

/// <summary>
/// Card OnConnect Method
/// </summary>
/// <returns></returns>
int  ReadCardUtility::Form1::OnConnect() {
	cout << "OnConnect" << endl;
	MessageBox::Show("Called  onconnected");
	return 0;
}
/// <summary>
/// Card  Ondisconnected Method
/// </summary>
/// <returns></returns>
int  ReadCardUtility::Form1::OnCardDisconnect() {
	  cout << "Disconnected" << endl;
	  return 0;
}
void ReadCardUtility::Form1::addcomboitem(int item) {
	//item =1;
	//SCARD_SCOPE_USER = 0;
	  //ret = SCardEstablishContext(0, NULL, NULL, &ContextHandle);
	comboBox1->Items->Add(item);
	OnConnect();
}



