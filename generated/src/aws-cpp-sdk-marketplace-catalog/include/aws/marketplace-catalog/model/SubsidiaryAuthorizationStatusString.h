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
enum class SubsidiaryAuthorizationStatusString { NOT_SET, Draft, Active, Restricted };

namespace SubsidiaryAuthorizationStatusStringMapper {
AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationStatusString GetSubsidiaryAuthorizationStatusStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForSubsidiaryAuthorizationStatusString(SubsidiaryAuthorizationStatusString value);
}  // namespace SubsidiaryAuthorizationStatusStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
