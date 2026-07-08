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
enum class ResaleAuthorizationResellerRoleString { NOT_SET, ChannelPartner, Distributor };

namespace ResaleAuthorizationResellerRoleStringMapper {
AWS_MARKETPLACECATALOG_API ResaleAuthorizationResellerRoleString GetResaleAuthorizationResellerRoleStringForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForResaleAuthorizationResellerRoleString(ResaleAuthorizationResellerRoleString value);
}  // namespace ResaleAuthorizationResellerRoleStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
