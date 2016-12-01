# CekKataFormal
Cek Kata Formal Bahasa Indonesia

Program c++ untuk mengecek hasil terjemah yang belum menggunakan kata formal
Sebagai contoh saya memiliki file (.po) `id.po` yang diambil dan diedit dari [andors-trail](https://github.com/Zukero/andors-trail/tree/master/AndorsTrail/assets/translation)
```
# Indonesian translation for andors-trail
# Copyright (c) 2013 Rosetta Contributors and Canonical Ltd 2013
# This file is distributed under the same license as the andors-trail package.
# FIRST AUTHOR <EMAIL@ADDRESS>, 2013.
#
msgid ""
msgstr ""
"Project-Id-Version: andors-trail\n"
"Report-Msgid-Bugs-To: \n"
"POT-Creation-Date: 2013-11-10 11:48+0000\n"
"PO-Revision-Date: 2014-05-10 06:16+0000\n"
"Last-Translator: Arief Setiadi Wibowo <q_thrynx@yahoo.com>\n"
"Language-Team: Indonesian <id@li.org>\n"
"Language: id\n"
"MIME-Version: 1.0\n"
"Content-Type: text/plain; charset=UTF-8\n"
"Content-Transfer-Encoding: 8bit\n"
"X-Launchpad-Export-Date: 2015-11-02 12:27+0000\n"
"X-Generator: Launchpad (build 17838)\n"

#: [none]
msgid "translator-credits"
msgstr ""
"Launchpad Contributions:\n"
"  Arief Setiadi Wibowo https://launchpad.net/~q-thrynx\n"
"  Noza Putra Pratama https://launchpad.net/~mas-noza"

#: actorconditions_v0610.json:chaotic_curse
msgid "Chaotic curse"
msgstr ""

#: conversationlist_agthor.json:agthor_y3
msgid ""
"Sorry, can't help you there. You're the only kid I've seen running along "
"here in a long time."
msgstr ""
"Maaf, tidak bisa membantumu. Kamu hanya anak kecil yang berlarian di sekitar "
"sini untuk waktu yang lama."

#: conversationlist_agthor.json:agthor_y4
msgid "Sure thing. Here's what I've got."
msgstr "Tentu. Ini yang aku punya."

#: conversationlist_ailshara.json:ailshara_interested_1:1
msgid "I better not talk about it."
msgstr "Sebaiknya aku tidak membicarakan itu."

#: conversationlist_ailshara.json:ailshara_interested_1:2
msgid "Gandoren specifically asked me not to talk to you about it."
msgstr ""

#: conversationlist_algangror.json:algangror_2d
msgid "Clever. I like that."
msgstr "Pintar, aku suka itu."
```
Compile terlebih dahulu CekKataFormal `g++ -o cek_formal cek_formal.cpp` melalui terminal.
Setelah dicompile jalankan program CekKataFormal `cek_formal`, setelah itu akan menghasilkan output:
```
Masukan nama file beserta extensi file: id.po
```

```
######################################################################
# Cek Kata Formal                                                    #
# Author   : Muhammad Taufiq Sumadi                                  #
# Date     : December 12, 2016                                       #
######################################################################

on line: 42
Original text: msgstr "Tentu. Ini yang aku punya."
Sugestion: kata formal dari 'aku' adalah 'saya'
on line: 46
Original text: msgstr "Sebaiknya aku tidak membicarakan itu."
Sugestion: kata formal dari 'aku' adalah 'saya'
on line: 54
Original text: msgstr "Pintar, aku suka itu."
Sugestion: kata formal dari 'aku' adalah 'saya'
```

## Pemakaian
Intruksi diatas saya menggunakan Windows sebagai Operating System. Tools menggunakan Devc++.
