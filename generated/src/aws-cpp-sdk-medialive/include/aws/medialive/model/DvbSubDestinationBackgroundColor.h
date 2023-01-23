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
  enum class DvbSubDestinationBackgroundColor
  {
    NOT_SET,
    BLACK,
    NONE,
    WHITE
  };

namespace DvbSubDestinationBackgroundColorMapper
{
AWS_MEDIALIVE_API DvbSubDestinationBackgroundColor GetDvbSubDestinationBackgroundColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbSubDestinationBackgroundColor(DvbSubDestinationBackgroundColor value);
} // namespace DvbSubDestinationBackgroundColorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
