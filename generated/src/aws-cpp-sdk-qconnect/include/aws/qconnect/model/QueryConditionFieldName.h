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
enum class QueryConditionFieldName { NOT_SET, RESULT_TYPE };

namespace QueryConditionFieldNameMapper {
AWS_QCONNECT_API QueryConditionFieldName GetQueryConditionFieldNameForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForQueryConditionFieldName(QueryConditionFieldName value);
}  // namespace QueryConditionFieldNameMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
