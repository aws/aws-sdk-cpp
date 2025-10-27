/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ResourceGroupByField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ResourceGroupByFieldMapper {

static const int AccountId_HASH = HashingUtils::HashString("AccountId");
static const int Region_HASH = HashingUtils::HashString("Region");
static const int ResourceCategory_HASH = HashingUtils::HashString("ResourceCategory");
static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
static const int ResourceName_HASH = HashingUtils::HashString("ResourceName");
static const int FindingsSummary_FindingType_HASH = HashingUtils::HashString("FindingsSummary.FindingType");

ResourceGroupByField GetResourceGroupByFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccountId_HASH) {
    return ResourceGroupByField::AccountId;
  } else if (hashCode == Region_HASH) {
    return ResourceGroupByField::Region;
  } else if (hashCode == ResourceCategory_HASH) {
    return ResourceGroupByField::ResourceCategory;
  } else if (hashCode == ResourceType_HASH) {
    return ResourceGroupByField::ResourceType;
  } else if (hashCode == ResourceName_HASH) {
    return ResourceGroupByField::ResourceName;
  } else if (hashCode == FindingsSummary_FindingType_HASH) {
    return ResourceGroupByField::FindingsSummary_FindingType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceGroupByField>(hashCode);
  }

  return ResourceGroupByField::NOT_SET;
}

Aws::String GetNameForResourceGroupByField(ResourceGroupByField enumValue) {
  switch (enumValue) {
    case ResourceGroupByField::NOT_SET:
      return {};
    case ResourceGroupByField::AccountId:
      return "AccountId";
    case ResourceGroupByField::Region:
      return "Region";
    case ResourceGroupByField::ResourceCategory:
      return "ResourceCategory";
    case ResourceGroupByField::ResourceType:
      return "ResourceType";
    case ResourceGroupByField::ResourceName:
      return "ResourceName";
    case ResourceGroupByField::FindingsSummary_FindingType:
      return "FindingsSummary.FindingType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceGroupByFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
