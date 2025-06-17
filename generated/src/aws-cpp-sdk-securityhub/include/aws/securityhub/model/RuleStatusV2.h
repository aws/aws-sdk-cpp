/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class RuleStatusV2
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RuleStatusV2Mapper
{
AWS_SECURITYHUB_API RuleStatusV2 GetRuleStatusV2ForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRuleStatusV2(RuleStatusV2 value);
} // namespace RuleStatusV2Mapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
