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
  enum class FallbackBehavior
  {
    NOT_SET,
    MATCH,
    NO_MATCH
  };

namespace FallbackBehaviorMapper
{
AWS_WAFV2_API FallbackBehavior GetFallbackBehaviorForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForFallbackBehavior(FallbackBehavior value);
} // namespace FallbackBehaviorMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
