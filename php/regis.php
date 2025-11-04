<table border=1px>
<?php
include("example.php");
$name=$_POST["name"];
$rol=$_POST["roll"];
$gend=$_POST["abc"];
$mark1=$_POST["m1"];
$mark2=$_POST["m2"];
$email=$_POST["email"];
$total=$mark1+$mark2;
$sql="SELECT * from student where Roll_No='$rol'";
$res=mysqli_query($conn,$sql);
if(mysqli_num_rows($res)>0){
    echo "<script>alert('ROW EXIST');
    window.location.href='registrtion.php'</script>";
}
else{
    $sql1="INSERT INTO student VALUES('$rol','$name','$gend','$email','$mark1','$mark2','$total')";
    $res1=mysqli_query($conn,$sql1);
    if($res1){
        echo "<script>alert('Inserted');
    window.location.href='registrtion.php'</script>";
    }
}
//mysqli_close($conn);
/*echo "<h2>REGISTRATION FORM</h2>";
echo "<tr>";
echo "<th>NAME</th>";
echo "<td>".$_POST["name"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th>AGE</th>";
echo "<td>".$_POST["age"]."</td>";
echo "</tr>";
echo "<tr>";
echo "<th>E-MAIL</th>";
echo "<td>".$_POST["email"]."</td>";
echo "</tr>";*/
?>
</table>