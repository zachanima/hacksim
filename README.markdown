A Hacking Sim
=============

A persistent virtual internet hosts your underground endeavours.



Preface
=======

Engage in such activities as:

* Gaining admin access to high-security websites
* Retrieving data in exchange for information
* Stealthly listening in on im/email conmunications
* Hacking corporate networks, banks, government facilities and the likes
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
        * tracetracker
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


Interface
---------

Discussed anatomies of the interface, ordered by agreement:

    [    STATUS    ] 1st
    +--------+-----+
    |        | MAP |
    |  TERM  +-----+
    |        | COM |
    +--------+-----+

    [    STATUS    ] 2nd
    +--------+-----+
    |  VIEW  | SYS |
    +--------+-----+
    |  TERM  | COM |
    +--------+-----+

    [    STATUS    ] 3rd
    +--------+-----+
    |  VIEW  |     |
    +--------+ COM |
    |  TERM  |     |
    +--------+-----+

    [    STATUS    ] 4th
    +--------------+
    |     VIEW     |
    +--------+-----+
    |  TERM  | COM |
    +--------+-----+

`STATUS` contains current music track and current time

`TERM` is the terminal - this is where the majority of the game takes place.

`MAP`/`VIEW` is a map/blueprint of the current network location.

`SYS` is general information about current events. This could be overlaying map.

`COM` is the modular communication panel, containing;

  * IRC
  * BBS
  * News
  * Mail
  * Jobs
  * Music

Left panels have a minimum width of 80 columns.

Right panels have a fixed width of 50 columns. For IRC, with and without time
stamps respectively, this would look like;

    00:00 <ninechars> The quick brown fox jumps over t
    <ninechars> The quick brown fox jumps over the laz



Developers
==========

Akselii  
zachanima
