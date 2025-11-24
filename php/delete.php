<?php
include("example.php");
echo "<form method='post' action=''>";
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
        //echo "<td><button name='update' value='".$row['roll_no']."'>Update</button></td>";
        //echo "<td><button name='update' onclick=\"window.location.href='update.php?roll_no={$row['roll_no']}'\">Upda
        echo "<td><button name='update' value='".$row['roll_no']."'>delete</button></td>";

        echo "<td><button name='delete' value='".$row['roll_no']."'>delete</button></td>";
        echo "</tr>";
    }
}
if(isset($_POST['delete'])){
    $roll=$_POST['delete'];
    $sql="DELETE from login where Roll_No='$roll'";
    $res=mysqli_query($conn,$sql);
    if($res){
        echo "<script>alert('Deleted');</script>";
    }
}
if(isset($_POST['update'])){
    $roll=$_POST['roll_no'];
    header("Location: update.php?roll_no='$roll'");
    exit;
}
echo "</table>";
?>