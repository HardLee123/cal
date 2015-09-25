# implementation of a simple calculator with C++
<1> Build instructions – How do I build the program(s)?

Firstly, I know the basic grammar is below:

expr -> expr + factor | expr - factor | factor

factor -> factor * term | factor / term | factor % term | term

term -> digit | (expr)

digit -> 0|1|2|3|4|5|6|7|8|9

so, in order to create a AST and then parse the tree,mainly, I need to design 6 classes for number, +, -, *, /,%. then in each class,
we need to specify a certain way(function) to calculate and return the value acoording to their different operation rules.Besides the calculation,
I need to rule the specific Postfix Traversal and Prefix Traversal(for sexpression) for each corresponding operation. then I should start parse the tree we built,
generally, we should parse expression, factor, term and if it is a digit.After that, we build three main function and run them to show calculate result,
Prefix Traversal outputs(sexpression), and Postfix Traversal outputs.

<2> Execution instructions – How do I run the program(s)?

I just make one project including AST,Parse,and main, then run them together.

<3> Testing instructions – Is there a test suite? How do I use it.

I just did easy test with some practical example like:(1+2)*3,9+2-4....and no test suite

