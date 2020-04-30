#include <cmath>
#include "doctest.h"
#include "solver.hpp"
using namespace solver;
using namespace std;
TEST_CASE("Test for RealVariable function")
{
    RealVariable x;
    //linear
    CHECK_EQ(solve(2 * x - 4 == 10), 7);
    CHECK_EQ(solve(x - 4 == 14), 18);
    CHECK_EQ(solve(2 * x - x == 1), 1);
    CHECK_EQ(solve(2 * x + 4 == 10), 7);
    CHECK_EQ(solve(2 * x - 0 == 10), 5);
    CHECK_EQ(solve(2 * x == 0), 0);
    CHECK_EQ(solve(x / 2 == 1), 1);
    CHECK_EQ(solve(x / 3 == 0), 0);
    CHECK_EQ(solve(1 / x == -10), -1 / 10);
    CHECK_EQ(solve(2 / (x * 2) == 4), 1 / 4);
    CHECK_EQ(solve(1 / (x + 2) == 4), -7 / 4);
    CHECK_EQ(solve(1 / (x - 2) == 4), 9 / 4);

    //Square
    double ans = (solve((2 * (x ^ 2) - 4) == 10));
    CHECK_EQ(ans, 1 + sqrt(6));
    CHECK_EQ(ans, 1 - sqrt(6));
    ans = ((x ^ 2) - 4 == 2);
    CHECK_EQ(ans, sqrt(6));
    CHECK_EQ(ans, -sqrt(6));
    CHECK_EQ(solve(2 * (x ^ 2) - x == 10), 5 / 2);
    CHECK_EQ(solve(2 * (x ^ 2) - x == 10), -2);
    CHECK_EQ(solve(-2 * (x ^ 2) + 4 == 0), (sqrt(2)));
    CHECK_EQ(solve(-2 * (x ^ 2) + 4 == 0), sqrt(-2));
    CHECK_EQ(solve(-1 * (x ^ 2) - 4 * x == -10), (-2 + sqrt(14)));
    CHECK_EQ(solve(-1 * (x ^ 2) - 4 * x == -10), -2 - sqrt(14));
    CHECK_EQ(solve(2 * (x ^ 2) - 3 * x == 10), ((3 - sqrt(89) / 4)));
    CHECK_EQ(solve(2 * (x ^ 2) - 3 * x == 10), ((3 + sqrt(89) / 4)));
    CHECK_EQ(solve((2 * (x ^ 2) - 4) == -4 * x), (-1 + sqrt(3)));
    CHECK_EQ(solve((2 * (x ^ 2) - 4) == -4 * x), (-1 - sqrt(3)));
    CHECK_EQ(solve(-10 * (x ^ 2) == -10), 1);
    CHECK_EQ(solve(-10 * (x ^ 2) == -10), -1);
    CHECK_EQ(solve(-10 * (x ^ 2) - 10 * x == 0), -1);
    CHECK_EQ(solve(-10 * (x ^ 2) - 10 * x == 0), 0);
    CHECK_EQ(solve(-1 * (x ^ 2) - 1 * x == -1 * (x ^ 2)), 0);
    CHECK_EQ(solve(-1 * (x ^ 2) - 1 * x == -2 * (x ^ 2)), 0);
    CHECK_EQ(solve(-1 * (x ^ 2) - 1 * x == -2 * (x ^ 2)), 1);
    CHECK_EQ(solve(-1 * (x ^ 2) - 10 * (x ^ 2) == -1), (sqrt(11) / 11));
    CHECK_EQ(solve(-1 * (x ^ 2) - 10 * (x ^ 2) == -1), (-sqrt(11) / 11));
    CHECK_EQ(solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0 * x / 2 - x), 4);
    CHECK_EQ(solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0 * x / 2 - x), -4);
    CHECK_EQ(solve((x ^ 2) + 2 * x + 1.0 == x / 2 - x), -1 / 2);
    CHECK_EQ(solve((x ^ 2) + 2 * x + 1.0 == x / 2 - x), -2);
    CHECK_EQ(solve(4 * (x ^ 2) + 2 * x - 1.0 == 3 * (x ^ 2) / 2 - (x ^ 2)), -(2 + 3 * sqrt(2)) / 7);
    CHECK_EQ(solve(4 * (x ^ 2) + 2 * x - 1.0 == 3 * (x ^ 2) / 2 - (x ^ 2)), -(2 - 3 * sqrt(2)) / 7);
}
TEST_CASE("Test for RealVariable Throw Exception")
{
    RealVariable x, y;

    CHECK_THROWS(solve((x ^ 2) == -16));
    CHECK_THROWS(solve(x + 5i == 2 * y + 3i));
    CHECK_THROWS(solve(x + 5i == 2 * x + 3i));
    CHECK_THROWS(solve(4 * (x ^ 2) + 4 * x == -4));
    CHECK_THROWS(solve(4 * (x ^ 2) + 4 * x == -4));
    CHECK_THROWS(solve((x ^ 2) - 4 == 0));
    CHECK_THROWS(solve(2 * (x ^ 2) + 4 * x == -4 * y));
    CHECK_THROWS(solve((x ^ 2) + y == -0));
    CHECK_THROWS(solve((x ^ 3) + x == 0));
    CHECK_THROWS(solve(4 * (x ^ 2) + 4 * x == -4));
    CHECK_THROWS(solve((x ^ 2) + 4 * (x ^ 3) == 1));
    CHECK_THROWS(solve(4 * (x ^ 2) + 4 * x == -4));
    CHECK_THROWS(solve(2 * (x ^ 2) - 4 * x + 5 == 0));
    CHECK_THROWS(solve((y ^ 2) + x == 7));

    /////linear Inequalities -  <= -
    CHECK_THROWS(solve(2 * x - 4 <= 10));
    CHECK_THROWS(solve(x - 4 <= 14));
    CHECK_THROWS(solve(2 * x - x <= 1));
    CHECK_THROWS(solve(2 * x + 4 <= 10));
    CHECK_THROWS(solve(2 * x - 0 <= 10));
    CHECK_THROWS(solve(2 * x <= 0));
    CHECK_THROWS(solve(x / 2 <= 1));
    CHECK_THROWS(solve(x / 3 <= 0));
    //  >=
    CHECK_THROWS(solve(2 * x - 4 >= 10));
    CHECK_THROWS(solve(x - 4 >= 14));
    CHECK_THROWS(solve(2 * x - x >= 1));
    CHECK_THROWS(solve(2 * x + 4 >= 10));
    CHECK_THROWS(solve(2 * x - 0 >= 10));
    CHECK_THROWS(solve(2 * x >= 0));
    CHECK_THROWS(solve(x / 2 >= 1));
    CHECK_THROWS(solve(x / 3 >= 0));
    //square Inequalities  <=
    CHECK_THROWS(solve(2 * (x ^ 2) - x <= 10));
    CHECK_THROWS(solve(-2 * (x ^ 2) + 4 <= 0));
    CHECK_THROWS(solve(-2 * (x ^ 2) + 4 <= 0));
    CHECK_THROWS(solve(-1 * (x ^ 2) - 4 * x <= -10));
    CHECK_THROWS(solve(-1 * (x ^ 2) - 4 * x <= -10));
    CHECK_THROWS(solve(2 * (x ^ 2) - 3 * x <= 10));
    CHECK_THROWS(solve(2 * (x ^ 2) - 3 * x <= 10));
    CHECK_THROWS(solve((2 * (x ^ 2) - 4) <= -4 * x));
    CHECK_THROWS(solve((2 * (x ^ 2) - 4) <= -4 * x));
    CHECK_THROWS(solve(-10 * (x ^ 2) <= -10));
    // >=
    CHECK_THROWS(solve(2 * (x ^ 2) - x >= 10));
    CHECK_THROWS(solve(-2 * (x ^ 2) + 4 >= 0));
    CHECK_THROWS(solve(-2 * (x ^ 2) + 4 >= 0));
    CHECK_THROWS(solve(-1 * (x ^ 2) - 4 * x >= -10));
    CHECK_THROWS(solve(-1 * (x ^ 2) - 4 * x >= -10));
    CHECK_THROWS(solve(2 * (x ^ 2) - 3 * x >= 10));
        //  Divide by zero
     CHECK_THROWS(solve(2 * (x^2) - 2/x  == 0));
     CHECK_THROWS(solve(2 * (x^2) - 14/x  == 0));
     CHECK_THROWS(solve(y* (x-20/y) == 0));
     CHECK_THROWS(solve(2 * (x^2) - 2/x  == 0));
     CHECK_THROWS(solve((1/x)*(x-1) - 2/x  == 0));
}
TEST_CASE("Test for ComplexVariable")
{
    ComplexVariable y;

    CHECK_EQ(solve((y ^ 2) == 16), y.ans);
    CHECK_EQ(solve((y ^ 2) == 16), y.ans);
    CHECK_EQ(solve((y ^ 2) + 2 * y + 4 == 20 + 6 * y / 2 - y), y.ans);
    CHECK_EQ(solve(y + 5i == 2 * y + 3i), y.ans);
    CHECK_EQ(solve(7 * (y ^ 2) + 5 * y == -4), y.ans);
    CHECK_EQ(solve(7 * (y ^ 2) + 5 * y == -4), y.ans);
    CHECK_EQ(solve(4 * (y ^ 2) + 4 * y == -4), y.ans);
    CHECK_EQ(solve(-1 * (y ^ 2) + y == 0), y.ans);
    CHECK_EQ(solve(4 * (y ^ 2) + 4 * y == -4 * y + y / 4), y.ans);
    CHECK_EQ(solve(y + 4 * y == (-4 * y) / (y ^ 2)), y.ans);
    CHECK_EQ(solve(-3 * (y ^ 2) == -4 * y + 1), y.ans);
    CHECK_EQ(solve(10 == 2 * (y ^ 2) - 7 * y), y.ans);
    CHECK_EQ(solve(2 * y - 4 == 10), y.ans);
}
TEST_CASE("Test for ComplexVariable Throw Exception")
{
    ComplexVariable y, x;
    CHECK_THROWS(solve(2 * y - 4 + x == 10));
    CHECK_THROWS(solve(2 * (y ^ 2) - 4 + x == 10));
    CHECK_THROWS(solve((y ^ 3) - 4 + 4 * y == 10));
    CHECK_THROWS(solve(2 * y - 4 + x == 10));
    CHECK_THROWS(solve(2 * (y ^ 2) - (y ^ 3) + x == -1 * y));
    CHECK_THROWS(solve(2 * y - 4 + (x ^ 3) == 1));
    CHECK_THROWS(solve(y - (y ^ 2) + 3 * (y ^ 3) + x == 10 * (y ^ 4)));
    CHECK_THROWS(solve(y * x - 4 + x == 10));
    CHECK_THROWS(solve(y - x * (y ^ 3) + x == 10));

    ///Inequalities <=
    CHECK_THROWS(solve(2 * y - 4 + x <= 10));
    CHECK_THROWS(solve((y ^ 2) <= 16));
    CHECK_THROWS(solve((y ^ 2) <= 16));
    CHECK_THROWS(solve((y ^ 2) + 2 * y + 4 <= 20 + 6 * y / 2 - y));
    CHECK_THROWS(solve(y + 5i <= 2 * y + 3i));
    CHECK_THROWS(solve(7 * (y ^ 2) + 5 * y <= -4));
    CHECK_THROWS(solve(7 * (y ^ 2) + 5 * y <= -4));
    CHECK_THROWS(solve(4 * (y ^ 2) + 4 * y <= -4));
    CHECK_THROWS(solve(-1 * (y ^ 2) + y <= 0));
    CHECK_THROWS(solve(4 * (y ^ 2) + 4 * y <= -4 * y + y / 4));
    CHECK_THROWS(solve(y + 4 * y <= (-4 * y) / (y ^ 2)));
    CHECK_THROWS(solve(-3 * (y ^ 2) <= -4 * y + 1));
    CHECK_THROWS(solve(10 <= 2 * (y ^ 2) - 7 * y));
    CHECK_THROWS(solve(2 * y - 4 <= 10));

    //>=
    CHECK_THROWS(solve(2 * y - 4 + x >= 10));
    CHECK_THROWS(solve((y ^ 2) >= 16));
    CHECK_THROWS(solve((y ^ 2) >= 16));
    CHECK_THROWS(solve((y ^ 2) + 2 * y + 4 >= 20 + 6 * y / 2 - y));
    CHECK_THROWS(solve(y + 5i >= 2 * y + 3i));
    CHECK_THROWS(solve(7 * (y ^ 2) + 5 * y >= -4));
    CHECK_THROWS(solve(7 * (y ^ 2) + 5 * y >= -4));
    CHECK_THROWS(solve(4 * (y ^ 2) + 4 * y >= -4));

    //  Divide by zero
     CHECK_THROWS(solve(2 * (y^2) - 2/y  == 0));
     CHECK_THROWS(solve(2 * (y^2) - 14/y  == 0));
     CHECK_THROWS(solve(y* (y-20/y) == 0));
     CHECK_THROWS(solve(2 * (y^2) - 2/y  == 0));
     CHECK_THROWS(solve((1/y)*(y-1) - 2/y  == 0));
}