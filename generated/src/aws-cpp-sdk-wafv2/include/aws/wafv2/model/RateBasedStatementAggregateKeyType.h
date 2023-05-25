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
  enum class RateBasedStatementAggregateKeyType
  {
    NOT_SET,
    IP,
    FORWARDED_IP
  };

namespace RateBasedStatementAggregateKeyTypeMapper
{
AWS_WAFV2_API RateBasedStatementAggregateKeyType GetRateBasedStatementAggregateKeyTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForRateBasedStatementAggregateKeyType(RateBasedStatementAggregateKeyType value);
} // namespace RateBasedStatementAggregateKeyTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
