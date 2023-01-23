/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class InspectionLevel
  {
    NOT_SET,
    COMMON,
    TARGETED
  };

namespace InspectionLevelMapper
{
AWS_WAFV2_API InspectionLevel GetInspectionLevelForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForInspectionLevel(InspectionLevel value);
} // namespace InspectionLevelMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
