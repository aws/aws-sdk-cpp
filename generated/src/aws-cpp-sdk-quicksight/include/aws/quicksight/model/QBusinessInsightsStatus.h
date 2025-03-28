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
  enum class QBusinessInsightsStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace QBusinessInsightsStatusMapper
{
AWS_QUICKSIGHT_API QBusinessInsightsStatus GetQBusinessInsightsStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForQBusinessInsightsStatus(QBusinessInsightsStatus value);
} // namespace QBusinessInsightsStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
