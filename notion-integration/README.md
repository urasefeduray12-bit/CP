# Notion Integration

Bu klasor Notion'a aktarim icin hazirlanan dosyalari icerir.

## Dosyalar

- `notion-import.csv`: Notion'a direkt import edilecek tablo.
- `notion-import.json`: Ayni verinin otomasyon/API icin JSON hali.

## Onerilen Notion Database Ozellikleri

- `Name`: Title
- `Platform`: Select
- `Category`: Select
- `Status`: Select
- `Confidence`: Select
- `Type`: Text
- `Evidence`: Text
- `Note`: Text
- `Local Path`: Text
- `Problem URL`: URL
- `Source Files`: Text
- `Build Files`: Text

## Import

1. Notion'da yeni bir sayfa ac.
2. `Import` -> `CSV` sec.
3. `notion-import.csv` dosyasini sec.
4. `Problem URL` kolonunu URL, `Platform`, `Category`, `Status`, `Confidence` kolonlarini Select olarak ayarla.

