
## How to use the templates?

### CPP Template:

**1) Using Debugging Utility:**

`debug()` takes any number of arguments and prints the output in following format:

```
Line(No.)| variable1_name: value   variable2_name:value ...
```

It can print both - basic data types and most of the STL containers. 

What it can't print is - standard arrays like `int arr[50]`, because passing the name to `debug()` won't be sufficient for it to print the array without knowing it's size and data-type. So, instead use vectors. Also, it can't print vectors of custom data-type. Eg. `struct Point{int x, y;}`. We can't print `vector<Point>`. Among STL containers, it can't print stacks, queues, deques, etc. because they dont have `begin()` and `end()` properties. Despite not being able to print these many containers, `debug()` is still a very powerful tool.

**2) Using Timing Utility:**

If you want to measure the time taken by some part of your code. This is how you do it.

```cpp
START_TIMER;
// Your code whose execution time you want to measure.
STOP_TIMER;
```
This will print the time taken by that code to execute in following format:

```Timer | time_taken_in_seconds.```

To use Debugging and Timing utilities, you need to **compile with extra flags:**

`g++ filename.cpp -D DEBUG TIME`

If these flags are not provided, the utility usage functions will get ignored automatically during compilation. So you can even submit the code directly to any CP platform without commenting your debugging or timer counting steps.

### Python Template:

All read operations are performed by using `stdin` streams to ensure fast input rather than using inbuilt `input()` function. 

To take number of inputs in separate integers, use `readInts()`  and to take input as a list, use `readList()`.

Write your logic inside `main()` function. The advantage of using `main()` is that, now all the variables declared will be local to this function. If we wrote logic as a procedural script without enclosing them in a function, all the variables will be global. In python (or probably in most langs) maintaining global variables is more time consuming than local variables. So enclosing your logic in `main()`, instead of typing it in bare-open way, increases the speed of your code.

Try to use iter functions - `map(), filter() and reduce()` and list comprehensions whenever possible. Also use itertools module and generator functions for efficiency.

## Some extra utilities:

### Test Case Generator

> Work in Progress! Will be available soon.

### Online Problem to PDF Convertor

To save any problem as pdf file: 
1. Go to the webpage of that particular problem
2. Open 'Console' from Dev Tools
3. Paste the following lines and 'Print to PDF'
> Note: Disable 'Headers and Footers' while saving the problem to pdf.

**Codeforces Problems and Articles**
```javascript
var x = document.getElementById('pageContent'); 
x.removeChild(x.children[0]);
document.body.innerHTML = x.innerHTML;
```

**SPOJ Problems**
```javascript
var headContent = "<head>" + document.getElementsByTagName('head')[0].innerHTML + "</head>";
var problemName = "<h2 id='problem-name' class='text-center'>" + document.getElementById('problem-name').innerHTML + "</h2>";
var problemBody = "<div id='problem-body' class='content container'>" + document.getElementById('problem-body').innerHTML + "</div>";
var bodyContent = "<body>" + problemName + problemBody + "</body>";
document.children[0].innerHTML = headContent + bodyContent;
```

### Enjoy CP!