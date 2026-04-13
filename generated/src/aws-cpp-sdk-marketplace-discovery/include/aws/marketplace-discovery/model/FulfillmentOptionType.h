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
enum class FulfillmentOptionType {
  NOT_SET,
  AMAZON_MACHINE_IMAGE,
  API,
  CLOUDFORMATION_TEMPLATE,
  CONTAINER,
  HELM,
  EKS_ADD_ON,
  EC2_IMAGE_BUILDER_COMPONENT,
  DATA_EXCHANGE,
  PROFESSIONAL_SERVICES,
  SAAS,
  SAGEMAKER_ALGORITHM,
  SAGEMAKER_MODEL
};

namespace FulfillmentOptionTypeMapper {
AWS_MARKETPLACEDISCOVERY_API FulfillmentOptionType GetFulfillmentOptionTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForFulfillmentOptionType(FulfillmentOptionType value);
}  // namespace FulfillmentOptionTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
