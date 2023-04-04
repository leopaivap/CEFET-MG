<?php
class Sorteio{
    public function __construct(){
        Transaction::open();
    }

    public function controller(){
        try{
                $conexao = Transaction::get();
                $crud = new Crud();
                $sort = rand(1,31);
                $consult = $crud->select("sorteio", "*", "id={$sort}");
                $cons = $consult["msg"];
                if(count($cons)==1){
                    $form = new Template("view/sorteio.html");
                    $form->set("id", $cons[0]["id"]);
                    foreach($cons[0] as $cod => $c){
                        $form->set($cod, $c);
                    }
                    $retorno["msg"] = $form->saida();
                }else{
                    $msg = new Template("view/msg.html");
                    $msg->set("cor", "danger");
                    $msg->set("msg", $retorno["msg"]);
                    $retorno["msg"] = $msg->saida();
                }
                $retorno["erro"] = $consult["erro"];
            }catch(Exception $e){
                $retorno["msg"] = "Ocorreu um erro!".$e->getMessage();
                $retorno["erro"] = TRUE;
                Transaction::rollback();
            }
            return $retorno;
        }

    public function __destruct(){
        Transaction::close();
    }
}
?>