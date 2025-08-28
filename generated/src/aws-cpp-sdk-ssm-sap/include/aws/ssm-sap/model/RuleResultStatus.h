/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class RuleResultStatus
  {
    NOT_SET,
    PASSED,
    FAILED,
    WARNING,
    INFO,
    UNKNOWN
  };

namespace RuleResultStatusMapper
{
AWS_SSMSAP_API RuleResultStatus GetRuleResultStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForRuleResultStatus(RuleResultStatus value);
} // namespace RuleResultStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
