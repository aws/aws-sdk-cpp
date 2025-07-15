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
  enum class ChannelStatus
  {
    NOT_SET,
    CREATED,
    CREATING,
    CREATE_FAILED,
    DELETED,
    DELETING,
    DELETE_FAILED
  };

namespace ChannelStatusMapper
{
AWS_REPOSTSPACE_API ChannelStatus GetChannelStatusForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForChannelStatus(ChannelStatus value);
} // namespace ChannelStatusMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
