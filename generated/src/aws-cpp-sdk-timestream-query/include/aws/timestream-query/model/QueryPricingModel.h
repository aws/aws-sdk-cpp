/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{
  enum class QueryPricingModel
  {
    NOT_SET,
    BYTES_SCANNED,
    COMPUTE_UNITS
  };

namespace QueryPricingModelMapper
{
AWS_TIMESTREAMQUERY_API QueryPricingModel GetQueryPricingModelForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForQueryPricingModel(QueryPricingModel value);
} // namespace QueryPricingModelMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
