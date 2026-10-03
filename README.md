# Competitive Programming

Bu klasör competitive programming çalışmalarını düzenli tutmak için ayrıldı.

## Klasörler

- `problems/`: Problem bazlı ana düzen.
- `problems/usaco/`: USACO problemleri.
- `problems/kattis/`: Kattis problemleri.
- `problems/practice/`: Belirli bir online judge probleminden çok algoritma/C++ alıştırmaları.
- `problems/unidentified/`: Hangi probleme ait olduğu kesin tespit edilemeyen dosyalar.
- `problems/scratch/`: Editörün geçici deneme dosyaları.
- `notes/obsidian/`: Obsidian not kasası.

Her problem klasöründe kısa bir `problem-info.md` dosyası bulunur. Bu dosya tespitin nedenini ve eminlik seviyesini açıklar.

## Yeni çözüm ekleme

1. Kaynak dosyayı uygun `problems/` alt klasörüne koy.
2. Girdi dosyası gerekiyorsa aynı klasörde tut.
3. Derleme çıktısını aynı problem klasöründeki `build/` altına koy.

Örnek:

```powershell
g++ .\problems\usaco\bronze\2019-jan-shell-game\shellgame.cpp -o .\problems\usaco\bronze\2019-jan-shell-game\build\shellgame.exe
```
# CP
