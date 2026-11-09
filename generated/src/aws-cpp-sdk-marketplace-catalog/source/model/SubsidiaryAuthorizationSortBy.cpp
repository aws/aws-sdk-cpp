/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace SubsidiaryAuthorizationSortByMapper {

static const int EntityId_HASH = HashingUtils::HashString("EntityId");
static const int Status_HASH = HashingUtils::HashString("Status");
static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
static const int SubsidiaryAccountId_HASH = HashingUtils::HashString("SubsidiaryAccountId");
static const int CreatedDate_HASH = HashingUtils::HashString("CreatedDate");
static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");

SubsidiaryAuthorizationSortBy GetSubsidiaryAuthorizationSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EntityId_HASH) {
    return SubsidiaryAuthorizationSortBy::EntityId;
  } else if (hashCode == Status_HASH) {
    return SubsidiaryAuthorizationSortBy::Status;
  } else if (hashCode == ResourceId_HASH) {
    return SubsidiaryAuthorizationSortBy::ResourceId;
  } else if (hashCode == SubsidiaryAccountId_HASH) {
    return SubsidiaryAuthorizationSortBy::SubsidiaryAccountId;
  } else if (hashCode == CreatedDate_HASH) {
    return SubsidiaryAuthorizationSortBy::CreatedDate;
  } else if (hashCode == LastModifiedDate_HASH) {
    return SubsidiaryAuthorizationSortBy::LastModifiedDate;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubsidiaryAuthorizationSortBy>(hashCode);
  }

  return SubsidiaryAuthorizationSortBy::NOT_SET;
}

Aws::String GetNameForSubsidiaryAuthorizationSortBy(SubsidiaryAuthorizationSortBy enumValue) {
  switch (enumValue) {
    case SubsidiaryAuthorizationSortBy::NOT_SET:
      return {};
    case SubsidiaryAuthorizationSortBy::EntityId:
      return "EntityId";
    case SubsidiaryAuthorizationSortBy::Status:
      return "Status";
    case SubsidiaryAuthorizationSortBy::ResourceId:
      return "ResourceId";
    case SubsidiaryAuthorizationSortBy::SubsidiaryAccountId:
      return "SubsidiaryAccountId";
    case SubsidiaryAuthorizationSortBy::CreatedDate:
      return "CreatedDate";
    case SubsidiaryAuthorizationSortBy::LastModifiedDate:
      return "LastModifiedDate";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubsidiaryAuthorizationSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
