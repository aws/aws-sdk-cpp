/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class UsageLimitBreachAction
  {
    NOT_SET,
    log,
    emit_metric,
    disable
  };

namespace UsageLimitBreachActionMapper
{
AWS_REDSHIFT_API UsageLimitBreachAction GetUsageLimitBreachActionForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForUsageLimitBreachAction(UsageLimitBreachAction value);
} // namespace UsageLimitBreachActionMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
