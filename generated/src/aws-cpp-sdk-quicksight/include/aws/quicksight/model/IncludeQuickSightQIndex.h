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
  enum class IncludeQuickSightQIndex
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace IncludeQuickSightQIndexMapper
{
AWS_QUICKSIGHT_API IncludeQuickSightQIndex GetIncludeQuickSightQIndexForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIncludeQuickSightQIndex(IncludeQuickSightQIndex value);
} // namespace IncludeQuickSightQIndexMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
