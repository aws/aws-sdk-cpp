/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
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
AWS_MEDIAPACKAGE_API __PeriodTriggersElement Get__PeriodTriggersElementForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameFor__PeriodTriggersElement(__PeriodTriggersElement value);
} // namespace __PeriodTriggersElementMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
