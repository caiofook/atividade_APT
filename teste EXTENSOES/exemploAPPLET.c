#include <windows.h>
#include <cpl.h>

// Função principal que será chamada pelo sistema quando o CPL for aberto
BOOL APIENTRY CPlApplet(HWND hwndCPL, UINT message, LPARAM lParam1, LPARAM lParam2) {
    switch (message) {
        case CPL_INIT:   // Inicialização do applet
            return TRUE;
        case CPL_GETCOUNT:   // Quantidade de applets no arquivo CPL
            return 1;    // Apenas um applet
        case CPL_NEWINQUIRE:   // Obter informações sobre o applet
            {
                LPCPLINFO lpCPlInfo = (LPCPLINFO)lParam2;
                lpCPlInfo->idIcon = 1;   // ID do ícone do applet
                lpCPlInfo->lData = 0;    // Dados adicionais do applet
                lpCPlInfo->lpszName = "Exemplo CPL";   // Nome do applet
                lpCPlInfo->lpszInfo = "Este é um exemplo de applet de Painel de Controle.";  // Informações sobre o applet
                return 0;
            }
        case CPL_DBLCLK:   // Ação quando o applet é duplamente clicado
            MessageBox(hwndCPL, "Olá, mundo! Este é um exemplo de applet de Painel de Controle.", "Exemplo CPL", MB_OK | MB_ICONINFORMATION);
            break;
        case CPL_STOP:   // Parada do applet
        case CPL_EXIT:   // Saída do applet
            break;
    }
    return FALSE;
}