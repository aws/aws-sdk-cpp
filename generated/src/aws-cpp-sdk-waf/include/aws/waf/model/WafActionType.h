/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
{
namespace Model
{
  enum class WafActionType
  {
    NOT_SET,
    BLOCK,
    ALLOW,
    COUNT
  };

namespace WafActionTypeMapper
{
AWS_WAF_API WafActionType GetWafActionTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForWafActionType(WafActionType value);
} // namespace WafActionTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
