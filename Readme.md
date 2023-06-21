This is a PClub task submission by Mridul Gupta (220672)

Problem link: https://polygon.codeforces.com/p5MYzYN/code-lk/factory-profit

## Factory Profit

You are a factory manager responsible for optimizing the production quantity of a particular product. Your goal is to find the ideal production quantity that maximizes the profit while considering various cost factors.

For a given target profit value $P$, you have initial capital of $P^3$.

To estimate the optimal production quantity, you need to consider several cost components such as raw materials, labor, and overhead. These costs can be modeled using a polynomial equation.
The polynomial equation $f(a)$ represents the total cost associated with producing $a$ units of the product. It is defined as follows:

$f(a) = 2a^3 + a^2 + 3a + 1000$

Your task is to find the production quantity $a$ that maximize the articles while achieving the target profit P.

#### Input

Input is a single integer $P$ ($100 \le P \le 10^5$), representing the target profit $P$ for which the optimal production quantity needs to be estimated.


#### Output

Output a single line containing the approximate optimal production quantity that yields the target profit. The quantity should be rounded to the nearest integer value.