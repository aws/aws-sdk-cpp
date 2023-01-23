/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class __PeriodTriggersElement
  {
    NOT_SET,
    ADS
  };

namespace __PeriodTriggersElementMapper
{
AWS_MEDIAPACKAGEVOD_API __PeriodTriggersElement Get__PeriodTriggersElementForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameFor__PeriodTriggersElement(__PeriodTriggersElement value);
} // namespace __PeriodTriggersElementMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
