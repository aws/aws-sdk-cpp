/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
enum class FulfillmentType { NOT_SET, CREDITS, CASH, ACCESS };

namespace FulfillmentTypeMapper {
AWS_PARTNERCENTRALBENEFITS_API FulfillmentType GetFulfillmentTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForFulfillmentType(FulfillmentType value);
}  // namespace FulfillmentTypeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
