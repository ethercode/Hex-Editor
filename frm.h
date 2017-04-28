//---------------------------------------------------------------------------

#ifndef frmH
#define frmH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1:public TForm
{
__published:    // IDE-managed Components
    TMemo*                  Memo1;
    TButton*                Button1;
    TButton*                Button2;
    TOpenDialog*            sd;
    TSaveDialog*            od;
    TLabel*                 Label1;
    TLabel*                 Label2;
    TTimer*                 Timer1;
    TEdit*                  edtText;
    TEdit*                  edtHex;
    TLabel*                 Label3;
    TLabel*                 Label4;
    void __fastcall         Button1Click(TObject* Sender);
    void __fastcall         Button2Click(TObject* Sender);
    void __fastcall         Memo1Change(TObject* Sender);
    void __fastcall         Timer1Timer(TObject* Sender);
    void __fastcall         edtTextChange(TObject* Sender);
private:    // User declarations
public:     // User declarations
    __fastcall              TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1*  Form1;
//---------------------------------------------------------------------------
#endif
