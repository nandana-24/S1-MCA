<?php
    if(isset($_GET['update'])){
        $roll=$_GET['roll_no'];
    }
    echo "<label>Roll no: </label>";
    echo "<input type='text' name='roll' value='$roll'>";
?>