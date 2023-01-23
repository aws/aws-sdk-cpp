/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class PositionalConstraint
  {
    NOT_SET,
    EXACTLY,
    STARTS_WITH,
    ENDS_WITH,
    CONTAINS,
    CONTAINS_WORD
  };

namespace PositionalConstraintMapper
{
AWS_WAFV2_API PositionalConstraint GetPositionalConstraintForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForPositionalConstraint(PositionalConstraint value);
} // namespace PositionalConstraintMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
