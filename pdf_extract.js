/* 
Go to problem page. Open Console from Dev Tools and paste the following lines.
*/ 
 
// Codeforces Problems and Articles
var x = document.getElementById('pageContent'); 
x.removeChild(x.children[0]);
document.body.innerHTML = x.innerHTML;
window.print();

// SPOJ Problems
var headContent = "<head>" + document.getElementsByTagName('head')[0].innerHTML + "</head>";
var problemName = "<h2 id='problem-name' class='text-center'>" + document.getElementById('problem-name').innerHTML + "</h2>";
var problemBody = "<div id='problem-body' class='content container'>" + document.getElementById('problem-body').innerHTML + "</div>";
var bodyContent = "<body>" + problemName + problemBody + "</body>";
document.children[0].innerHTML = headContent + bodyContent;
