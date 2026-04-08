/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace FulfillmentOptionTypeMapper {

static const int AMAZON_MACHINE_IMAGE_HASH = HashingUtils::HashString("AMAZON_MACHINE_IMAGE");
static const int API_HASH = HashingUtils::HashString("API");
static const int CLOUDFORMATION_TEMPLATE_HASH = HashingUtils::HashString("CLOUDFORMATION_TEMPLATE");
static const int CONTAINER_HASH = HashingUtils::HashString("CONTAINER");
static const int HELM_HASH = HashingUtils::HashString("HELM");
static const int EKS_ADD_ON_HASH = HashingUtils::HashString("EKS_ADD_ON");
static const int EC2_IMAGE_BUILDER_COMPONENT_HASH = HashingUtils::HashString("EC2_IMAGE_BUILDER_COMPONENT");
static const int DATA_EXCHANGE_HASH = HashingUtils::HashString("DATA_EXCHANGE");
static const int PROFESSIONAL_SERVICES_HASH = HashingUtils::HashString("PROFESSIONAL_SERVICES");
static const int SAAS_HASH = HashingUtils::HashString("SAAS");
static const int SAGEMAKER_ALGORITHM_HASH = HashingUtils::HashString("SAGEMAKER_ALGORITHM");
static const int SAGEMAKER_MODEL_HASH = HashingUtils::HashString("SAGEMAKER_MODEL");

FulfillmentOptionType GetFulfillmentOptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AMAZON_MACHINE_IMAGE_HASH) {
    return FulfillmentOptionType::AMAZON_MACHINE_IMAGE;
  } else if (hashCode == API_HASH) {
    return FulfillmentOptionType::API;
  } else if (hashCode == CLOUDFORMATION_TEMPLATE_HASH) {
    return FulfillmentOptionType::CLOUDFORMATION_TEMPLATE;
  } else if (hashCode == CONTAINER_HASH) {
    return FulfillmentOptionType::CONTAINER;
  } else if (hashCode == HELM_HASH) {
    return FulfillmentOptionType::HELM;
  } else if (hashCode == EKS_ADD_ON_HASH) {
    return FulfillmentOptionType::EKS_ADD_ON;
  } else if (hashCode == EC2_IMAGE_BUILDER_COMPONENT_HASH) {
    return FulfillmentOptionType::EC2_IMAGE_BUILDER_COMPONENT;
  } else if (hashCode == DATA_EXCHANGE_HASH) {
    return FulfillmentOptionType::DATA_EXCHANGE;
  } else if (hashCode == PROFESSIONAL_SERVICES_HASH) {
    return FulfillmentOptionType::PROFESSIONAL_SERVICES;
  } else if (hashCode == SAAS_HASH) {
    return FulfillmentOptionType::SAAS;
  } else if (hashCode == SAGEMAKER_ALGORITHM_HASH) {
    return FulfillmentOptionType::SAGEMAKER_ALGORITHM;
  } else if (hashCode == SAGEMAKER_MODEL_HASH) {
    return FulfillmentOptionType::SAGEMAKER_MODEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FulfillmentOptionType>(hashCode);
  }

  return FulfillmentOptionType::NOT_SET;
}

Aws::String GetNameForFulfillmentOptionType(FulfillmentOptionType enumValue) {
  switch (enumValue) {
    case FulfillmentOptionType::NOT_SET:
      return {};
    case FulfillmentOptionType::AMAZON_MACHINE_IMAGE:
      return "AMAZON_MACHINE_IMAGE";
    case FulfillmentOptionType::API:
      return "API";
    case FulfillmentOptionType::CLOUDFORMATION_TEMPLATE:
      return "CLOUDFORMATION_TEMPLATE";
    case FulfillmentOptionType::CONTAINER:
      return "CONTAINER";
    case FulfillmentOptionType::HELM:
      return "HELM";
    case FulfillmentOptionType::EKS_ADD_ON:
      return "EKS_ADD_ON";
    case FulfillmentOptionType::EC2_IMAGE_BUILDER_COMPONENT:
      return "EC2_IMAGE_BUILDER_COMPONENT";
    case FulfillmentOptionType::DATA_EXCHANGE:
      return "DATA_EXCHANGE";
    case FulfillmentOptionType::PROFESSIONAL_SERVICES:
      return "PROFESSIONAL_SERVICES";
    case FulfillmentOptionType::SAAS:
      return "SAAS";
    case FulfillmentOptionType::SAGEMAKER_ALGORITHM:
      return "SAGEMAKER_ALGORITHM";
    case FulfillmentOptionType::SAGEMAKER_MODEL:
      return "SAGEMAKER_MODEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FulfillmentOptionTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
