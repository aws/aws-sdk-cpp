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
  enum class ChannelAlertState
  {
    NOT_SET,
    SET,
    CLEARED
  };

namespace ChannelAlertStateMapper
{
AWS_MEDIALIVE_API ChannelAlertState GetChannelAlertStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForChannelAlertState(ChannelAlertState value);
} // namespace ChannelAlertStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
