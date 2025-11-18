<?php
include("example.php");
echo "<table border=1px>";
echo "<tr>";
echo "<th>ROLL NO</th>";
echo "<th>NAME</th>";
echo "<th>ADDRESS</th>";
echo "<th>PHONE NO</th>";
$qr="SELECT roll_no,name,address,phnno from login";
$res=mysqli_query($conn,$qr);
if(mysqli_num_rows($res)>0){
    while($row=mysqli_fetch_assoc($res)){
        echo "<tr>";
        echo "<td>".$row['roll_no']."</td>";
        echo "<td>".$row['name']."</td>";
        echo "<td>".$row['address']."</td>";
        echo "<td>".$row['phnno']."</td>";
        echo "<td><button>update</button></td>";
        echo "<td><button>delete</button></td>";

        echo "</tr>";

    }
}
echo "</table>";
?>