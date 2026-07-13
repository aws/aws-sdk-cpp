/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ResourcesTrendsStringField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ResourcesTrendsStringFieldMapper {

static const int account_id_HASH = HashingUtils::HashString("account_id");
static const int region_HASH = HashingUtils::HashString("region");
static const int resource_type_HASH = HashingUtils::HashString("resource_type");
static const int resource_category_HASH = HashingUtils::HashString("resource_category");
static const int resource_cloud_provider_HASH = HashingUtils::HashString("resource_cloud_provider");
static const int resource_region_HASH = HashingUtils::HashString("resource_region");
static const int resource_owner_id_HASH = HashingUtils::HashString("resource_owner_id");
static const int resource_owner_organization_id_HASH = HashingUtils::HashString("resource_owner_organization_id");

ResourcesTrendsStringField GetResourcesTrendsStringFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_id_HASH) {
    return ResourcesTrendsStringField::account_id;
  } else if (hashCode == region_HASH) {
    return ResourcesTrendsStringField::region;
  } else if (hashCode == resource_type_HASH) {
    return ResourcesTrendsStringField::resource_type;
  } else if (hashCode == resource_category_HASH) {
    return ResourcesTrendsStringField::resource_category;
  } else if (hashCode == resource_cloud_provider_HASH) {
    return ResourcesTrendsStringField::resource_cloud_provider;
  } else if (hashCode == resource_region_HASH) {
    return ResourcesTrendsStringField::resource_region;
  } else if (hashCode == resource_owner_id_HASH) {
    return ResourcesTrendsStringField::resource_owner_id;
  } else if (hashCode == resource_owner_organization_id_HASH) {
    return ResourcesTrendsStringField::resource_owner_organization_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourcesTrendsStringField>(hashCode);
  }

  return ResourcesTrendsStringField::NOT_SET;
}

Aws::String GetNameForResourcesTrendsStringField(ResourcesTrendsStringField enumValue) {
  switch (enumValue) {
    case ResourcesTrendsStringField::NOT_SET:
      return {};
    case ResourcesTrendsStringField::account_id:
      return "account_id";
    case ResourcesTrendsStringField::region:
      return "region";
    case ResourcesTrendsStringField::resource_type:
      return "resource_type";
    case ResourcesTrendsStringField::resource_category:
      return "resource_category";
    case ResourcesTrendsStringField::resource_cloud_provider:
      return "resource_cloud_provider";
    case ResourcesTrendsStringField::resource_region:
      return "resource_region";
    case ResourcesTrendsStringField::resource_owner_id:
      return "resource_owner_id";
    case ResourcesTrendsStringField::resource_owner_organization_id:
      return "resource_owner_organization_id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourcesTrendsStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
