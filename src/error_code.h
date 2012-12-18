############## GNU GENERAL PUBLIC LICENSE, Version 3 #################
# shlib - An useful bash library with some headers and runtime engine.
# Copyright (C) 2012 Alexandre Quercia
# 
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#######################################################################

### START ERROR CODES ###
E_OK=0              # successful termination
E_ERROR=1;
E_PARSE=2;          # Compile-time parse errors.

E__BASE=64          # base value for error messages
E_USAGE=64          # command line usage error
E_DATAERR=65        # data format error
E_NOINPUT=66        # cannot open input
E_NOUSER=67         # addressee unknown
E_NOHOST=68         # host name unknown
E_UNAVAILABLE=69    # service unavailable
E_SOFTWARE=70       # internal software error
E_OSERR=71          # system error (e.g., can't fork)
E_OSFILE=72         # critical OS file missing
E_CANTCREAT=73      # can't create (user) output file
E_IOERR=74          # input/output error
E_TEMPFAIL=75       # temp failure; user is invited to retry
E_PROTOCOL=76       # remote error in protocol
E_NOPERM=77         # permission denied
E_CONFIG=78         # configuration error
E_CTRL_C=79         # user type CTRL+C
E_BAD_VERSION=80
E__MAX=80           # maximum listed value

E_EMPTY=10;
E_EOF=20;

E_OUT="$E_OK";
### END ERROR CODES ###

