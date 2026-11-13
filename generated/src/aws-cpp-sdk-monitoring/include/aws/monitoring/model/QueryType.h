/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace CloudWatch {
namespace Model {
enum class QueryType { NOT_SET, PROMQL, SQL, METRIC_MATH };

namespace QueryTypeMapper {
AWS_CLOUDWATCH_API QueryType GetQueryTypeForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForQueryType(QueryType value);
}  // namespace QueryTypeMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
