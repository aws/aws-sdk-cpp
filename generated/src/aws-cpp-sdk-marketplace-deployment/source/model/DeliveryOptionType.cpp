/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-deployment/model/DeliveryOptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {
namespace DeliveryOptionTypeMapper {

static const int data_as_a_service_HASH = HashingUtils::HashString("data-as-a-service");

DeliveryOptionType GetDeliveryOptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == data_as_a_service_HASH) {
    return DeliveryOptionType::data_as_a_service;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliveryOptionType>(hashCode);
  }

  return DeliveryOptionType::NOT_SET;
}

Aws::String GetNameForDeliveryOptionType(DeliveryOptionType enumValue) {
  switch (enumValue) {
    case DeliveryOptionType::NOT_SET:
      return {};
    case DeliveryOptionType::data_as_a_service:
      return "data-as-a-service";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliveryOptionTypeMapper
}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
