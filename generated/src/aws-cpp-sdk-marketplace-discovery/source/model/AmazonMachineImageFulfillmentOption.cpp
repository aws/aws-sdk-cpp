/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageFulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

AmazonMachineImageFulfillmentOption::AmazonMachineImageFulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

AmazonMachineImageFulfillmentOption& AmazonMachineImageFulfillmentOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fulfillmentOptionId")) {
    m_fulfillmentOptionId = jsonValue.GetString("fulfillmentOptionId");
    m_fulfillmentOptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionName")) {
    m_fulfillmentOptionName = jsonValue.GetString("fulfillmentOptionName");
    m_fulfillmentOptionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionVersion")) {
    m_fulfillmentOptionVersion = jsonValue.GetString("fulfillmentOptionVersion");
    m_fulfillmentOptionVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionType")) {
    m_fulfillmentOptionType = FulfillmentOptionTypeMapper::GetFulfillmentOptionTypeForName(jsonValue.GetString("fulfillmentOptionType"));
    m_fulfillmentOptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionDisplayName")) {
    m_fulfillmentOptionDisplayName = jsonValue.GetString("fulfillmentOptionDisplayName");
    m_fulfillmentOptionDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatingSystems")) {
    Aws::Utils::Array<JsonView> operatingSystemsJsonList = jsonValue.GetArray("operatingSystems");
    for (unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex) {
      m_operatingSystems.push_back(operatingSystemsJsonList[operatingSystemsIndex].AsObject());
    }
    m_operatingSystemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendation")) {
    m_recommendation = jsonValue.GetObject("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("releaseNotes")) {
    m_releaseNotes = jsonValue.GetString("releaseNotes");
    m_releaseNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageInstructions")) {
    m_usageInstructions = jsonValue.GetString("usageInstructions");
    m_usageInstructionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonMachineImageFulfillmentOption::Jsonize() const {
  JsonValue payload;

  if (m_fulfillmentOptionIdHasBeenSet) {
    payload.WithString("fulfillmentOptionId", m_fulfillmentOptionId);
  }

  if (m_fulfillmentOptionNameHasBeenSet) {
    payload.WithString("fulfillmentOptionName", m_fulfillmentOptionName);
  }

  if (m_fulfillmentOptionVersionHasBeenSet) {
    payload.WithString("fulfillmentOptionVersion", m_fulfillmentOptionVersion);
  }

  if (m_fulfillmentOptionTypeHasBeenSet) {
    payload.WithString("fulfillmentOptionType", FulfillmentOptionTypeMapper::GetNameForFulfillmentOptionType(m_fulfillmentOptionType));
  }

  if (m_fulfillmentOptionDisplayNameHasBeenSet) {
    payload.WithString("fulfillmentOptionDisplayName", m_fulfillmentOptionDisplayName);
  }

  if (m_operatingSystemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> operatingSystemsJsonList(m_operatingSystems.size());
    for (unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex) {
      operatingSystemsJsonList[operatingSystemsIndex].AsObject(m_operatingSystems[operatingSystemsIndex].Jsonize());
    }
    payload.WithArray("operatingSystems", std::move(operatingSystemsJsonList));
  }

  if (m_recommendationHasBeenSet) {
    payload.WithObject("recommendation", m_recommendation.Jsonize());
  }

  if (m_releaseNotesHasBeenSet) {
    payload.WithString("releaseNotes", m_releaseNotes);
  }

  if (m_usageInstructionsHasBeenSet) {
    payload.WithString("usageInstructions", m_usageInstructions);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
