/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class ListingAttributeType {
  NOT_SET,
  CASE_STUDY,
  SPECIALIZATION_DETAIL,
  TRUST_CENTER_SOURCE,
  TRUST_CENTER_CERTIFICATION,
  TRUST_CENTER_DOCUMENT,
  TRUST_CENTER_CONTROL,
  TRUST_CENTER_FAQ,
  TRUST_CENTER_UPDATE
};

namespace ListingAttributeTypeMapper {
AWS_MARKETPLACEDISCOVERY_API ListingAttributeType GetListingAttributeTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForListingAttributeType(ListingAttributeType value);
}  // namespace ListingAttributeTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
