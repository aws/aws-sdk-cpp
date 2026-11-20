/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/ListingAttributeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace ListingAttributeTypeMapper {

static const int CASE_STUDY_HASH = HashingUtils::HashString("CASE_STUDY");
static const int SPECIALIZATION_DETAIL_HASH = HashingUtils::HashString("SPECIALIZATION_DETAIL");
static const int TRUST_CENTER_SOURCE_HASH = HashingUtils::HashString("TRUST_CENTER_SOURCE");
static const int TRUST_CENTER_CERTIFICATION_HASH = HashingUtils::HashString("TRUST_CENTER_CERTIFICATION");
static const int TRUST_CENTER_DOCUMENT_HASH = HashingUtils::HashString("TRUST_CENTER_DOCUMENT");
static const int TRUST_CENTER_CONTROL_HASH = HashingUtils::HashString("TRUST_CENTER_CONTROL");
static const int TRUST_CENTER_FAQ_HASH = HashingUtils::HashString("TRUST_CENTER_FAQ");
static const int TRUST_CENTER_UPDATE_HASH = HashingUtils::HashString("TRUST_CENTER_UPDATE");

ListingAttributeType GetListingAttributeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CASE_STUDY_HASH) {
    return ListingAttributeType::CASE_STUDY;
  } else if (hashCode == SPECIALIZATION_DETAIL_HASH) {
    return ListingAttributeType::SPECIALIZATION_DETAIL;
  } else if (hashCode == TRUST_CENTER_SOURCE_HASH) {
    return ListingAttributeType::TRUST_CENTER_SOURCE;
  } else if (hashCode == TRUST_CENTER_CERTIFICATION_HASH) {
    return ListingAttributeType::TRUST_CENTER_CERTIFICATION;
  } else if (hashCode == TRUST_CENTER_DOCUMENT_HASH) {
    return ListingAttributeType::TRUST_CENTER_DOCUMENT;
  } else if (hashCode == TRUST_CENTER_CONTROL_HASH) {
    return ListingAttributeType::TRUST_CENTER_CONTROL;
  } else if (hashCode == TRUST_CENTER_FAQ_HASH) {
    return ListingAttributeType::TRUST_CENTER_FAQ;
  } else if (hashCode == TRUST_CENTER_UPDATE_HASH) {
    return ListingAttributeType::TRUST_CENTER_UPDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListingAttributeType>(hashCode);
  }

  return ListingAttributeType::NOT_SET;
}

Aws::String GetNameForListingAttributeType(ListingAttributeType enumValue) {
  switch (enumValue) {
    case ListingAttributeType::NOT_SET:
      return {};
    case ListingAttributeType::CASE_STUDY:
      return "CASE_STUDY";
    case ListingAttributeType::SPECIALIZATION_DETAIL:
      return "SPECIALIZATION_DETAIL";
    case ListingAttributeType::TRUST_CENTER_SOURCE:
      return "TRUST_CENTER_SOURCE";
    case ListingAttributeType::TRUST_CENTER_CERTIFICATION:
      return "TRUST_CENTER_CERTIFICATION";
    case ListingAttributeType::TRUST_CENTER_DOCUMENT:
      return "TRUST_CENTER_DOCUMENT";
    case ListingAttributeType::TRUST_CENTER_CONTROL:
      return "TRUST_CENTER_CONTROL";
    case ListingAttributeType::TRUST_CENTER_FAQ:
      return "TRUST_CENTER_FAQ";
    case ListingAttributeType::TRUST_CENTER_UPDATE:
      return "TRUST_CENTER_UPDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListingAttributeTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
