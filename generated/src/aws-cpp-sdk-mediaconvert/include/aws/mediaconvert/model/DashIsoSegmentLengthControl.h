/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoSegmentLengthControl
  {
    NOT_SET,
    EXACT,
    GOP_MULTIPLE
  };

namespace DashIsoSegmentLengthControlMapper
{
AWS_MEDIACONVERT_API DashIsoSegmentLengthControl GetDashIsoSegmentLengthControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoSegmentLengthControl(DashIsoSegmentLengthControl value);
} // namespace DashIsoSegmentLengthControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
