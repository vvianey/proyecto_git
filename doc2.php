doc2.php
<?php  include 'CONEXION.php';
$matalum = $_REQUEST['matalum'];

$del = $con -> query( "DELETE alumno, alum_exa FROM alumno JOIN alum_exa ON alumno.MatAlum = alum_exa.MatAlum WHERE alumno.MatAlum='$matalum'");
if ($del){
	echo "<script> 
	alert('El registro ha sido eliminado');
	location.href='BUSCAR_ALUM3.php';
	</script>";
}else{
 echo "<script> 
alert('El registro no pudo ser eliminado');
	location.href='BUSCAR_ALUM3.php';
	</script>";
}

 ?>