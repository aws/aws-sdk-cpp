﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class SaaSProductSortBy { NOT_SET, EntityId, ProductTitle, Visibility, LastModifiedDate, DeliveryOptionTypes };

namespace SaaSProductSortByMapper {
AWS_MARKETPLACECATALOG_API SaaSProductSortBy GetSaaSProductSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForSaaSProductSortBy(SaaSProductSortBy value);
}  // namespace SaaSProductSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
