/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class ChannelState
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    IDLE,
    STARTING,
    RUNNING,
    RECOVERING,
    STOPPING,
    DELETING,
    DELETED,
    UPDATING,
    UPDATE_FAILED
  };

namespace ChannelStateMapper
{
AWS_MEDIALIVE_API ChannelState GetChannelStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForChannelState(ChannelState value);
} // namespace ChannelStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
