/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace Model
{
  enum class GetEntitlementFilterName
  {
    NOT_SET,
    CUSTOMER_IDENTIFIER,
    DIMENSION
  };

namespace GetEntitlementFilterNameMapper
{
AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementFilterName GetGetEntitlementFilterNameForName(const Aws::String& name);

AWS_MARKETPLACEENTITLEMENTSERVICE_API Aws::String GetNameForGetEntitlementFilterName(GetEntitlementFilterName value);
} // namespace GetEntitlementFilterNameMapper
} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
