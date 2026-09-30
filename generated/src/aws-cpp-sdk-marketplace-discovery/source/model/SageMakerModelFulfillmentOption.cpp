/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SageMakerModelFulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SageMakerModelFulfillmentOption::SageMakerModelFulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

SageMakerModelFulfillmentOption& SageMakerModelFulfillmentOption::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("fulfillmentOptionVersion")) {
    m_fulfillmentOptionVersion = jsonValue.GetString("fulfillmentOptionVersion");
    m_fulfillmentOptionVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("releaseNotes")) {
    m_releaseNotes = jsonValue.GetString("releaseNotes");
    m_releaseNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageInstructions")) {
    m_usageInstructions = jsonValue.GetString("usageInstructions");
    m_usageInstructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendation")) {
    m_recommendation = jsonValue.GetObject("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportedContentTypes")) {
    Aws::Utils::Array<JsonView> supportedContentTypesJsonList = jsonValue.GetArray("supportedContentTypes");
    for (unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength();
         ++supportedContentTypesIndex) {
      m_supportedContentTypes.push_back(supportedContentTypesJsonList[supportedContentTypesIndex].AsString());
    }
    m_supportedContentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportedResponseMimeTypes")) {
    Aws::Utils::Array<JsonView> supportedResponseMimeTypesJsonList = jsonValue.GetArray("supportedResponseMimeTypes");
    for (unsigned supportedResponseMimeTypesIndex = 0; supportedResponseMimeTypesIndex < supportedResponseMimeTypesJsonList.GetLength();
         ++supportedResponseMimeTypesIndex) {
      m_supportedResponseMimeTypes.push_back(supportedResponseMimeTypesJsonList[supportedResponseMimeTypesIndex].AsString());
    }
    m_supportedResponseMimeTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue SageMakerModelFulfillmentOption::Jsonize() const {
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

  if (m_fulfillmentOptionVersionHasBeenSet) {
    payload.WithString("fulfillmentOptionVersion", m_fulfillmentOptionVersion);
  }

  if (m_releaseNotesHasBeenSet) {
    payload.WithString("releaseNotes", m_releaseNotes);
  }

  if (m_usageInstructionsHasBeenSet) {
    payload.WithString("usageInstructions", m_usageInstructions);
  }

  if (m_recommendationHasBeenSet) {
    payload.WithObject("recommendation", m_recommendation.Jsonize());
  }

  if (m_supportedContentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedContentTypesJsonList(m_supportedContentTypes.size());
    for (unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength();
         ++supportedContentTypesIndex) {
      supportedContentTypesJsonList[supportedContentTypesIndex].AsString(m_supportedContentTypes[supportedContentTypesIndex]);
    }
    payload.WithArray("supportedContentTypes", std::move(supportedContentTypesJsonList));
  }

  if (m_supportedResponseMimeTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedResponseMimeTypesJsonList(m_supportedResponseMimeTypes.size());
    for (unsigned supportedResponseMimeTypesIndex = 0; supportedResponseMimeTypesIndex < supportedResponseMimeTypesJsonList.GetLength();
         ++supportedResponseMimeTypesIndex) {
      supportedResponseMimeTypesJsonList[supportedResponseMimeTypesIndex].AsString(
          m_supportedResponseMimeTypes[supportedResponseMimeTypesIndex]);
    }
    payload.WithArray("supportedResponseMimeTypes", std::move(supportedResponseMimeTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
