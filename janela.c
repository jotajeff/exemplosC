#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
  // Declaração de variáveis
  HWND hwnd;
  HMENU hmenu;
  WNDCLASSEX wc;

  // Inicializando a classe da janela
  wc.cbSize = sizeof(WNDCLASSEX);
  wc.style = CS_HREDRAW | CS_VREDRAW;
  wc.lpfnWndProc = WndProc;
  wc.cbClsExtra = 0;
  wc.cbWndExtra = 0;
  wc.hInstance = GetModuleHandle(NULL);
  wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
  wc.hCursor = LoadCursor(NULL, IDC_ARROW);
  wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
  wc.lpszMenuName = NULL;
  wc.lpszClassName = "MeuPrograma";
  wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

  // Registrando a classe da janela
  RegisterClassEx(&wc);

  // Criando a janela
  hwnd = CreateWindowEx(
      0,
      "MeuPrograma",
      "Calculadora de idade",
      WS_OVERLAPPEDWINDOW,
      100,
      100,
      400,
      300,
      NULL,
      NULL,
      GetModuleHandle(NULL),
      NULL);

  // Criando o menu
  hmenu = CreateMenu();
  AppendMenu(hmenu, MF_STRING, ID_FECHAR, "Fechar");
  SetMenu(hwnd, hmenu);

  // Exibindo a janela
  ShowWindow(hwnd, SW_SHOW);
  UpdateWindow(hwnd);

  // Loop principal
  while (GetMessage(&msg, NULL, 0, 0)) {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }

  return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
  switch (msg) {
    case WM_COMMAND:
      switch (wParam) {
        case ID_FECHAR:
          DestroyWindow(hwnd);
          break;
      }
      break;
    case WM_DESTROY:
      PostQuitMessage(0);
      break;
    default:
      return DefWindowProc(hwnd, msg, wParam, lParam);
  }

  return 0;
}
