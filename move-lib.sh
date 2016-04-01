find -name *.so -execdir scp -oCiphers=aes128-ctr '{}' root@192.168.1.125:/usr/lib  \;
