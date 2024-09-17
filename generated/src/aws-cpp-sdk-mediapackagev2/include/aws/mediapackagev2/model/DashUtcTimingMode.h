/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class DashUtcTimingMode
  {
    NOT_SET,
    HTTP_HEAD,
    HTTP_ISO,
    HTTP_XSDATE,
    UTC_DIRECT
  };

namespace DashUtcTimingModeMapper
{
AWS_MEDIAPACKAGEV2_API DashUtcTimingMode GetDashUtcTimingModeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashUtcTimingMode(DashUtcTimingMode value);
} // namespace DashUtcTimingModeMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
