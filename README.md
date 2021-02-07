---
description: Membuat keyboard arisu clone dengan cara handwiring (tanpa pcb)
---

# How i built arisu-like keyboard for cheap

## 1. Acrylic case

Most of the time it is cheaper to make acrylic case than 3D printing your own design.

_Acrylic case lebih murah dan gampang dibuat dibanding 3D printed case_

### 2. No PCB required - 

Handwiring keyboard only requires you to have quite simple knowledge about diode, mcu, and qmk. Although this time i will use STM32F103C8 as MCU, but you can use Teensy 2.0++ for easier configuration.

_Handwired keyboard tidak memerlukan pengetahuan yang terlalu dalam tentang qmk, pakai microcontroller seperti Pro Micro atau Teensy 2.0++ untuk_ 

{% hint style="info" %}
**Please refer** [**this** ](https://docs.qmk.fm/#/hand_wire)**guide from QMK docs for creating handwired keyboard.**
{% endhint %}

{% hint style="info" %}
_**Silahkan baca**_ [_**handwiring guide**_ ](https://docs.qmk.fm/#/hand_wire)_**dari QMK untuk petunjuk lebih lengkap.**_ 

STM32 controller lebih rumit untuk digunakan. Silahkan lanjutkan jika anda punya niat membaca.
{% endhint %}

### **My approach on ergonomic keyboards**

