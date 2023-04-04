import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

class Aplicacao:

    def __init__(self):
        """__init__() instancia a aplicação"""
        jnl = Gtk.Window()
        jnl.connect("delete-event", self.sair)
        jnl.set_title("Açaí Super 10")
        jnl.set_border_width(10)
        jnl.set_size_request(400, -1)

        cxv_principal = Gtk.Box(orientation=Gtk.Orientation.VERTICAL,
                        homogeneous=False, spacing=10)

        rtl = Gtk.Label(label="<span font='14'>.:: Açaí Super 10 ::.</span>", use_markup=True)

        cxh = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL,
                        homogeneous=True, spacing=10)

        cxv_esq = Gtk.Box(orientation=Gtk.Orientation.VERTICAL,
                        homogeneous=False, spacing=10)
        cxv_dir = Gtk.Box(orientation=Gtk.Orientation.VERTICAL,
                        homogeneous=False, spacing=10)

        qdr_tamanho = Gtk.Frame(label="Tamanho:")
        qdr_adicionais = Gtk.Frame(label="Adicionais:")
        qdr_recipiente = Gtk.Frame(label="Recipiente:")

        cxv_tamanho = Gtk.Box(orientation=Gtk.Orientation.VERTICAL,
                        homogeneous=False, spacing=5)
        cxv_adicionais = Gtk.Box(orientation=Gtk.Orientation.VERTICAL,
                        homogeneous=False, spacing=5)
        cxv_recipiente = Gtk.Box(orientation=Gtk.Orientation.VERTICAL,
                        homogeneous=False, spacing=5)


        bte_450 = Gtk.RadioButton(label="450 ml", group=None)
        bte_300 = Gtk.RadioButton(label="300 ml", group=bte_450)
        bte_700 = Gtk.RadioButton(label="700 ml", group=bte_450)
        bte_900 = Gtk.RadioButton(label="900 ml", group=bte_450)

        btv_ban = Gtk.CheckButton(label="Banana")
        btv_pac = Gtk.CheckButton(label="Paçoca")
        btv_cho = Gtk.CheckButton(label="Chocolate")
        btv_lei = Gtk.CheckButton(label="Leite em Pó")
        btv_bis = Gtk.CheckButton(label="Bis")
        btv_mor = Gtk.CheckButton(label="Morango")

        bte_copo = Gtk.RadioButton(label="Copo", group=None)
        bte_tigela = Gtk.RadioButton(label="Tigela", group=bte_copo)

        bt_enviar = Gtk.Button(label="_Enviar", use_underline=True)
        bt_enviar.set_homogeneous=True
        bt_enviar.connect("clicked",self.enviar, [cxv_tamanho, cxv_recipiente,
                                                  cxv_adicionais])

        cxv_tamanho.add(bte_300)
        cxv_tamanho.add(bte_450)
        cxv_tamanho.add(bte_700)
        cxv_tamanho.add(bte_900)

        cxv_adicionais.add(btv_ban)
        cxv_adicionais.add(btv_pac)
        cxv_adicionais.add(btv_cho)
        cxv_adicionais.add(btv_lei)
        cxv_adicionais.add(btv_bis)
        cxv_adicionais.add(btv_mor)

        cxv_recipiente.add(bte_copo)
        cxv_recipiente.add(bte_tigela)

        cxv_principal.add(rtl)
        cxv_principal.add(cxh)

        cxv_esq.pack_start(qdr_tamanho, False, False, 0)
        cxv_esq.pack_end(qdr_recipiente, False, False, 0)

        cxv_dir.pack_start(qdr_adicionais, False, False, 0)
        cxv_dir.pack_end(bt_enviar, False, False, 0)

        qdr_tamanho.add(cxv_tamanho)
        qdr_adicionais.add(cxv_adicionais)
        qdr_recipiente.add(cxv_recipiente)

        cxh.add(cxv_esq)
        cxh.add(cxv_dir)


        jnl.add(cxv_principal)
        jnl.show_all()

    def enviar(self, componente=None, dados=None):
        cxv_tamanho = dados[0]
        cxv_recipiente = dados[1]
        cxv_adicionais = dados[2]

        for bte in cxv_tamanho:
            if bte.get_active():
                print("Tamanho: {}".format(bte.get_label()))

        for bte in cxv_recipiente:
            if bte.get_active():
                print("Recipiente: {}".format(bte.get_label()))

        linha = "Adicionais: "
        for btv in cxv_adicionais:
            if btv.get_active():
                linha += "{}, ".format(btv.get_label())
        linha = linha[:-2] + '.'
        print(linha)

    def sair (self, componente=None, dados=None):
        """Finaliza a aplicacao"""
        Gtk.main_quit()

if __name__ == '__main__':
    prog = Aplicacao()
    Gtk.main()

