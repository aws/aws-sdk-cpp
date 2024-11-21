/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class ConditionOperatorType
  {
    NOT_SET,
    Equals,
    NotEquals,
    GreaterThen,
    GreaterOrEquals,
    LessThen,
    LessOrEquals
  };

namespace ConditionOperatorTypeMapper
{
AWS_RESILIENCEHUB_API ConditionOperatorType GetConditionOperatorTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForConditionOperatorType(ConditionOperatorType value);
} // namespace ConditionOperatorTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
