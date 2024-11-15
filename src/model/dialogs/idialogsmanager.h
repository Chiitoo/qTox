/* SPDX-License-Identifier: GPL-3.0-or-later
 * Copyright © 2019 by The qTox Project Contributors
 * Copyright © 2024 The TokTok team.
 */

#pragma once

#include "idialogs.h"

class GroupId;
class ToxPk;

class IDialogsManager
{
public:
    IDialogsManager() = default;
    virtual ~IDialogsManager();
    IDialogsManager(const IDialogsManager&) = default;
    IDialogsManager& operator=(const IDialogsManager&) = default;
    IDialogsManager(IDialogsManager&&) = default;
    IDialogsManager& operator=(IDialogsManager&&) = default;

    virtual IDialogs* getFriendDialogs(const ToxPk& friendPk) const = 0;
    virtual IDialogs* getGroupDialogs(const GroupId& groupId) const = 0;
};
