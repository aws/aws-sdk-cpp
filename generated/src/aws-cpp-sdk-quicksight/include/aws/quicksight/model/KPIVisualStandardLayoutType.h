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
  enum class KPIVisualStandardLayoutType
  {
    NOT_SET,
    CLASSIC,
    VERTICAL
  };

namespace KPIVisualStandardLayoutTypeMapper
{
AWS_QUICKSIGHT_API KPIVisualStandardLayoutType GetKPIVisualStandardLayoutTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForKPIVisualStandardLayoutType(KPIVisualStandardLayoutType value);
} // namespace KPIVisualStandardLayoutTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
