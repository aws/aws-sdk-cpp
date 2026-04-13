/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/ApiFulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

ApiFulfillmentOption::ApiFulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

ApiFulfillmentOption& ApiFulfillmentOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fulfillmentOptionId")) {
    m_fulfillmentOptionId = jsonValue.GetString("fulfillmentOptionId");
    m_fulfillmentOptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionType")) {
    m_fulfillmentOptionType = FulfillmentOptionTypeMapper::GetFulfillmentOptionTypeForName(jsonValue.GetString("fulfillmentOptionType"));
    m_fulfillmentOptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionDisplayName")) {
    m_fulfillmentOptionDisplayName = jsonValue.GetString("fulfillmentOptionDisplayName");
    m_fulfillmentOptionDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageInstructions")) {
    m_usageInstructions = jsonValue.GetString("usageInstructions");
    m_usageInstructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsSupportedServices")) {
    Aws::Utils::Array<JsonView> awsSupportedServicesJsonList = jsonValue.GetArray("awsSupportedServices");
    for (unsigned awsSupportedServicesIndex = 0; awsSupportedServicesIndex < awsSupportedServicesJsonList.GetLength();
         ++awsSupportedServicesIndex) {
      m_awsSupportedServices.push_back(awsSupportedServicesJsonList[awsSupportedServicesIndex].AsObject());
    }
    m_awsSupportedServicesHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiFulfillmentOption::Jsonize() const {
  JsonValue payload;

  if (m_fulfillmentOptionIdHasBeenSet) {
    payload.WithString("fulfillmentOptionId", m_fulfillmentOptionId);
  }

  if (m_fulfillmentOptionTypeHasBeenSet) {
    payload.WithString("fulfillmentOptionType", FulfillmentOptionTypeMapper::GetNameForFulfillmentOptionType(m_fulfillmentOptionType));
  }

  if (m_fulfillmentOptionDisplayNameHasBeenSet) {
    payload.WithString("fulfillmentOptionDisplayName", m_fulfillmentOptionDisplayName);
  }

  if (m_usageInstructionsHasBeenSet) {
    payload.WithString("usageInstructions", m_usageInstructions);
  }

  if (m_awsSupportedServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsSupportedServicesJsonList(m_awsSupportedServices.size());
    for (unsigned awsSupportedServicesIndex = 0; awsSupportedServicesIndex < awsSupportedServicesJsonList.GetLength();
         ++awsSupportedServicesIndex) {
      awsSupportedServicesJsonList[awsSupportedServicesIndex].AsObject(m_awsSupportedServices[awsSupportedServicesIndex].Jsonize());
    }
    payload.WithArray("awsSupportedServices", std::move(awsSupportedServicesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
