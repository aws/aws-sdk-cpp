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
  enum class ChannelPlacementGroupState
  {
    NOT_SET,
    UNASSIGNED,
    ASSIGNING,
    ASSIGNED,
    DELETING,
    DELETE_FAILED,
    DELETED,
    UNASSIGNING
  };

namespace ChannelPlacementGroupStateMapper
{
AWS_MEDIALIVE_API ChannelPlacementGroupState GetChannelPlacementGroupStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForChannelPlacementGroupState(ChannelPlacementGroupState value);
} // namespace ChannelPlacementGroupStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
