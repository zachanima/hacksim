A Hacking Sim
=============

A persistent virtual internet hosts your underground endeavours.

If not real to life, then at least the *least unrealistic* hacking sim around.



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

Anatomy of the interface (1:2 scale):

    [ Artist - Track                                             00:00 ]
    +----------------------------------------+-------------------------+
    | $ sudo nmap localhost                  |                         |
    | Starting Nmap 5.00 at 2009-10-26 06:01 |                         |
    | Interesting ports on localhost (::1):  |                         |
    | PORT  STATE  SERVICE  SOFTWARE         |                         |
    |   21  open   ftp      pure-ftpd 1.0.24 |           MAP           |
    |   80  open   http     lighttpd  1.4.24 |                         |
    | Device type: general purpose           |                         |
    | OS details: Linux 2.6.13-2.6.27        |                         |
    | Nmap done: 1 host scanned in 7.38 s    | [fullscreen]    [local] |
    | $                                      +-------------------------+
    |                                        | NMAP 5.00 RELEASED      |
    |                                        | ==================      |
    |                                        | months of work since... |
    |                TERMINAL                |                         |
    |                                        | MEGACORP COMPROMISED    |
    |                                        | ====================    |
    |                                        | In what appears to be a |
    |                                        | virus outbreak, Mega... |
    |                                        |      COMMUNICATION      |
    |                                        |                         |
    |                                        |                         |
    |                                        |                         |
    |                                        |                         |
    |                                        |                         |
    |                                        |                         |
    |                                        |                         |
    |                                        | [irc][bbs][NEWS][music] |
    +----------------------------------------+-------------------------+

`TERMINAL` is where the majority of the game takes place.

`MAP`/`LOCAL` is a map/blueprint of the current network location.

`COMMUNICATION` is the modular communication panel, containing;

  * IRC
  * BBS
  * News
  * Mail
  * Notes
  * Music
  * Currently active job/jobs
  * Known servers

Left panel has a minimum width of 80 columns.

Right panels have a maximum width of 80 columns. Assuming a minimum width of 52
columns, for IRC, with and without time stamps respectively, this would look
like;

    00:00 <ninechars> The quick brown fox jumps over the
    <ninechars> The quick brown fox jumps over the lazy 


Hardware
--------

Instead of buying upgrades (see **Money** section), any hacked system can be
used as a *base of operations*. The specifications of the currently connected
system will determine the overall speed of hacking, storage capacity, bandwidth
etc.

Your initial - and at all times available - system, localhost, will have pretty
terrible specifications.

In case of losing access to the currently preferred system, whatever copied to
your localhost stays intact. Thus, localhost is kind of a safe (or at least
safer) place to store the most important files.


Money
-----

While the game *will* feature money, these will *not* be usable by the player.

The purpose of money in the game is solely symbolic; ruining people or
companies, supporting organisations, wiring funds ... In short, jobs etc.

The player has no use for money, as upgrades are not bought, but taken (see
**Hardware** section).



Developers
==========

Akselii  
zachanima
