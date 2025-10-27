<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
    th 
    {
        background-color: #d3cfc2ff;
        color: #53514aff;
    }
    h2{
        color: #c7c1b0ff;
    }
</style>
<body style="background-color: #4d4b44ff;;">
    <table border=1px align="center" style="background-color: #fffefcff">
<?php
echo "<center>";
echo "<h2>PROGRESS CARD</h2>";
echo "<tr>";
echo "<th width=150 height=50>Name</th>";
echo "<td width=200 height=50 align='center'>".$_POST["name"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Age</th>";
echo "<td align='center'>".$_POST["age"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Roll No</th>";
echo "<td align='center'>".$_POST["roll"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Gender</th>";
echo "<td align='center'>".$_POST["abc"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Mark 1</th>";
echo "<td align='center'>".$_POST["M1"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Mark 2</th>";
echo "<td align='center'>".$_POST["M2"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Mark 3</th>";
echo "<td align='center'>".$_POST["M3"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th height=50>Total Marks</th>";
echo "<td align='center'>".$_POST["total"]."</td>";
echo "</center>";
?>
</table>
</body>
</body>
</html>