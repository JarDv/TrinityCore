/*
 * Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _COMMANDS_H
#define _COMMANDS_H

enum Commands
{
    SUSPEND_COMMS,
    BROADCAST_PACKET,
    CHECK_CAN_ENTER_MAP,
    CHECK_CAN_ENTER_MAP_RESULT,

    OPCODES_MAX
};

enum BroadcastType
{
    BROADCAST_GUILD,
    BROADCAST_GROUP,
    BROADCAST_PLAYER,
    BROADCAST_ACCOUNT,
    BROADCAST_PENDING_SESSION,

    BROADCAST_TYPE_MAX
};

#endif // _COMMANDS_H
