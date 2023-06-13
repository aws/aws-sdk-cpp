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
  enum class AutomationRulesActionType
  {
    NOT_SET,
    FINDING_FIELDS_UPDATE
  };

namespace AutomationRulesActionTypeMapper
{
AWS_SECURITYHUB_API AutomationRulesActionType GetAutomationRulesActionTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAutomationRulesActionType(AutomationRulesActionType value);
} // namespace AutomationRulesActionTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
