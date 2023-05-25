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
  enum class FilterRequirement
  {
    NOT_SET,
    MEETS_ALL,
    MEETS_ANY
  };

namespace FilterRequirementMapper
{
AWS_WAFV2_API FilterRequirement GetFilterRequirementForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForFilterRequirement(FilterRequirement value);
} // namespace FilterRequirementMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
