﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/ContainerProductSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace ContainerProductSortByMapper {

static const int EntityId_HASH = HashingUtils::HashString("EntityId");
static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");
static const int ProductTitle_HASH = HashingUtils::HashString("ProductTitle");
static const int Visibility_HASH = HashingUtils::HashString("Visibility");
static const int CompatibleAWSServices_HASH = HashingUtils::HashString("CompatibleAWSServices");

ContainerProductSortBy GetContainerProductSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EntityId_HASH) {
    return ContainerProductSortBy::EntityId;
  } else if (hashCode == LastModifiedDate_HASH) {
    return ContainerProductSortBy::LastModifiedDate;
  } else if (hashCode == ProductTitle_HASH) {
    return ContainerProductSortBy::ProductTitle;
  } else if (hashCode == Visibility_HASH) {
    return ContainerProductSortBy::Visibility;
  } else if (hashCode == CompatibleAWSServices_HASH) {
    return ContainerProductSortBy::CompatibleAWSServices;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerProductSortBy>(hashCode);
  }

  return ContainerProductSortBy::NOT_SET;
}

Aws::String GetNameForContainerProductSortBy(ContainerProductSortBy enumValue) {
  switch (enumValue) {
    case ContainerProductSortBy::NOT_SET:
      return {};
    case ContainerProductSortBy::EntityId:
      return "EntityId";
    case ContainerProductSortBy::LastModifiedDate:
      return "LastModifiedDate";
    case ContainerProductSortBy::ProductTitle:
      return "ProductTitle";
    case ContainerProductSortBy::Visibility:
      return "Visibility";
    case ContainerProductSortBy::CompatibleAWSServices:
      return "CompatibleAWSServices";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerProductSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
