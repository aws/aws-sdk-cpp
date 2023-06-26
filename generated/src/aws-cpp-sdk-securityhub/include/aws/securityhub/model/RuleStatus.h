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
  enum class RuleStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RuleStatusMapper
{
AWS_SECURITYHUB_API RuleStatus GetRuleStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRuleStatus(RuleStatus value);
} // namespace RuleStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
