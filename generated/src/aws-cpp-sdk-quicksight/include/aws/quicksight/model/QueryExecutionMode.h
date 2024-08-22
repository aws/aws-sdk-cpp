/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class QueryExecutionMode
  {
    NOT_SET,
    AUTO,
    MANUAL
  };

namespace QueryExecutionModeMapper
{
AWS_QUICKSIGHT_API QueryExecutionMode GetQueryExecutionModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForQueryExecutionMode(QueryExecutionMode value);
} // namespace QueryExecutionModeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
