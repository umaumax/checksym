# checksym.c

## darwin
```
wget https://gist.githubusercontent.com/mlafeldt/3885346/raw/2ee259afd8407d635a9149fcc371fccf08b0c05b/elf.h
# wget https://opensource.apple.com/source/dtrace/dtrace-96/sys/elf.h
# wget https://raw.githubusercontent.com/qemu/qemu/master/include/elf.h
```

```
clang -std=c11 checksym.c -I. -include ./c_decls.h -include is_elf.h
```

`sample.o`
```
wget 'https://github.com/alexanderhofstaetter/htl-stp-archive/blob/master/Projekte/RF-ID%20(4J-HWE-Tillich)/Code/RFID-Reader/Builds/reader.o?raw=true' -o sample.o
```

* [Installing Elf on Mac through homebrew \- Ask Different]( https://apple.stackexchange.com/questions/276307/installing-elf-on-mac-through-homebrew )
* [elf\.h for OSX]( https://gist.github.com/mlafeldt/3885346 )

* [ELFの読み込みテスト \- φ\(・・\*\)ゞ ｳｰﾝ　カーネルとか弄ったりのメモ]( https://kernhack.hatenablog.com/entry/20100515/1273932423 )

* [Libtool: C header files]( https://www.gnu.org/software/libtool/manual/html_node/C-header-files.html )
* [Libtool \- C header files]( http://cmd.inp.nsk.su/old/cmd2/manuals/gnudocs/gnudocs/libtool/libtool_36.html )
