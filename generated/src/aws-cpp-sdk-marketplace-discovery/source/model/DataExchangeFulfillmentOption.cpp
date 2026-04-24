/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/DataExchangeFulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

DataExchangeFulfillmentOption::DataExchangeFulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

DataExchangeFulfillmentOption& DataExchangeFulfillmentOption::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("dataArtifacts")) {
    Aws::Utils::Array<JsonView> dataArtifactsJsonList = jsonValue.GetArray("dataArtifacts");
    for (unsigned dataArtifactsIndex = 0; dataArtifactsIndex < dataArtifactsJsonList.GetLength(); ++dataArtifactsIndex) {
      m_dataArtifacts.push_back(dataArtifactsJsonList[dataArtifactsIndex].AsObject());
    }
    m_dataArtifactsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataExchangeFulfillmentOption::Jsonize() const {
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

  if (m_dataArtifactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataArtifactsJsonList(m_dataArtifacts.size());
    for (unsigned dataArtifactsIndex = 0; dataArtifactsIndex < dataArtifactsJsonList.GetLength(); ++dataArtifactsIndex) {
      dataArtifactsJsonList[dataArtifactsIndex].AsObject(m_dataArtifacts[dataArtifactsIndex].Jsonize());
    }
    payload.WithArray("dataArtifacts", std::move(dataArtifactsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
