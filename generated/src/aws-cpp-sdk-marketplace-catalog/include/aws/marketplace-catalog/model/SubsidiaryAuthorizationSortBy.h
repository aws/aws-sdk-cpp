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
enum class SubsidiaryAuthorizationSortBy { NOT_SET, EntityId, Status, ResourceId, SubsidiaryAccountId, CreatedDate, LastModifiedDate };

namespace SubsidiaryAuthorizationSortByMapper {
AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSortBy GetSubsidiaryAuthorizationSortByForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForSubsidiaryAuthorizationSortBy(SubsidiaryAuthorizationSortBy value);
}  // namespace SubsidiaryAuthorizationSortByMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
