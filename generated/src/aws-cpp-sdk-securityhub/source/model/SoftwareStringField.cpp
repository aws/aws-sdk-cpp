/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/SoftwareStringField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace SoftwareStringFieldMapper {

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

SoftwareStringField GetSoftwareStringFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccountId_HASH) {
    return SoftwareStringField::AccountId;
  } else if (hashCode == PackageName_HASH) {
    return SoftwareStringField::PackageName;
  } else if (hashCode == PackageVersion_HASH) {
    return SoftwareStringField::PackageVersion;
  } else if (hashCode == PackageType_HASH) {
    return SoftwareStringField::PackageType;
  } else if (hashCode == Region_HASH) {
    return SoftwareStringField::Region;
  } else if (hashCode == ResourceRegion_HASH) {
    return SoftwareStringField::ResourceRegion;
  } else if (hashCode == ResourceType_HASH) {
    return SoftwareStringField::ResourceType;
  } else if (hashCode == ResourceId_HASH) {
    return SoftwareStringField::ResourceId;
  } else if (hashCode == ResourceProvider_HASH) {
    return SoftwareStringField::ResourceProvider;
  } else if (hashCode == ResourceOwnerAccountId_HASH) {
    return SoftwareStringField::ResourceOwnerAccountId;
  } else if (hashCode == ResourceOwnerOrgId_HASH) {
    return SoftwareStringField::ResourceOwnerOrgId;
  } else if (hashCode == ResourceCloudPartition_HASH) {
    return SoftwareStringField::ResourceCloudPartition;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SoftwareStringField>(hashCode);
  }

  return SoftwareStringField::NOT_SET;
}

Aws::String GetNameForSoftwareStringField(SoftwareStringField enumValue) {
  switch (enumValue) {
    case SoftwareStringField::NOT_SET:
      return {};
    case SoftwareStringField::AccountId:
      return "AccountId";
    case SoftwareStringField::PackageName:
      return "PackageName";
    case SoftwareStringField::PackageVersion:
      return "PackageVersion";
    case SoftwareStringField::PackageType:
      return "PackageType";
    case SoftwareStringField::Region:
      return "Region";
    case SoftwareStringField::ResourceRegion:
      return "ResourceRegion";
    case SoftwareStringField::ResourceType:
      return "ResourceType";
    case SoftwareStringField::ResourceId:
      return "ResourceId";
    case SoftwareStringField::ResourceProvider:
      return "ResourceProvider";
    case SoftwareStringField::ResourceOwnerAccountId:
      return "ResourceOwnerAccountId";
    case SoftwareStringField::ResourceOwnerOrgId:
      return "ResourceOwnerOrgId";
    case SoftwareStringField::ResourceCloudPartition:
      return "ResourceCloudPartition";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SoftwareStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
