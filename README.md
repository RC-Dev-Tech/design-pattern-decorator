# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Decorator 裝飾者模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 目的
在不改變現有對象的情況下，動態地給一個對象添加一些額外的職責。

---

## 使用時機
當需要在不影響現有代碼的前提下，對現有對象進行功能擴展或增強，且希望擴展的功能可以動態組合時。

---

## URL結構圖
![](https://drive.google.com/uc?id=1K21D11UZT6zUBPOVl1rfv3rRDzLZOvHJ)
> 圖片來源：[Refactoring.Guru - Decorator](https://refactoring.guru/design-patterns/decorator) 

---

## 實作成員
* Component
 * 定義一個共同的接口，用於具體組件和裝飾器的一致性。
* ConcreteComponent
 * 實現Component接口，是被裝飾的對象，也就是需要添加額外職責的對象。
* Decorator
 * 實現Component接口，同時持有一個Component對象的實例，即被裝飾對象。
* ConcreteDecorator
 * 繼承Decorator類，實現對被裝飾對象的具體裝飾功能。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/design-pattern-decorator/blob/main/C%2B%2B/main.cpp) - Decorator Pattern (C++)

---

## 參考資料
* [Wiki - Decorator Pattern](https://en.wikipedia.org/wiki/Decorator_pattern) <br>
* [Refactoring.Guru - Decorator](https://refactoring.guru/design-patterns/decorator) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
