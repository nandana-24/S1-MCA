
    <?php
    echo "<form method='post' action='roll_drop.php'>";
    echo "Roll No<select name='rolll'>";
    include("example.php");
        $sql="SELECT Roll_No from student";
        $res=mysqli_query($conn,$sql);
        if(mysqli_num_rows($res)>0){
            while($row=mysqli_fetch_assoc($res)){
                echo "<option value='".$row['Roll_No']."'>" . $row['Roll_No'] . "</option>";
            }
        }
        echo "</select>";
        echo "<br><br>";
        echo "<input type='submit' name='search' value='Search'><br><br>";
        if(isset($_POST['search'])){
            
        }
        $roll=$_POST['rolll'];
        $query1="SELECT * from student where Roll_No='$roll'";
        $res=mysqli_query($conn,$query1);
        if(mysqli_num_rows($res)>0){
            while($row=mysqli_fetch_assoc($res)){
                 //echo "Name"."<input type='text' name='name' value=".$row['Name']."><br><br>";
                 echo "Name: ".$row['Name']."<br><br>";
                 echo "Mark1"."<input type='text' name='m1' value=".$row['Mark_1']."><br><br>";
                echo "Mark2"."<input type='text' name='m2' value=".$row['Mark_2']."><br><br>";
            }
        }
        $mark1=$_POST['m1'];
        $mark2=$_POST['m2'];
        $sql1="UPDATE student set Mark_1='$mark1' where Roll_No='$roll'";
        $sql2="UPDATE student set Mark_2='$mark2' where Roll_No='$roll'";
        $res1=mysqli_query($conn,$sql1);
        $res2=mysqli_query($conn,$sql2);
        echo "<input type='submit' value='Update'><br><br>";
        echo "<input type='reset'>";
        echo "</form>";
    ?>