/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class KnowledgeBaseSearchOperator { NOT_SET, STRING_EQUALS, STRING_LIKE, GREATER_THAN_OR_EQUALS, LESS_THAN_OR_EQUALS };

namespace KnowledgeBaseSearchOperatorMapper {
AWS_QUICKSIGHT_API KnowledgeBaseSearchOperator GetKnowledgeBaseSearchOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForKnowledgeBaseSearchOperator(KnowledgeBaseSearchOperator value);
}  // namespace KnowledgeBaseSearchOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
