<?php
class Form{
    public function __construct(){
        Transaction::open();
    }

    public function controller(){
        try{
                $form = new Template("view/form.html");
                $form->set("id", "");
                $form->set("nome", "");
                $retorno["msg"] = $form->saida();
        }catch(Exception $e){
            $retorno["msg"] = "Ocorreu um erro!".$e->getMessage();
            $retorno["erro"] = TRUE;
        }
        return $retorno;
    }

    public function salvar(){
        if(isset($_POST["nome"])){
            try{
                $conexao = Transaction::get();
                $crud = new Crud();
                $nome = $conexao->quote($_POST["nome"]);
                if(empty($_POST["id"])){
                    $retorno = $crud->insert("sorteio", "nome", "{$nome}");
                }else{
                    $id = $conexao->quote($_POST["id"]);
                    $retorno = $crud->update("sorteio", "nome={$nome}", "id={$id}");
                }
            }catch (Exception $e){
                $retorno["msg"] = "Ocorreu um erro!".$e->getMessage();
                $retorno["erro"] = TRUE;
            }
        }else{
            $retorno["msg"] = "Preencha todos os campos!";
            $retorno["erro"] = TRUE;
        }
        $msg = new Template("view/msg.html");
        $msg->set("cor", $retorno["erro"]?"danger":"success");
        $msg->set("msg", $retorno["msg"]);
        $retorno["msg"] = $msg->saida();
        return $retorno;
    }

    public function __destruct(){
        Transaction::close();
    }
}
?>