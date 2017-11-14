//将一个栈增序排序。不应该对该栈进行任何假设。程序中能用到的栈操作有：push | pop | peek | isEmpty。
//Solve1: 构造一个临时的栈，用插入排序。（这个想法很秒）
//初始空栈，弹出原栈S第一个元素压入临时栈STmp，出栈S的栈顶元素，如果S栈顶元素小于STmp栈顶元素，则把STmp元素压回原栈，直到小于S的栈顶元素。如果大于的话直接压入到临时栈。
//然后重复上述操作，继续比较两个栈顶元素。
//但是考虑到每次往回压到S中中已经比较过栈顶元素了，所以压入原栈的元素可以不用再次比较。再次开辟一个栈直接保存下来，或者采用计数器来优化操作。
//Solve2: 出栈压入到优先队列中，然后再压回到原栈中。