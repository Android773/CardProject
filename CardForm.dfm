object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 303
  ClientWidth = 597
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object cardImage: TImage
    Left = 208
    Top = 16
    Width = 161
    Height = 225
  end
  object scrollBar: TScrollBar
    Left = 32
    Top = 264
    Width = 529
    Height = 17
    Max = 65
    Min = 1
    PageSize = 0
    Position = 1
    TabOrder = 0
    OnChange = onScrollChange
  end
end
