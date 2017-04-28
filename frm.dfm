object Form1: TForm1
  Left = 216
  Top = 157
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'antiv0id'#39's Hex editor'
  ClientHeight = 382
  ClientWidth = 360
  Color = clBlack
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 352
    Width = 80
    Height = 13
    Caption = 'File size: 0 bytes.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 368
    Width = 3
    Height = 13
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 160
    Top = 344
    Width = 21
    Height = 13
    Caption = 'Text'
  end
  object Label4: TLabel
    Left = 160
    Top = 368
    Width = 19
    Height = 13
    Caption = 'Hex'
  end
  object Memo1: TMemo
    Left = 2
    Top = 2
    Width = 357
    Height = 313
    Color = clBlack
    Font.Charset = ANSI_CHARSET
    Font.Color = clLime
    Font.Height = -11
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnChange = Memo1Change
  end
  object Button1: TButton
    Left = 2
    Top = 320
    Width = 75
    Height = 25
    Caption = 'Load'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 80
    Top = 320
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 2
    OnClick = Button2Click
  end
  object edtText: TEdit
    Left = 184
    Top = 336
    Width = 176
    Height = 21
    TabOrder = 3
    OnChange = edtTextChange
  end
  object edtHex: TEdit
    Left = 184
    Top = 360
    Width = 176
    Height = 21
    TabOrder = 4
  end
  object sd: TOpenDialog
    Left = 296
    Top = 280
  end
  object od: TSaveDialog
    Left = 248
    Top = 280
  end
  object Timer1: TTimer
    Interval = 50
    OnTimer = Timer1Timer
    Left = 200
    Top = 280
  end
end
