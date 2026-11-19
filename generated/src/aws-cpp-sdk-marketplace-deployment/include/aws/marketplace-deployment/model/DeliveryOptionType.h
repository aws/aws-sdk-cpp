/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {
enum class DeliveryOptionType { NOT_SET, data_as_a_service };

namespace DeliveryOptionTypeMapper {
AWS_MARKETPLACEDEPLOYMENT_API DeliveryOptionType GetDeliveryOptionTypeForName(const Aws::String& name);

AWS_MARKETPLACEDEPLOYMENT_API Aws::String GetNameForDeliveryOptionType(DeliveryOptionType value);
}  // namespace DeliveryOptionTypeMapper
}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
