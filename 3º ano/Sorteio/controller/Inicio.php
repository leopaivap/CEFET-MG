<?php
class Inicio{
    public function controller(){
        $inicio = new Template("view/inicio.html");
        $inicio->set("inicio", "Sistema do Sorteio");
        $retorno["msg"] = $inicio->saida();
        return $retorno;
    }
}
?>