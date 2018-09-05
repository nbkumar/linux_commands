Most appropriate link for disk usage- https://www.rootusers.com/13-du-disk-usage-command-examples-in-linux/

-h: human readable, -d 1: depth of directory to display, -c: display total . if command takes time, pipe it to a log and see
sample output
vl-nbt-tiger{151}> du -h -d 1 -c
7.7G	./sandbox
6.1G	./nbt_qspi_talos
7.7G	./talos_sharedcode_rumish
8.2G	./talos_bringup_kgsns
30G	.
30G	total

Display ls to 2 level   ls -d */*/*  

 grep --color -irn 'gpio' common/QSPI/
 
cp -avrf source destination  ie. cp -avrf /prj/vlsi/vlsi_verify/vi_talos/userns/nbt/qspi .  ( copy to current dir)
 
groups nbt -- > to check permission for the path

/pkg/qct/software/perforce/2014.2/p4v & --> to call perforce

to create a alias
>source .cshrc 
> vi .cshrc.local- > add your alias 
> source .cshrc.local  -->again do the source

To find a file  find -type f -iname ""   and  find vi_qspi/ -type f -iname "*target.c*"

to set font in vim: guifont=Courier_New:h9:cANSI

alias example
alias p 'pwd'
alias p4v '/pkg/qct/software/perforce/2014.2/p4v &'
alias dosource 'source /usr2/nbt/.cshrc.local'
alias gorumish 'cd /prj/vlsi/vlsi_verify/vi_talos/users/c_rumish/c_rumish_talos_QSPI_2/vi_qspi/integ/qspi/ASIC/'
alias gocshrc 'gvim /usr2/nbt/.cshrc.local'
alias grep 'grep -irn --color' 

-------------------
find a directory:
find . -type d -name 'd1' -ls 
--------------------------
