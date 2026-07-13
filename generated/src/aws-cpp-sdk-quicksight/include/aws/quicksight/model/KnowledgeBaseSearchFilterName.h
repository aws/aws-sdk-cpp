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
enum class KnowledgeBaseSearchFilterName {
  NOT_SET,
  KNOWLEDGE_BASE_ID,
  KNOWLEDGE_BASE_NAME,
  DIRECT_QUICKSIGHT_OWNER,
  DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
  DIRECT_QUICKSIGHT_SOLE_OWNER,
  KNOWLEDGE_BASE_SIZE_BYTES,
  PRIMARY_OWNER,
  DATASOURCE_ARN
};

namespace KnowledgeBaseSearchFilterNameMapper {
AWS_QUICKSIGHT_API KnowledgeBaseSearchFilterName GetKnowledgeBaseSearchFilterNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForKnowledgeBaseSearchFilterName(KnowledgeBaseSearchFilterName value);
}  // namespace KnowledgeBaseSearchFilterNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
