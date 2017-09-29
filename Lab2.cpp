#include <iostream>

int main() {
    // 1 
    std::cout << "1) Enter two numbers" << std::endl;
    int x1 = 0;
    int y1 = 0;
    std::cin >> x1 >> y1;
    if ((x1 % 2 == 1) && (y1 % 2 == 1))
    {
        std::cout << "Both numbers are not even" << std::endl;
    }
    else
    {
        std::cout << "At least one number is even" << std::endl;
    }
    // 2
    std::cout << "2) Enter two numbers" << std::endl;
    int x2 = 0;
    int y2 = 0;
    std::cin >> x2 >> y2;
    if ((x2 < 20) && (y2 >= 20) || ((x2 >= 20) && (y2 < 20)))
    {
        std::cout << "Only one number is less than 20" << std::endl;
    }
    else
    {
        std::cout << "Both numbers are less than 20 or more than 20 " << std::endl;
    }
    // 3
    std::cout << "3) Enter two numbers" << std::endl;
    int x3 = 0;
    int y3 = 0;
    std::cin >> x3 >> y3;
    if ((x3 == 0) || (y3 == 0))
    {
        std::cout << "At least one number is 0" << std::endl;
    }
    else
    {
        std::cout << "Both numbers are not 0" << std::endl;
    }
    // 4
    std::cout << "4) Enter three numbers" << std::endl;
    int x4 = 0;
    int y4 = 0;
    int z4 = 0;
    std::cin >> x4 >> y4 >> z4;
    if ((x4 < 0) && (y4 < 0) && (z4 < 0))
    {
        std::cout << "All numbers are negative" << std::endl;
    }
    else
    {
        std::cout << "At least one number is positive" << std::endl;
    }
    //  5
    std::cout << "5) Enter three numbers" << std::endl;
    int x5 = 0;
    int y5 = 0;
    int z5 = 0;
    std::cin >> x5 >> y5 >> z5;
    if ((x5 % 5 == 0) && (y5 % 5 != 0) && (z5 % 5 != 0))
    {
        std::cout << "First number multiples of 5" << std::endl;
    }
    else if ((x5 % 5 != 0) && (y5 % 5 == 0) && (z5 % 5 != 0))
    {
        std::cout << "Second number multiples of 5" << std::endl;
    }
    else if ((x5 % 5 != 0) && (y5 % 5 != 0) && (z5 % 5 == 0))
    {
        std::cout << "Third number multiples of 5" << std::endl;
    }
    else
    {
        std::cout << "None numbers or more than one multiples 5" << std::endl;
    }
    // 6
    std::cout << "6) Enter three numbers" << std::endl;
    int x6 = 0;
    int y6 = 0;
    int z6 = 0;
    std::cin >> x6 >> y6 >> z6;
    if ((x6 > 100) && (y6 <= 100) && (z6 <= 100))
    {
        std::cout << "First number is more than 100" << std::endl;
    }
    else if ((x6 <= 100) && (y6 > 100) && (z6 <= 100))
    {
        std::cout << "Second number is more than 100" << std::endl;
    }
    else if ((x6 <= 100) && (y6 <= 100) && (z6 > 100))
    {
        std::cout << "Third number is more than 100" << std::endl;
    }
    else
    {
        std::cout << "All numbers are less than 100" << std::endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////// 7
    std::cout << "7) enter a,b for the rook" << std::endl;
    std::pair<int, int> rook;
    std::cin >> rook.first >> rook.second;
    std::cout << "enter c,d for the target" << std::endl;
    std::pair<int, int> target1;
    std::cin >> target1.first >> target1.second;
    while ((0 > rook.first) || (rook.first > 8) || (0 > rook.second) || (rook.second > 8))
    {
        std::cout << "a, b must be > 0 and < 8. Enter a,b for rook again" << std::endl;
        std::cin >> rook.first >> rook.second;
    }
    while ((0 > target1.first) || (target1.first > 8)
        || (0 > target1.second) || (target1.second > 8))
    {
        std::cout << "c, d must be > 0 and < 8. Enter c,d for target again" << std::endl;
        std::cin >> target1.first >> target1.second;
    }
    if ((rook.first == target1.first) || (rook.second == target1.second)) {
    std::cout << "Danger!!! rook can hit " << target1.first << target1.second << std::endl;
    }
    else
    {
    std::cout << "Chill, rook can't hit " << target1.first << target1.second << std::endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////// 8
    std::cout << "8) enter a,b for bishop" << std::endl;
    std::pair<int, int> bishop;
    std::cin >> bishop.first >> bishop.second;
    std::cout << "enter c,d for second figure " << std::endl;
    std::pair<int, int> target2;
    std::cin >> target2.first >> target2.second;
    while ((0 > bishop.first) || (bishop.first > 8) || (0 > bishop.second) || (bishop.second > 8))
    {
        std::cout << "a must be > 0 and < 8. Enter a,b for bishop again" << std::endl;
        std::cin >> bishop.first >> bishop.second;
    }
    while ((0 > target2.first) || (target2.first > 8)
        || (0 > target2.second) || (target2.second > 8))
    {
        std::cout << "b must be > 0 and < 8. Enter c,d for target again" << std::endl;
        std::cin >> target2.first >> target2.second;
    }
    if ((bishop.first - target2.second) == (bishop.second - target2.first)
        || (bishop.first - target2.second) == -(bishop.second - target2.first)) {
        std::cout << "Danger!!! bishop can hit " << target2.first << target2.second << std::endl;
    }
    else
    {
        std::cout << "Chill, bishop can't hit " << target2.first << target2.second << std::endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////// 9
    std::cout << "9) enter a,b for the king" << std::endl;
    std::pair<int, int> king;
    std::cin >> king.first >> king.second;
    std::cout << "enter c,d for second figure " << std::endl;
    std::pair<int, int> target3;
    std::cin >> target3.first >> target3.second;
    while ((0 > king.first) || (king.first > 8) || (0 > king.second) || (king.second > 8))
    {
        std::cout << "a must be > 0 and < 8. Enter a,b for king again" << std::endl;
        std::cin >> king.first >> king.second;
    }
    while ((0 > target3.first) || (target3.first > 8)
    || (0 > target3.second) || (target3.second > 8))
    {
        std::cout << "b must be > 0 and < 8. Enter c,d for target again" << std::endl;
        std::cin >> target3.first >> target3.second;
    }
    if ((-1 <= target3.first - king.first <= 1) || (-1 <target3.second - king.second <= 1))
    {
        std::cout << "King can reach the target in one turn" << std::endl;
    }
    else
    {
        std::cout << "King can't reach the target in one turn" << std::endl;
    }
    //////////////////////////////////////////////////////////////////////////////////////// 10
    std::cout << "10) enter a,b for queen" << std::endl;
    std::pair<int, int> queen;
    std::cin >> queen.first >> queen.second;
    std::cout << "enter c,d for target" << std::endl;
    std::pair<int, int> target4;
    std::cin >> target4.first >> target4.second;
    while ((0 > queen.first) || (queen.first > 8) || (0 > queen.second) || (queen.second > 8))
    {
        std::cout << "a must be > 0 and < 8. Enter a,b for queen again" << std::endl;
        std::cin >> queen.first >> queen.second;
    }
    while ((0 > target4.first) || (target4.first > 8)
    || (0 > target4.second) || (target4.second > 8))
    {
        std::cout << "b must be > 0 and < 8. Enter c,d for target again" << std::endl;
        std::cin >> target4.first >> target4.second;
    }
    if ((queen.first - target4.second) == (queen.second - target4.first)
        || (queen.first - target4.second) == -(queen.second - target4.first)
        || (queen.first == target4.first) || (queen.second == target4.second)) {
        std::cout << "Danger!!! queen can hit " << target4.first << target4.second << std::endl;
    }
    else
    {
        std::cout << "Chill, queen can't hit " << target4.first << target4.second << std::endl;
    }
    //////////////////////////////////////////////////////////////////////////////////////// 11
    std::cout << "11) enter a,b for pawn" << std::endl;
    std::pair<int, int> pawn;
    std::cin >> pawn.first >> pawn.second;
    std::cout << "enter c,d for target" << std::endl;
    std::pair<int, int> target5;
    std::cin >> target5.first >> target5.second;
    while ((0 > pawn.first) || (pawn.first > 8) || (0 > pawn.second) || (pawn.second > 8))
    {
        std::cout << "a must be > 0 and < 8. Enter a,b for bishop again" << std::endl;
        std::cin >> pawn.first >> pawn.second;
    }
    while ((0 > target5.first) || (target5.first > 8)
        || (0 > target5.second) || (target5.second > 8))
    {
        std::cout << "b must be > 0 and < 8. Enter c,d for target again" << std::endl;
        std::cin >> target5.first >> target5.second;
    }
    if ((target5.first == pawn.first + 1) && (target5.second == pawn.second))  // i
    {
        std::cout << "The pawn can reach the target in one turn" << std::endl;
    }
    else if ((pawn.first == 2) && (target5.first == 4) && (target5.second == pawn.second))
    {
        std::cout << "The pawn can reach the target in one turn" << std::endl;
    }
    else if ((target5.first == pawn.first + 1) && ((target5.second == pawn.second + 1)
        || (target5.second == pawn.second - 1)))  // ii
    {
        std::cout << "The pawn can reach the target in one turn" << std::endl;
    }
    else
    {
        std::cout << "The pawn can't reach the target in one turn" << std::endl;
    }
    //////////////////////////////////////////////////////////////////////////////////////// 12
    std::cout << "12)" << std::endl;
    const int factor = 7;
    for (int i = 1; i < 10; ++i)
    {
        std::cout <<  factor << "*" << i << " = " << i * factor << std::endl;
    }
    // 13
    int mult13 = 1;
    for (int i = 8; i < 16; ++i)
    {
        mult13 *= i;
    }
    std::cout << "13)" << std::endl << "8*9*...*15 = " << mult13 << std::endl;
    // 14
    std::cout << "14) Enter a for multiplication from a to 20 (1<a<20)" << std::endl;
    int a14 = 0;
    std::cin >> a14;
    while ((1 > a14) || (a14 > 20))
    {
        std::cout << " a must be from 1 to 20! Enter again" << std::endl;
        std::cin >> a14;
    }
    unsigned int mult14 = 1;
    for (unsigned int i = a14; i < 21; ++i)
    {
        mult14 *= i;
    }
    std::cout << "multiplication from " << a14 << " to 20 = " << mult14 << std::endl;
    // 15
    std::cout << "15) Enter a for multiplication from 1 to b (1<b<20)" << std::endl;
    int b15 = 0;
    std::cin >> b15;
    while ((1 > b15) || (b15 > 20))
    {
        std::cout << " b must be from 1 to 20! Enter again" << std::endl;
        std::cin >> b15;
    }
    unsigned int mult15 = 1;
    for (int i = b15; i >1; --i)
    {
        mult15 *= i;
    }
    std::cout << "Multiplication from 1 to  " << b15 << "  = " << mult15 << std::endl;
    // 16
    std::cout << "15) Enter a and b for multiplication from a to b (b>a)" << std::endl;
    int a16 = 0;
    std::cin >> a16;
    int b16 = 0;
    std::cin >> b16;
    while (b16 < a16)
    {
        std::cout << " b more than a! Enter them again" << std::endl;
        std::cin >> a16;
        std::cin >> b16;
    }
    unsigned int mult16 = 1;
    for (int i = a16; i < b16+1; ++i)
    {
        mult16 *= i;
    }
    std::cout << "Multiplication from " << a16 << " to " << b16 << "  = " << mult16 << std::endl;
    return 0;
}
