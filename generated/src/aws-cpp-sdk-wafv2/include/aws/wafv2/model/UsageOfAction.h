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
  enum class UsageOfAction
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace UsageOfActionMapper
{
AWS_WAFV2_API UsageOfAction GetUsageOfActionForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForUsageOfAction(UsageOfAction value);
} // namespace UsageOfActionMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
