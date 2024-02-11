/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{
  enum class Decision
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace DecisionMapper
{
AWS_VERIFIEDPERMISSIONS_API Decision GetDecisionForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForDecision(Decision value);
} // namespace DecisionMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
