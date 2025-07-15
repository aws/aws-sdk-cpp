/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace repostspace
{
namespace Model
{
  enum class ChannelRole
  {
    NOT_SET,
    ASKER,
    EXPERT,
    MODERATOR,
    SUPPORTREQUESTOR
  };

namespace ChannelRoleMapper
{
AWS_REPOSTSPACE_API ChannelRole GetChannelRoleForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForChannelRole(ChannelRole value);
} // namespace ChannelRoleMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
