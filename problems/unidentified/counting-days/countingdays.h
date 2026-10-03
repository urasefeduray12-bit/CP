#ifndef TEST_COUNTING_DAYS_H
#define TEST_COUNTING_DAYS_H

#include <iostream>
#include <vector>
#include <string>
#include <cassert>

// Test senaryosu yapısı
struct TestCase
{
    std::string description;
    std::vector<int> hours; // Srasıyla lookAtClock'a gönderilecek saatler
    int expectedDays;       // Test sonunda beklenilen toplam gün sayısı
};

// Kapsamlı Test Seti
const std::vector<TestCase> TEST_SUITES = {
    {"1. Kattis Örnek Senaryo",
     {6, 7, 8, 5, 6, 7},
     2},
    {"2. Tek Bir Saat Kontrolü",
     {12},
     1},
    {"3. Aynı Saatin Tekrar Edilmesi (Zaman Geçiyor)",
     {10, 10, 10, 10},
     1},
    {"4. Sürekli Artan Saatler (Tek Bir Gün)",
     {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24},
     1},
    {"5. Her Adımda Gece Yarısı Devrilmesi (Çoklu Gün)",
     {23, 1, 23, 1, 23, 1},
     4},
    {"6. Gece Yarısından Tam Geçiş (24 -> 1)",
     {23, 24, 1, 2},
     2},
    {"7. Ardışık Aynı Gece Yarısı Saati (24 -> 24 -> 1)",
     {24, 24, 1},
     2},
    {"8. Uzun Devir Senaryosu (Birkaç Hafta)",
     {12, 18, 24, 1, 6, 12, 18, 24, 1, 5, 20, 2},
     4}};

// Opsiyonel: Kendi fonksiyonunuzu test etmek için çağırabileceğiniz test çalıştırıcı.
// Bu fonksiyonu ana kodunuzda include edip runAllTests(similasyon_fonksiyonunuz) şeklinde çağırabilirsiniz.
template <typename LookAtClockFunc, typename GetDayFunc>
void runCountingDaysTests(LookAtClockFunc lookAtClock, GetDayFunc getDay, void (*resetState)())
{
    int passed = 0;
    int failed = 0;

    std::cout << "=== COUNTING DAYS TEST SUITE BAŞLATILDI ===" << std::endl;

    for (const auto &test : TEST_SUITES)
    {
        resetState(); // Her test senaryosundan önce durumu sıfırla

        for (int hour : test.hours)
        {
            lookAtClock(hour);
        }

        int result = getDay();
        if (result == test.expectedDays)
        {
            std::cout << "[PASSED] " << test.description << std::endl;
            passed++;
        }
        else
        {
            std::cout << "[FAILED] " << test.description
                      << " | Beklenen: " << test.expectedDays
                      << ", Alınan: " << result << std::endl;
            failed++;
        }
    }

    std::cout << "===========================================" << std::endl;
    std::cout << "Toplam: " << TEST_SUITES.size()
              << " | Başarılı: " << passed
              << " | Hatalı: " << failed << std::endl;
}

#endif // TEST_COUNTING_DAYS_H