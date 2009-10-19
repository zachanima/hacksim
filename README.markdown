A Hacking Sim
=============

A persistent virtual internet hosts your underground endeavours.



Preface
=======

Engage in such activities as:

* Gaining admin access to high-security websites
* Retrieving data in exchange for information
* Stealthly listening in on im/email conmunications
* Hacking corporate networks
* Breaking down security systems for information
* Creating, managing and growing botnets
* Tracing, hacking and framing other people
* Scan and analyse systems for vulnerabilities
* Edit/remove key system files, and watch the change affect the world
* Exploit, DDoS, infect, crash, harden or listen on all systems in the world
* Update security software on servers you 'own'
* Gather useful software (either free or illegally)



Specifics
=========

This section lists specific details about various parts of the game.


File systems
------------

File systems are kept simple. Proposed directory structure:

* /bin (all programs)
* /boot (kernel, start-up scripts)
* /etc (configs)
* /home/users
* /var
  * /log
  * /ftp
  * /http

The following file manipulation tools are available to players:

* ls
* cd
* cp
* mv
* rm
* edit


Servers
-------

All servers in the game are retrieved by scanning or pinging the real hosts.

Server contents are generated procedurally, possibly from alexa ratings.


Software
--------

Exploits are released once in a while, and fit a specific software and version.


Software Hierachy
-----------------

* Program
  * NetworkProgram
    * ServerProgram
      * HttpdProgram
        * apached
        * nginxd
        * issd
        * lighttpd
      * FtpdProgram
        * proftpd
        * pureftpd
      * SshdProgram
        * opensshd
        * sshd
      * IrcdProgram
      * DatabaseProgram
        * mysqld
        * mssqld
        * pgsqld
        * sqlited
    * ClientProgram
      * BrowserProgram
        * wget
      * ScanProgram
        * nmap
        * traceroute
        * ping
        * whois
      * ConnectProgram
        * telnet
        * ftp
        * ssh
        * nc
        * irc
      * MonitorProgram
        * netstat
      * ExploitProgram
      * ProxyProgram
        * tor
        * proxy
  * ToolProgram
    * CrackProgram
      * johntheripper
      * rainbow
    * CompilerProgram
      * perl
      * python
      * ruby
      * sh
      * gcc
    * CryptographyProgram
      * gpg
      * rot13
  * SystemProgram
    * FileSystemProgram
      * cd
      * ls
      * mv
      * cp
      * rm
    * InformationProgram
      * uptime
      * who
      * uname
      * date
    * ManageProgram
      * edit
  * SuperProgram
    * su
    * sudo

