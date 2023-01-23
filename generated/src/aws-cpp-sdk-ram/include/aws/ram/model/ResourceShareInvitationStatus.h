/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceShareInvitationStatus
  {
    NOT_SET,
    PENDING,
    ACCEPTED,
    REJECTED,
    EXPIRED
  };

namespace ResourceShareInvitationStatusMapper
{
AWS_RAM_API ResourceShareInvitationStatus GetResourceShareInvitationStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceShareInvitationStatus(ResourceShareInvitationStatus value);
} // namespace ResourceShareInvitationStatusMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
