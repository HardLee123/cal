# implementation of a simple calculator with C++
<1> Build instructions – How do I build the program(s)?

Firstly, I know the basic grammar is below:

expr -> expr + factor | expr - factor | factor

factor -> factor * term | factor / term | factor % term | term

term -> digit | (expr)

digit -> 0|1|2|3|4|5|6|7|8|9

so, in order to create a AST and then parse the tree,mainly, I need to design 8 classes,one for basic class(expr),one for binary(since we need to build a binary tree), 6 of them to hold number, +, -, *, /,%. then in cpp files,
we should specify each function to calculate numbers and output sequence we wanted(Prefix Traveral for sexpression and Postfix Traversal ).Then in parser part, we should parse expression, factor, term, judge if it is a number and make them recursive.After that, we build  main function and run them to show calculate result, Prefix Traversal outputs(sexpression), and Postfix Traversal outputs.

<2> Execution instructions – How do I run the program(s)?

I just make one project including AST,Parse,and main, and use Cmake to manange them, then run them together.

<3> Testing instructions – Is there a test suite? How do I use it.

I just did easy test with some practical example like:(1+2)*3,9+2-4....and no test suite

