/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationJobErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {
namespace DeploymentConfigurationJobErrorCodeMapper {

static const int FULFILLMENT_URL_UNREACHABLE_HASH = HashingUtils::HashString("FULFILLMENT_URL_UNREACHABLE");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int ENDPOINT_INVALID_HASH = HashingUtils::HashString("ENDPOINT_INVALID");

DeploymentConfigurationJobErrorCode GetDeploymentConfigurationJobErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULFILLMENT_URL_UNREACHABLE_HASH) {
    return DeploymentConfigurationJobErrorCode::FULFILLMENT_URL_UNREACHABLE;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return DeploymentConfigurationJobErrorCode::INTERNAL_ERROR;
  } else if (hashCode == ENDPOINT_INVALID_HASH) {
    return DeploymentConfigurationJobErrorCode::ENDPOINT_INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentConfigurationJobErrorCode>(hashCode);
  }

  return DeploymentConfigurationJobErrorCode::NOT_SET;
}

Aws::String GetNameForDeploymentConfigurationJobErrorCode(DeploymentConfigurationJobErrorCode enumValue) {
  switch (enumValue) {
    case DeploymentConfigurationJobErrorCode::NOT_SET:
      return {};
    case DeploymentConfigurationJobErrorCode::FULFILLMENT_URL_UNREACHABLE:
      return "FULFILLMENT_URL_UNREACHABLE";
    case DeploymentConfigurationJobErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case DeploymentConfigurationJobErrorCode::ENDPOINT_INVALID:
      return "ENDPOINT_INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentConfigurationJobErrorCodeMapper
}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
