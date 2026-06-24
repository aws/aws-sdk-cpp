/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/GroupByType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace GroupByTypeMapper {

static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int CATEGORY_HASH = HashingUtils::HashString("CATEGORY");
static const int INTENT_HASH = HashingUtils::HashString("INTENT");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
static const int WEBACL_HASH = HashingUtils::HashString("WEBACL");

GroupByType GetGroupByTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NAME_HASH) {
    return GroupByType::NAME;
  } else if (hashCode == CATEGORY_HASH) {
    return GroupByType::CATEGORY;
  } else if (hashCode == INTENT_HASH) {
    return GroupByType::INTENT;
  } else if (hashCode == ORGANIZATION_HASH) {
    return GroupByType::ORGANIZATION;
  } else if (hashCode == WEBACL_HASH) {
    return GroupByType::WEBACL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GroupByType>(hashCode);
  }

  return GroupByType::NOT_SET;
}

Aws::String GetNameForGroupByType(GroupByType enumValue) {
  switch (enumValue) {
    case GroupByType::NOT_SET:
      return {};
    case GroupByType::NAME:
      return "NAME";
    case GroupByType::CATEGORY:
      return "CATEGORY";
    case GroupByType::INTENT:
      return "INTENT";
    case GroupByType::ORGANIZATION:
      return "ORGANIZATION";
    case GroupByType::WEBACL:
      return "WEBACL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GroupByTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
