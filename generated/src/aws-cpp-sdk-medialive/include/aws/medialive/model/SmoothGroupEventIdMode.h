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
  enum class SmoothGroupEventIdMode
  {
    NOT_SET,
    NO_EVENT_ID,
    USE_CONFIGURED,
    USE_TIMESTAMP
  };

namespace SmoothGroupEventIdModeMapper
{
AWS_MEDIALIVE_API SmoothGroupEventIdMode GetSmoothGroupEventIdModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupEventIdMode(SmoothGroupEventIdMode value);
} // namespace SmoothGroupEventIdModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
