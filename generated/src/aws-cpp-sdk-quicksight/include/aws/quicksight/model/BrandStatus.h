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
  enum class BrandStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_SUCCEEDED,
    CREATE_FAILED,
    DELETE_IN_PROGRESS,
    DELETE_FAILED
  };

namespace BrandStatusMapper
{
AWS_QUICKSIGHT_API BrandStatus GetBrandStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForBrandStatus(BrandStatus value);
} // namespace BrandStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
