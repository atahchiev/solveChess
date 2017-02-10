#include <stdio.h>

struct complex_position{
    int piece_positions;
    int pieces;
    char extra_pieces
    char move__anpasan_castle;

};

struct uncomplex_position{
    int piece_positions;
    int pieces;
    char move__anpasan_castle;
};

union position{
    struct complex_position cp;
    struct uncomplex_position ucp;
};