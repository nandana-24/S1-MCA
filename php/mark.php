<?php
include("example.php");
echo "<form method='post'>";
    echo "<label>Roll no: </label>";
    echo "<select name='roll'>";
    $sql="SELECT roll_no,name from login";
    $res=mysqli_query($conn,$sql);

    if(mysqli_num_rows($res)>0){
        echo "<option value=''></option>";
        while($row=mysqli_fetch_assoc($res)){
            echo "<option value='".$row['roll_no']."'>".$row['roll_no']."</option>";
        }
    }
    echo "</select>";
    //echo "<input type='hidden' name='rolll' value='".$row['roll_no']."'>";
    echo "<button name='search'>Search</button>";
    if(isset($_POST['search'])){
        $roll=$_POST['roll'];
        $qr="SELECT name from login where roll_no='$roll'";
        $res=mysqli_query($conn,$qr);
        if(mysqli_num_rows($res)>0){
            while($row=mysqli_fetch_assoc($res)){
                echo "Roll Number : ".$roll."<br><br>";
                echo "Name : ".$row['name']."<br><br>";
            }
        }
    }
    echo "Science : <input type='text' name='sci'><br><br>";
    echo "Maths : <input type='text' name='math'><br><br>";
    echo "English : <input type='text' name='eng'><br><br>";
    echo "<input type='submit' name='save' value='Save'>";
    echo "<input type='submit' name='reset' value='Reset'>";
    if(isset($_POST['save'])){
        $roll=$_POST['roll'];
        $sci=$_POST['sci'];
        $math=$_POST['math'];
        $eng=$_POST['eng'];
        $qr1="INSERT INTO mark values ('$roll','$sci','$math','$eng')";
        $res1=mysqli_query($conn,$qr1);
        if($res1){
            echo "<script>alert('saved successfully');</script>";
        }

    }
    echo "</form>";



?>