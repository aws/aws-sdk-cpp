/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{
  enum class RuleHealth
  {
    NOT_SET,
    Healthy,
    Unhealthy,
    Provisioning
  };

namespace RuleHealthMapper
{
AWS_OBSERVABILITYADMIN_API RuleHealth GetRuleHealthForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForRuleHealth(RuleHealth value);
} // namespace RuleHealthMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
