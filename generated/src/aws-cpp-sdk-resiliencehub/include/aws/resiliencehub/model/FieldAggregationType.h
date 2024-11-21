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
  enum class FieldAggregationType
  {
    NOT_SET,
    Min,
    Max,
    Sum,
    Avg,
    Count
  };

namespace FieldAggregationTypeMapper
{
AWS_RESILIENCEHUB_API FieldAggregationType GetFieldAggregationTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForFieldAggregationType(FieldAggregationType value);
} // namespace FieldAggregationTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
