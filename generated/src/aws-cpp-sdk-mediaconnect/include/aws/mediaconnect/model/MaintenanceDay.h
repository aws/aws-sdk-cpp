/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class MaintenanceDay
  {
    NOT_SET,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
  };

namespace MaintenanceDayMapper
{
AWS_MEDIACONNECT_API MaintenanceDay GetMaintenanceDayForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMaintenanceDay(MaintenanceDay value);
} // namespace MaintenanceDayMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
