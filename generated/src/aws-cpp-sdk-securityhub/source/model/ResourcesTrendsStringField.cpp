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
