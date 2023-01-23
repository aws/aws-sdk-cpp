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
  enum class ActionValue
  {
    NOT_SET,
    ALLOW,
    BLOCK,
    COUNT,
    CAPTCHA,
    CHALLENGE,
    EXCLUDED_AS_COUNT
  };

namespace ActionValueMapper
{
AWS_WAFV2_API ActionValue GetActionValueForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForActionValue(ActionValue value);
} // namespace ActionValueMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
