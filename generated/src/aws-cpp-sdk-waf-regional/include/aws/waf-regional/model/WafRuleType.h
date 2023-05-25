/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class WafRuleType
  {
    NOT_SET,
    REGULAR,
    RATE_BASED,
    GROUP
  };

namespace WafRuleTypeMapper
{
AWS_WAFREGIONAL_API WafRuleType GetWafRuleTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForWafRuleType(WafRuleType value);
} // namespace WafRuleTypeMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
