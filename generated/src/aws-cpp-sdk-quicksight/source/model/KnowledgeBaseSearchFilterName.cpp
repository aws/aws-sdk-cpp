/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/KnowledgeBaseSearchFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace KnowledgeBaseSearchFilterNameMapper {

static const int KNOWLEDGE_BASE_ID_HASH = HashingUtils::HashString("KNOWLEDGE_BASE_ID");
static const int KNOWLEDGE_BASE_NAME_HASH = HashingUtils::HashString("KNOWLEDGE_BASE_NAME");
static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
static const int KNOWLEDGE_BASE_SIZE_BYTES_HASH = HashingUtils::HashString("KNOWLEDGE_BASE_SIZE_BYTES");
static const int PRIMARY_OWNER_HASH = HashingUtils::HashString("PRIMARY_OWNER");
static const int DATASOURCE_ARN_HASH = HashingUtils::HashString("DATASOURCE_ARN");

KnowledgeBaseSearchFilterName GetKnowledgeBaseSearchFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KNOWLEDGE_BASE_ID_HASH) {
    return KnowledgeBaseSearchFilterName::KNOWLEDGE_BASE_ID;
  } else if (hashCode == KNOWLEDGE_BASE_NAME_HASH) {
    return KnowledgeBaseSearchFilterName::KNOWLEDGE_BASE_NAME;
  } else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH) {
    return KnowledgeBaseSearchFilterName::DIRECT_QUICKSIGHT_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH) {
    return KnowledgeBaseSearchFilterName::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
  } else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH) {
    return KnowledgeBaseSearchFilterName::DIRECT_QUICKSIGHT_SOLE_OWNER;
  } else if (hashCode == KNOWLEDGE_BASE_SIZE_BYTES_HASH) {
    return KnowledgeBaseSearchFilterName::KNOWLEDGE_BASE_SIZE_BYTES;
  } else if (hashCode == PRIMARY_OWNER_HASH) {
    return KnowledgeBaseSearchFilterName::PRIMARY_OWNER;
  } else if (hashCode == DATASOURCE_ARN_HASH) {
    return KnowledgeBaseSearchFilterName::DATASOURCE_ARN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KnowledgeBaseSearchFilterName>(hashCode);
  }

  return KnowledgeBaseSearchFilterName::NOT_SET;
}

Aws::String GetNameForKnowledgeBaseSearchFilterName(KnowledgeBaseSearchFilterName enumValue) {
  switch (enumValue) {
    case KnowledgeBaseSearchFilterName::NOT_SET:
      return {};
    case KnowledgeBaseSearchFilterName::KNOWLEDGE_BASE_ID:
      return "KNOWLEDGE_BASE_ID";
    case KnowledgeBaseSearchFilterName::KNOWLEDGE_BASE_NAME:
      return "KNOWLEDGE_BASE_NAME";
    case KnowledgeBaseSearchFilterName::DIRECT_QUICKSIGHT_OWNER:
      return "DIRECT_QUICKSIGHT_OWNER";
    case KnowledgeBaseSearchFilterName::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
      return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
    case KnowledgeBaseSearchFilterName::DIRECT_QUICKSIGHT_SOLE_OWNER:
      return "DIRECT_QUICKSIGHT_SOLE_OWNER";
    case KnowledgeBaseSearchFilterName::KNOWLEDGE_BASE_SIZE_BYTES:
      return "KNOWLEDGE_BASE_SIZE_BYTES";
    case KnowledgeBaseSearchFilterName::PRIMARY_OWNER:
      return "PRIMARY_OWNER";
    case KnowledgeBaseSearchFilterName::DATASOURCE_ARN:
      return "DATASOURCE_ARN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KnowledgeBaseSearchFilterNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
