#include "stdafx.h"

int ResultHandler(HRESULT hr) {
  _com_error err(hr);
  std::wcout << L"ERROR: " << err.ErrorMessage() << std::endl;
  return hr;
}