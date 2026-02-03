#include QMK_KEYBOARD_H

enum accent_codes {
    // E
    E_MIN_ACUTE,
    E_MIN_GRAVE,
    E_CAP_ACUTE,
    E_CAP_GRAVE,

    // A
    A_MIN_ACUTE,
    A_MIN_GRAVE,
    A_CAP_ACUTE,
    A_CAP_GRAVE,

    // I
    I_MIN_ACUTE,
    I_MIN_GRAVE,
    I_CAP_ACUTE,
    I_CAP_GRAVE,

    // O
    O_MIN_ACUTE,
    O_MIN_GRAVE,
    O_CAP_ACUTE,
    O_CAP_GRAVE,

    // U
    U_MIN_ACUTE,
    U_MIN_GRAVE,
    U_CAP_ACUTE,
    U_CAP_GRAVE,

    EURO,
    DEGREE,
    SECTION,

};

const uint32_t PROGMEM unicode_map[] = {
    [E_MIN_ACUTE] = 0x00E9, // é
    [E_MIN_GRAVE] = 0x00E8, // è
    [E_CAP_ACUTE] = 0x00C9, // É
    [E_CAP_GRAVE] = 0x00C8, // È

    [A_CAP_ACUTE] = 0x00C1, // Á
    [A_CAP_GRAVE] = 0x00C0, // À
    [A_MIN_ACUTE] = 0x00E1, // á
    [A_MIN_GRAVE] = 0x00E0, // à

    [I_MIN_ACUTE] = 0x00ed, // í
    [I_MIN_GRAVE] = 0x00ec, // ì
    [I_CAP_ACUTE] = 0x00CD, // Í
    [I_CAP_GRAVE] = 0x00CC, // Ì

    [O_MIN_ACUTE] = 0x00F3, // ó
    [O_MIN_GRAVE] = 0x00F2, // ò
    [O_CAP_ACUTE] = 0x00D3, // Ó
    [O_CAP_GRAVE] = 0x00D2, // Ò

    [U_MIN_ACUTE] = 0x00FA, // ú
    [U_MIN_GRAVE] = 0x00F9, // ù
    [U_CAP_ACUTE] = 0x00DA, // Ú
    [U_CAP_GRAVE] = 0x00D9, // Ù

    [EURO]    = 0x20AC, // €
    [DEGREE]  = 0x00B0, // °
    [SECTION] = 0x00A7, // §

};

#define EGRV UP(E_MIN_GRAVE, E_MIN_ACUTE)
#define EGRV_CAP UP(E_CAP_GRAVE, E_CAP_ACUTE)
#define AGRV UP(A_MIN_GRAVE, A_MIN_ACUTE)
#define AGRV_CAP UP(A_CAP_GRAVE, A_CAP_ACUTE)
#define IGRV UP(I_MIN_GRAVE, I_MIN_ACUTE)
#define IGRV_CAP UP(I_CAP_GRAVE, I_CAP_ACUTE)
#define OGRV UP(O_MIN_GRAVE, O_MIN_ACUTE)
#define OGRV_CAP UP(O_CAP_GRAVE, O_CAP_ACUTE)
#define UGRV UP(U_MIN_GRAVE, U_MIN_ACUTE)
#define UGRV_CAP UP(U_CAP_GRAVE, U_CAP_ACUTE)
#define EURO UM(EURO)
#define DEG UM(DEGREE)
#define SECT UM(SECTION)
