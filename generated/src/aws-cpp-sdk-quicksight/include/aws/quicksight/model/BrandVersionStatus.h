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
  enum class BrandVersionStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_SUCCEEDED,
    CREATE_FAILED
  };

namespace BrandVersionStatusMapper
{
AWS_QUICKSIGHT_API BrandVersionStatus GetBrandVersionStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForBrandVersionStatus(BrandVersionStatus value);
} // namespace BrandVersionStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
