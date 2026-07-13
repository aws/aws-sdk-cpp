/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ResourcesStringField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ResourcesStringFieldMapper {

static const int ResourceGuid_HASH = HashingUtils::HashString("ResourceGuid");
static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
static const int AccountId_HASH = HashingUtils::HashString("AccountId");
static const int AccountName_HASH = HashingUtils::HashString("AccountName");
static const int Region_HASH = HashingUtils::HashString("Region");
static const int ResourceProvider_HASH = HashingUtils::HashString("ResourceProvider");
static const int ResourceOwnerAccountId_HASH = HashingUtils::HashString("ResourceOwnerAccountId");
static const int ResourceOwnerOrgId_HASH = HashingUtils::HashString("ResourceOwnerOrgId");
static const int ResourceCloudPartition_HASH = HashingUtils::HashString("ResourceCloudPartition");
static const int ResourceRegion_HASH = HashingUtils::HashString("ResourceRegion");
static const int ResourceCategory_HASH = HashingUtils::HashString("ResourceCategory");
static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
static const int ResourceName_HASH = HashingUtils::HashString("ResourceName");
static const int FindingsSummary_FindingType_HASH = HashingUtils::HashString("FindingsSummary.FindingType");
static const int FindingsSummary_ProductName_HASH = HashingUtils::HashString("FindingsSummary.ProductName");

ResourcesStringField GetResourcesStringFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ResourceGuid_HASH) {
    return ResourcesStringField::ResourceGuid;
  } else if (hashCode == ResourceId_HASH) {
    return ResourcesStringField::ResourceId;
  } else if (hashCode == AccountId_HASH) {
    return ResourcesStringField::AccountId;
  } else if (hashCode == AccountName_HASH) {
    return ResourcesStringField::AccountName;
  } else if (hashCode == Region_HASH) {
    return ResourcesStringField::Region;
  } else if (hashCode == ResourceProvider_HASH) {
    return ResourcesStringField::ResourceProvider;
  } else if (hashCode == ResourceOwnerAccountId_HASH) {
    return ResourcesStringField::ResourceOwnerAccountId;
  } else if (hashCode == ResourceOwnerOrgId_HASH) {
    return ResourcesStringField::ResourceOwnerOrgId;
  } else if (hashCode == ResourceCloudPartition_HASH) {
    return ResourcesStringField::ResourceCloudPartition;
  } else if (hashCode == ResourceRegion_HASH) {
    return ResourcesStringField::ResourceRegion;
  } else if (hashCode == ResourceCategory_HASH) {
    return ResourcesStringField::ResourceCategory;
  } else if (hashCode == ResourceType_HASH) {
    return ResourcesStringField::ResourceType;
  } else if (hashCode == ResourceName_HASH) {
    return ResourcesStringField::ResourceName;
  } else if (hashCode == FindingsSummary_FindingType_HASH) {
    return ResourcesStringField::FindingsSummary_FindingType;
  } else if (hashCode == FindingsSummary_ProductName_HASH) {
    return ResourcesStringField::FindingsSummary_ProductName;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourcesStringField>(hashCode);
  }

  return ResourcesStringField::NOT_SET;
}

Aws::String GetNameForResourcesStringField(ResourcesStringField enumValue) {
  switch (enumValue) {
    case ResourcesStringField::NOT_SET:
      return {};
    case ResourcesStringField::ResourceGuid:
      return "ResourceGuid";
    case ResourcesStringField::ResourceId:
      return "ResourceId";
    case ResourcesStringField::AccountId:
      return "AccountId";
    case ResourcesStringField::AccountName:
      return "AccountName";
    case ResourcesStringField::Region:
      return "Region";
    case ResourcesStringField::ResourceProvider:
      return "ResourceProvider";
    case ResourcesStringField::ResourceOwnerAccountId:
      return "ResourceOwnerAccountId";
    case ResourcesStringField::ResourceOwnerOrgId:
      return "ResourceOwnerOrgId";
    case ResourcesStringField::ResourceCloudPartition:
      return "ResourceCloudPartition";
    case ResourcesStringField::ResourceRegion:
      return "ResourceRegion";
    case ResourcesStringField::ResourceCategory:
      return "ResourceCategory";
    case ResourcesStringField::ResourceType:
      return "ResourceType";
    case ResourcesStringField::ResourceName:
      return "ResourceName";
    case ResourcesStringField::FindingsSummary_FindingType:
      return "FindingsSummary.FindingType";
    case ResourcesStringField::FindingsSummary_ProductName:
      return "FindingsSummary.ProductName";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourcesStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
