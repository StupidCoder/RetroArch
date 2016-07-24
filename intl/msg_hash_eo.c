/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2011-2016 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include <string.h>

#include "../configuration.h"
#include "../msg_hash.h"

int menu_hash_get_help_eo_enum(enum msg_hash_enums msg, char *s, size_t len)
{
   switch (msg)
   {
      case MSG_UNKNOWN:
      default:
         return -1;
   }

   return 0;
}

int menu_hash_get_help_eo(uint32_t hash, char *s, size_t len)
{
   int ret = 0;

   switch (hash)
   {
      case 0:
      default:
         ret = -1;
         break;
   }

   return ret;
}

const char *msg_hash_to_str_eo(enum msg_hash_enums msg)
{
   switch (msg)
   {
      case 0:
      default:
         break;
   }

   return "null";
}
