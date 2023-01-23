/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class UsageLimitBreachAction
  {
    NOT_SET,
    log,
    emit_metric,
    deactivate
  };

namespace UsageLimitBreachActionMapper
{
AWS_REDSHIFTSERVERLESS_API UsageLimitBreachAction GetUsageLimitBreachActionForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForUsageLimitBreachAction(UsageLimitBreachAction value);
} // namespace UsageLimitBreachActionMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
