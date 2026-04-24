/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class DataProductSortBy { NOT_SET, EntityId, ProductTitle, Visibility, LastModifiedDate };

namespace DataProductSortByMapper {
AWS_MARKETPLACECATALOG_API DataProductSortBy GetDataProductSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForDataProductSortBy(DataProductSortBy value);
}  // namespace DataProductSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
