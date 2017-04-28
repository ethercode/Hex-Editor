//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <stdio.h>
#include "frm.h"
//---------------------------------------------------------------------------
#include <io.h>
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1* Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner):
    TForm(Owner)
{
}
//---------------------------------------------------------------------------

void Read()
{
    AnsiString  t;
    int         i;
    FILE*       f   = fopen(Form1->sd->FileName.c_str(), "rb+");
    int         sz;
    fseek(f, 0, 2);
    sz = ftell(f);
    fseek(f, 0, 0);
    unsigned char ByteDat;
    for (int b = 0; b < sz; b++)
    {
        fread(&ByteDat, 1, 1, f);
        AnsiString  tx  = IntToHex(ByteDat, 2);
        if (b != sz - 1)
        {
            tx += " ";
        }
        t += tx;
    }
    Form1->Memo1->Text = t;
    fclose(f);
}

int hi(AnsiString cc)
{
    AnsiString  c   = UpperCase(cc);
    if (c == "0")
    {
        return 0;
    }
    if (c == "1")
    {
        return 1;
    }
    if (c == "2")
    {
        return 2;
    }
    if (c == "3")
    {
        return 3;
    }
    if (c == "4")
    {
        return 4;
    }
    if (c == "5")
    {
        return 5;
    }
    if (c == "6")
    {
        return 6;
    }
    if (c == "7")
    {
        return 7;
    }
    if (c == "8")
    {
        return 8;
    }
    if (c == "9")
    {
        return 9;
    }
    if (c == "A")
    {
        return 10;
    }
    if (c == "B")
    {
        return 11;
    }
    if (c == "C")
    {
        return 12;
    }
    if (c == "D")
    {
        return 13;
    }
    if (c == "E")
    {
        return 14;
    }
    if (c == "F")
    {
        return 15;
    }
    return 0;
}

void Write()
{
    AnsiString  t   = Form1->Memo1->Text;
    int         s   = 0;
    int         v   = 0;
    FILE*       f   = fopen(Form1->od->FileName.c_str(), "wb+");
    for (int a = 0; a < t.Length(); a++)
    {
        if (s == 0)
        {
            v = 16 * hi(t.c_str()[a]);
            s = 1;
        }
        else if (s == 1)
        {
            v += hi(t.c_str()[a]);
            s = 2;
        }
        else if (s == 2)
        {
            unsigned char by = v;
            fwrite(&by, 1, 1, f);
            v = 0;
            s = 0;
        }
        if (a == t.Length() - 1 && a % 3 == 1)
        {
            unsigned char by = v;
            fwrite(&by, 1, 1, f);
            v = 0;
            s = 0;
        }
    }
    fclose(f);
}

void __fastcall TForm1::Button1Click(TObject* Sender)
{
    if (sd->Execute())
    {
        Read();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject* Sender)
{
    if (od->Execute())
    {
        Write();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo1Change(TObject* Sender)
{
    AnsiString  s   = "File size: ";
    s += IntToStr((Memo1->Text.Length() + 1) / 3);
    s += " bytes.";
    Label1->Caption = s;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject* Sender)
{
    AnsiString  s   = "Offset: 0x";
    s += IntToHex(Memo1->SelStart / 3, 8);
    Label2->Caption = s;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edtTextChange(TObject* Sender)
{
    AnsiString  Text    = edtText->Text;
    AnsiString  t;
    for (int a = 0; a < Text.Length(); a++)
    {
        int         ByteDat = Text.c_str()[a];
        AnsiString  tx      = IntToHex(ByteDat, 2);
        if (a != Text.Length() - 1)
        {
            tx += " ";
        }
        t += tx;
    }
    edtHex->Text = t;
}
//---------------------------------------------------------------------------

