# Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>

# This file is part of Open5GS.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Affero General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

pkglib_LTLIBRARIES = libnas.la

libnas_la_SOURCES = \
	nas_message.h nas_ies.h nas_types.h \
	nas_decoder.c nas_encoder.c nas_ies.c nas_types.c \
	$(NULL)

libnas_la_DEPENDENCIES = \
	@OGSCORE_LIBS@ \
    $(top_srcdir)/lib/base/libbase.la \
	$(NULL)

libnas_la_LIBADD = \
	@OGSCORE_LIBS@ \
    $(top_srcdir)/lib/base/libbase.la \
	$(NULL)

AM_CPPFLAGS = \
	@OGSCORE_CFLAGS@ \
    -I$(top_srcdir)/lib \
	$(NULL)

AM_CFLAGS = \
	-Wall -Werror \
	$(NULL)
