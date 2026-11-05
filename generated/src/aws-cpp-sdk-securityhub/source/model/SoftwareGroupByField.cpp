/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/SoftwareGroupByField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace SoftwareGroupByFieldMapper {

static const int AccountId_HASH = HashingUtils::HashString("AccountId");
static const int PackageName_HASH = HashingUtils::HashString("PackageName");
static const int PackageVersion_HASH = HashingUtils::HashString("PackageVersion");
static const int PackageType_HASH = HashingUtils::HashString("PackageType");
static const int Region_HASH = HashingUtils::HashString("Region");
static const int ResourceRegion_HASH = HashingUtils::HashString("ResourceRegion");
static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
static const int ResourceProvider_HASH = HashingUtils::HashString("ResourceProvider");
static const int ResourceOwnerAccountId_HASH = HashingUtils::HashString("ResourceOwnerAccountId");
static const int ResourceOwnerOrgId_HASH = HashingUtils::HashString("ResourceOwnerOrgId");
static const int ResourceCloudPartition_HASH = HashingUtils::HashString("ResourceCloudPartition");

SoftwareGroupByField GetSoftwareGroupByFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccountId_HASH) {
    return SoftwareGroupByField::AccountId;
  } else if (hashCode == PackageName_HASH) {
    return SoftwareGroupByField::PackageName;
  } else if (hashCode == PackageVersion_HASH) {
    return SoftwareGroupByField::PackageVersion;
  } else if (hashCode == PackageType_HASH) {
    return SoftwareGroupByField::PackageType;
  } else if (hashCode == Region_HASH) {
    return SoftwareGroupByField::Region;
  } else if (hashCode == ResourceRegion_HASH) {
    return SoftwareGroupByField::ResourceRegion;
  } else if (hashCode == ResourceType_HASH) {
    return SoftwareGroupByField::ResourceType;
  } else if (hashCode == ResourceId_HASH) {
    return SoftwareGroupByField::ResourceId;
  } else if (hashCode == ResourceProvider_HASH) {
    return SoftwareGroupByField::ResourceProvider;
  } else if (hashCode == ResourceOwnerAccountId_HASH) {
    return SoftwareGroupByField::ResourceOwnerAccountId;
  } else if (hashCode == ResourceOwnerOrgId_HASH) {
    return SoftwareGroupByField::ResourceOwnerOrgId;
  } else if (hashCode == ResourceCloudPartition_HASH) {
    return SoftwareGroupByField::ResourceCloudPartition;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SoftwareGroupByField>(hashCode);
  }

  return SoftwareGroupByField::NOT_SET;
}

Aws::String GetNameForSoftwareGroupByField(SoftwareGroupByField enumValue) {
  switch (enumValue) {
    case SoftwareGroupByField::NOT_SET:
      return {};
    case SoftwareGroupByField::AccountId:
      return "AccountId";
    case SoftwareGroupByField::PackageName:
      return "PackageName";
    case SoftwareGroupByField::PackageVersion:
      return "PackageVersion";
    case SoftwareGroupByField::PackageType:
      return "PackageType";
    case SoftwareGroupByField::Region:
      return "Region";
    case SoftwareGroupByField::ResourceRegion:
      return "ResourceRegion";
    case SoftwareGroupByField::ResourceType:
      return "ResourceType";
    case SoftwareGroupByField::ResourceId:
      return "ResourceId";
    case SoftwareGroupByField::ResourceProvider:
      return "ResourceProvider";
    case SoftwareGroupByField::ResourceOwnerAccountId:
      return "ResourceOwnerAccountId";
    case SoftwareGroupByField::ResourceOwnerOrgId:
      return "ResourceOwnerOrgId";
    case SoftwareGroupByField::ResourceCloudPartition:
      return "ResourceCloudPartition";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SoftwareGroupByFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
