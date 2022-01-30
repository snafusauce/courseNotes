
/* Author: Bob Smith
Last modified: April 10
This script processes the customer orders.
*/

Using PHP
<?php echo '<p>Order processed.</p>'; ?> //this prints the order

Printing a date with multiple lines 
<?php
echo "<p>Order processed at "; echo date('H:i, jS F Y');
echo "</p>";
?>

printing a date on one line with . 
<?php
echo "<p>Order processed at ".date('H:i, jS F Y')."</p>";
?>

accessing data
variable names in PHP all start with a dollar sign ($)
this is the name in html
<td><input type="text" name="tireqty" size="3"
You may access the contents of the field tireqty in the following way:
$_POST['tireqty'] </td>

create a new variable
$tireqty = $_POST['tireqty'];

put this kind of block at the top
<?php
// create short variable names 
$tireqty = $_POST['tireqty']; 
$oilqty = $_POST['oilqty']; 
$sparkqty = $_POST['sparkqty'];
?>

use the double quotes to send variable values
this is called interpolation(replacing the variables with values)
echo htmlspecialchars($tireqty).' tires<br />';
echo "$tireqty tires<br />";

specifying strings using the heredoc syntax (<<<)
echo <<<theEnd line 1
line 2
line 3 
theEnd

create variables
$totalqty = 0; 
$totalamount = $totalqty;

variables are weakly typed

variable casting
$totalamount = (float)$totalqty;

A variable variable (changing variable names)
$varname = 'tireqty';
$$varname = 5;
This is equivalent to
$tireqty = 5;

constants
define('TIREPRICE', 100);
define('OILPRICE', 10);
define('SPARKPRICE', 4);

constants do not need the dollar sign, visible globally
echo TIREPRICE;

string operator
$a = "Bob's ";
$b = "Auto Parts"; $result = $a.$b;
The $result variable now contains the string "Bob's Auto Parts".

You can avoid making a copy by using the reference operator. For example,
$a = 5;
$b = &$a;
$a = 7; // $a and $b are now both 7

The error suppression operator (@) can be used in front of any expression—that is, anything that generates or has a value. For example,
$a = @(57/0);

testing and setting variables
string gettype(mixed var);
bool settype(mixed var, string type);
lots of functions like this to check the type
■ is_array()—Checks whether the variable is an array

test if a variable exists
isset

delete a variable
unset

check if a variable has a nonzero value
empty

use colons instead of curly braces
if ($totalqty == 0) {
echo "You did not order anything on the previous page!<br />"; exit;
}
could be converted to this alternative syntax using the keywords if and endif:
if ($totalqty == 0) :
echo "You did not order anything on the previous page!<br />"; exit;
endif;