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
enum class KnowledgeBaseSortByField { NOT_SET, KNOWLEDGE_BASE_SIZE_BYTES, CREATED_AT };

namespace KnowledgeBaseSortByFieldMapper {
AWS_QUICKSIGHT_API KnowledgeBaseSortByField GetKnowledgeBaseSortByFieldForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForKnowledgeBaseSortByField(KnowledgeBaseSortByField value);
}  // namespace KnowledgeBaseSortByFieldMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
