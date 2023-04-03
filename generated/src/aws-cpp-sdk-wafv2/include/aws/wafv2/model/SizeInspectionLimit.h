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
  enum class SizeInspectionLimit
  {
    NOT_SET,
    KB_16,
    KB_32,
    KB_48,
    KB_64
  };

namespace SizeInspectionLimitMapper
{
AWS_WAFV2_API SizeInspectionLimit GetSizeInspectionLimitForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForSizeInspectionLimit(SizeInspectionLimit value);
} // namespace SizeInspectionLimitMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
