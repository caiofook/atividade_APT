Set objShell = CreateObject("WScript.Shell")

' Caminho para o arquivo alvo (documento)
strTarget = "C:\Caminho\Para\Seu\Documento.docx"

' Nome e caminho para o atalho .SHB
strShortcut = "Z:\MAIN\7EMPEST\TREINAMENTO APT\teste EXTENSOES\exemploSHB.url"

' Criar o objeto de atalho
Set objShortcut = objShell.CreateShortcut(strShortcut)

' Definir o caminho do alvo para o atalho
objShortcut.TargetPath = strTarget

' Salvar o atalho .SHB
objShortcut.Save

' Mensagem de confirmação
MsgBox "Atalho .SHB criado com sucesso!"

' Limpar objetos
Set objShortcut = Nothing
Set objShell = Nothing