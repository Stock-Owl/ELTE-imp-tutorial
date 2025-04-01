#include <stdio.h>

#define CH_NAME "Pedro"

char* classes[] = {
    "fighter",
    "barbarian",
    "ranger",
    "rogue",
    "cleric",
    "sorcerer",
    "wizard",
    "warlock",
    "paladin"
};

char* races[] = {
    "human",
    "elf",
    "halfling",
    "dwarf",
    "half-orc",
    "lizardfolk", /* zuckerberg */
    "dragonborn"
};

int main() {
    puts("Welcome to my dnd-terminal!\n");
    int _str = 11,  /* strength */
        _dex = 15,  /* dexterity */
        _con = 9,   /* constitution */
        _int = 10,  /* intelligence */
        _wis = 13,  /* wisdom */
        _cha = 12;  /* charisma */

    int _str_m, _dex_m, _con_m, _int_m, _wis_m, _cha_m;
    char* ch_name = CH_NAME;
    char* ch_adj = "archmage of Csepel";
    int ch_level = 1;
    const int max_hp = 1*8+2;
    int current_hp = max_hp;
    printf("Your character is:\n\t%s, %s!\n", ch_name, ch_adj);
    printf("They are a(n) %s %s", races[3], classes[0]);
    printf("Their stats are:\n" \
            "STR: %i\n"         \
            "DEX: %i\n"         \
            "CON: %i\n"         \
            "INT: %i\n"         \
            "WIS: %i\n"         \
            "CHA: %i\n"         ,
            _str, _dex, _con, _int, _wis, _cha);
    printf("with an HP of %i / %i", current_hp, max_hp);

    return 0;
}
