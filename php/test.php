<!-- <html>
    <head>
        <title></title>
    </head>
    <body> -->
        <select>
        <?php
    echo "<script>alert('Hello');</script>";
    for($i=0;$i<100;$i++){
        echo "<option val=$i>".$i."</option>";
    }
?>
       </select>
    <!-- </body>
</html>--> 
<?php
$a="hello";
echo strtoupper($a);
$b="HELLO";
echo strtolower($b);
$c="hello world";
echo str_replace("world","hari",$c);
echo strrev($b);
echo trim($c);
echo strlen($b);
echo "<br><br>";
echo "ghhj";
?>

<form action="new.php" method="post">
    name<input type="text" name="abc">
    <input type="submit">
    <input type="reset">
</form>