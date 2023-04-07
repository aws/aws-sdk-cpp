/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class RefreshInterval
  {
    NOT_SET,
    MINUTE15,
    MINUTE30,
    HOURLY,
    DAILY,
    WEEKLY,
    MONTHLY
  };

namespace RefreshIntervalMapper
{
AWS_QUICKSIGHT_API RefreshInterval GetRefreshIntervalForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRefreshInterval(RefreshInterval value);
} // namespace RefreshIntervalMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
