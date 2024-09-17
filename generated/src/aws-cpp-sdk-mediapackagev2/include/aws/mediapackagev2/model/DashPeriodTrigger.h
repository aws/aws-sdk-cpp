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
  enum class DashPeriodTrigger
  {
    NOT_SET,
    AVAILS,
    DRM_KEY_ROTATION,
    SOURCE_CHANGES,
    SOURCE_DISRUPTIONS,
    NONE
  };

namespace DashPeriodTriggerMapper
{
AWS_MEDIAPACKAGEV2_API DashPeriodTrigger GetDashPeriodTriggerForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashPeriodTrigger(DashPeriodTrigger value);
} // namespace DashPeriodTriggerMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
