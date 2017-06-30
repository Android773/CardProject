//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CardForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
HINSTANCE MyCards;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::onScrollChange(TObject *Sender)
{
	MyCards = LoadLibraryA("cards.dll");
	if(!MyCards){
		ShowMessage("cards.dll not loaded");
		return;
	}

	cardImage -> Picture -> Bitmap -> LoadFromResourceID((unsigned)MyCards, scrollBar -> Position);

	FreeLibrary(MyCards);
}
//---------------------------------------------------------------------------
