/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SaasFulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SaasFulfillmentOption::SaasFulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

SaasFulfillmentOption& SaasFulfillmentOption::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("fulfillmentUrl")) {
    m_fulfillmentUrl = jsonValue.GetString("fulfillmentUrl");
    m_fulfillmentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageInstructions")) {
    m_usageInstructions = jsonValue.GetString("usageInstructions");
    m_usageInstructionsHasBeenSet = true;
  }
  return *this;
}

JsonValue SaasFulfillmentOption::Jsonize() const {
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

  if (m_fulfillmentUrlHasBeenSet) {
    payload.WithString("fulfillmentUrl", m_fulfillmentUrl);
  }

  if (m_usageInstructionsHasBeenSet) {
    payload.WithString("usageInstructions", m_usageInstructions);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
