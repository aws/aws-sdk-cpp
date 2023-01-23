﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class InvitationStatus
  {
    NOT_SET,
    PENDING,
    ACCEPTED,
    ACCEPTING,
    REJECTED,
    EXPIRED
  };

namespace InvitationStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API InvitationStatus GetInvitationStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForInvitationStatus(InvitationStatus value);
} // namespace InvitationStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
