/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{
  enum class InsightCategory
  {
    NOT_SET,
    FAULT
  };

namespace InsightCategoryMapper
{
AWS_XRAY_API InsightCategory GetInsightCategoryForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForInsightCategory(InsightCategory value);
} // namespace InsightCategoryMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
