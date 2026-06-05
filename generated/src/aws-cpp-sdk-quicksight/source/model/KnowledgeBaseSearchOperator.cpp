/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/KnowledgeBaseSearchOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace KnowledgeBaseSearchOperatorMapper {

static const int STRING_EQUALS_HASH = HashingUtils::HashString("STRING_EQUALS");
static const int STRING_LIKE_HASH = HashingUtils::HashString("STRING_LIKE");
static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");

KnowledgeBaseSearchOperator GetKnowledgeBaseSearchOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_EQUALS_HASH) {
    return KnowledgeBaseSearchOperator::STRING_EQUALS;
  } else if (hashCode == STRING_LIKE_HASH) {
    return KnowledgeBaseSearchOperator::STRING_LIKE;
  } else if (hashCode == GREATER_THAN_OR_EQUALS_HASH) {
    return KnowledgeBaseSearchOperator::GREATER_THAN_OR_EQUALS;
  } else if (hashCode == LESS_THAN_OR_EQUALS_HASH) {
    return KnowledgeBaseSearchOperator::LESS_THAN_OR_EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<KnowledgeBaseSearchOperator>(hashCode);
  }

  return KnowledgeBaseSearchOperator::NOT_SET;
}

Aws::String GetNameForKnowledgeBaseSearchOperator(KnowledgeBaseSearchOperator enumValue) {
  switch (enumValue) {
    case KnowledgeBaseSearchOperator::NOT_SET:
      return {};
    case KnowledgeBaseSearchOperator::STRING_EQUALS:
      return "STRING_EQUALS";
    case KnowledgeBaseSearchOperator::STRING_LIKE:
      return "STRING_LIKE";
    case KnowledgeBaseSearchOperator::GREATER_THAN_OR_EQUALS:
      return "GREATER_THAN_OR_EQUALS";
    case KnowledgeBaseSearchOperator::LESS_THAN_OR_EQUALS:
      return "LESS_THAN_OR_EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace KnowledgeBaseSearchOperatorMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
