﻿// pch.h: это предварительно скомпилированный заголовочный файл.
// Перечисленные ниже файлы компилируются только один раз, что ускоряет последующие сборки.
// Это также влияет на работу IntelliSense, включая многие функции просмотра и завершения кода.
// Однако изменение любого из приведенных здесь файлов между операциями сборки приведет к повторной компиляции всех(!) этих файлов.
// Не добавляйте сюда файлы, которые планируете часто изменять, так как в этом случае выигрыша в производительности не будет.

#ifndef PCH_H
#define PCH_H

#include "pch.h"
#include <cstring>

extern "C" __declspec(dllexport) bool findChars(const char* str, const char* chars)
{
    for (int i = 0; i < strlen(chars); i++)
    {
        if (strchr(str, chars[i]) == NULL)
        {
            return false;
        }
    }

    return true;
}

// Добавьте сюда заголовочные файлы для предварительной компиляции
#include "framework.h"

#endif //PCH_H