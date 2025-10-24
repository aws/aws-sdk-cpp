/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class QueryConditionComparisonOperator { NOT_SET, EQUALS };

namespace QueryConditionComparisonOperatorMapper {
AWS_QCONNECT_API QueryConditionComparisonOperator GetQueryConditionComparisonOperatorForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForQueryConditionComparisonOperator(QueryConditionComparisonOperator value);
}  // namespace QueryConditionComparisonOperatorMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
