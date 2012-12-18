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

### START COMPILATOR ###
VERSION_MIN=2;

__compile()
{
    # Comme Chet Ramey ajoute constamment de nouvelles fonctionnalités à Bash,
    # vous pourriez configurer $minimum_version à 2.XX, 3.XX, ou quoi que ce soit
    # de plus approprié.
    if [ "$BASH_VERSION" \< "$VERSION_MIN" ];
    then
      echo "Ce script fonctionne seulement avec Bash, version $VERSION_MIN ou ultérieure.";
      echo "Une mise à jour est fortement recommandée.";
      exit $E_BAD_VERSION;
    fi;

    sh -nu "$@" > /dev/null;
    if [ "$?" != 0 ];
    then
        echo "Script non executer erreur trouvee." >&2;
        exit $E_PARSE;
    fi;
};
### END COMPILATOR ###

