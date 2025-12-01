/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/OfferSetSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace OfferSetSortByMapper {

static const int Name_HASH = HashingUtils::HashString("Name");
static const int State_HASH = HashingUtils::HashString("State");
static const int ReleaseDate_HASH = HashingUtils::HashString("ReleaseDate");
static const int SolutionId_HASH = HashingUtils::HashString("SolutionId");
static const int EntityId_HASH = HashingUtils::HashString("EntityId");
static const int LastModifiedDate_HASH = HashingUtils::HashString("LastModifiedDate");

OfferSetSortBy GetOfferSetSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH) {
    return OfferSetSortBy::Name;
  } else if (hashCode == State_HASH) {
    return OfferSetSortBy::State;
  } else if (hashCode == ReleaseDate_HASH) {
    return OfferSetSortBy::ReleaseDate;
  } else if (hashCode == SolutionId_HASH) {
    return OfferSetSortBy::SolutionId;
  } else if (hashCode == EntityId_HASH) {
    return OfferSetSortBy::EntityId;
  } else if (hashCode == LastModifiedDate_HASH) {
    return OfferSetSortBy::LastModifiedDate;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OfferSetSortBy>(hashCode);
  }

  return OfferSetSortBy::NOT_SET;
}

Aws::String GetNameForOfferSetSortBy(OfferSetSortBy enumValue) {
  switch (enumValue) {
    case OfferSetSortBy::NOT_SET:
      return {};
    case OfferSetSortBy::Name:
      return "Name";
    case OfferSetSortBy::State:
      return "State";
    case OfferSetSortBy::ReleaseDate:
      return "ReleaseDate";
    case OfferSetSortBy::SolutionId:
      return "SolutionId";
    case OfferSetSortBy::EntityId:
      return "EntityId";
    case OfferSetSortBy::LastModifiedDate:
      return "LastModifiedDate";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OfferSetSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
