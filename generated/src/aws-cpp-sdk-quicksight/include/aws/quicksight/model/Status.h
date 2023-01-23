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
  enum class Status
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StatusMapper
{
AWS_QUICKSIGHT_API Status GetStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
