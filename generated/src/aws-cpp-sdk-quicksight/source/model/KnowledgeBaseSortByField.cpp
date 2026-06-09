/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/KnowledgeBaseSortByField.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace KnowledgeBaseSortByFieldMapper {

static const int KNOWLEDGE_BASE_SIZE_BYTES_HASH = HashingUtils::HashString("KNOWLEDGE_BASE_SIZE_BYTES");
static const int CREATED_AT_HASH = HashingUtils::HashString("CREATED_AT");

KnowledgeBaseSortByField GetKnowledgeBaseSortByFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KNOWLEDGE_BASE_SIZE_BYTES_HASH) {
    return KnowledgeBaseSortByField::KNOWLEDGE_BASE_SIZE_BYTES;
  } else if (hashCode == CREATED_AT_HASH) {
    return KnowledgeBaseSortByField::CREATED_AT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KnowledgeBaseSortByField>(hashCode);
  }

  return KnowledgeBaseSortByField::NOT_SET;
}

Aws::String GetNameForKnowledgeBaseSortByField(KnowledgeBaseSortByField enumValue) {
  switch (enumValue) {
    case KnowledgeBaseSortByField::NOT_SET:
      return {};
    case KnowledgeBaseSortByField::KNOWLEDGE_BASE_SIZE_BYTES:
      return "KNOWLEDGE_BASE_SIZE_BYTES";
    case KnowledgeBaseSortByField::CREATED_AT:
      return "CREATED_AT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KnowledgeBaseSortByFieldMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
