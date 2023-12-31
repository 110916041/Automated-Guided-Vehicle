# Automated-Guided-Vehicle

一、	專題主題

  了解計算機組織及微算機架構，並透過實作進行驗證與測試。本堂課程將進行循跡避障自走車的實作，並進行實際測試。
  
二、	功能規劃簡介

  完成循跡避障自走車組裝後，撰寫Arduino程式控制自走車能夠沿著黑線行走，完成循跡的功能。另外，在遇到障礙物時能夠及時繞過障礙物，並繼續前進完成循跡。

三、	組裝過程說明

  1.	首先會拿到一個基底板(上面有一堆孔洞的那個)，然後裝上馬達，並用兩個夾板夾住。(總共需要四個螺絲跟四片木板)

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/1.png)

  2.	內容物能找到一塊馬達驅動模組，將它裝在木板中間。(需要一個螺絲，及一根銅柱)

         ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/2.png)

  3.	將輔助輪裝在車尾。

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%873.png)

  4.	拿出包裝袋內的arduino uno板，將它鎖在板子上。(需要兩個螺絲，兩個銅柱)，鎖好之後，拿出arduino 擴充板，第一根針對齊之後插入在UNO板上(針要注意，不能插歪，不然執行時可能會錯誤)

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/4.png)
        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%875.png)

  5.	拿出超音波支架，要安裝在最前端，根據每個基板的不同，上面的孔洞也會有不同，但盡量能裝在整個自走車的最前端，因為要進行避障的偵測。

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%877.png)

  6.	拿出兩片紅外線感測器，以及兩根最長銅柱，安裝在超音波支架的下方。並用螺絲固定住。(不能鎖太大力，怕電路板會被破壞)
      因為感測器若是靈敏度不夠，可能會無法分辨黑色軌道根白色的差別，因此可以使用螺帽來縮減與地板之間的距離。
         ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%876.png)

  7.	將電池插座放置在基板中間(可以不用裝，改用行動電源供電。)

四、接線步驟：
  1.	可以看到馬達上有六根針，分別是VCC、GND、IA1、IA2、IB1、IB2

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%878.png)
    
        而VCC與GND須裝在arduino擴充板上的V與G的位置。而IA1、IB1分別接在S那橫排的10跟9(可以對調，只是寫程式時需要自己改)，IA2、IB2各自接在5跟6。而馬達驅動板上，一共有四個孔，各自接再馬達的銅片上。

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%879.png)

  2.	接著裝紅外線感測器，可以看到感測器上有四根針，分別是VCC、GND、V0、D0，而其中A0不需要用到，(上到下是VCC、GND、D0、A0)其中，VCC和GND一樣接在V跟G上，而左邊感測器的D0接在S2，右邊感測器接在S3上。

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%8710.png)

  3.	取出超音波感測器，可以看到上面一樣有四根針，分別是VCC、Trig、Echo、GND (VCC和GND一樣接在V跟G上)而Trig要接在S12，Echo要接在S13。

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%8711.png)

  4.	最後再根據自己需求，安裝電池或使用行動電源就結束啦!若使用電池，則將插座插在UNO板側邊上的插槽。

        ![image](https://github.com/110916041/Automated-Guided-Vehicle/blob/eb82a8fab97007a15c85f40c96f5cc76171ad3d4/image/%E5%9C%96%E7%89%8713.png)

結果展示：

https://github.com/110916041/Automated-Guided-Vehicle/assets/85982232/2be6406c-aafd-4c26-8586-06a08795e92d

https://github.com/110916041/Automated-Guided-Vehicle/assets/85982232/f9856fe6-28ce-43c4-ab17-58edeacc55a4



