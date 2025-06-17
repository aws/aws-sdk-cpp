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
  enum class AutomationRulesActionTypeV2
  {
    NOT_SET,
    FINDING_FIELDS_UPDATE,
    EXTERNAL_INTEGRATION
  };

namespace AutomationRulesActionTypeV2Mapper
{
AWS_SECURITYHUB_API AutomationRulesActionTypeV2 GetAutomationRulesActionTypeV2ForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAutomationRulesActionTypeV2(AutomationRulesActionTypeV2 value);
} // namespace AutomationRulesActionTypeV2Mapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
