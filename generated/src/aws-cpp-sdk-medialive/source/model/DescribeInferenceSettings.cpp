/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/DescribeInferenceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

DescribeInferenceSettings::DescribeInferenceSettings(JsonView jsonValue) { *this = jsonValue; }

DescribeInferenceSettings& DescribeInferenceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("feedArn")) {
    m_feedArn = jsonValue.GetString("feedArn");
    m_feedArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audioFeedInputs")) {
    Aws::Utils::Array<JsonView> audioFeedInputsJsonList = jsonValue.GetArray("audioFeedInputs");
    for (unsigned audioFeedInputsIndex = 0; audioFeedInputsIndex < audioFeedInputsJsonList.GetLength(); ++audioFeedInputsIndex) {
      m_audioFeedInputs.push_back(audioFeedInputsJsonList[audioFeedInputsIndex].AsObject());
    }
    m_audioFeedInputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrichmentMethods")) {
    Aws::Utils::Array<JsonView> enrichmentMethodsJsonList = jsonValue.GetArray("enrichmentMethods");
    for (unsigned enrichmentMethodsIndex = 0; enrichmentMethodsIndex < enrichmentMethodsJsonList.GetLength(); ++enrichmentMethodsIndex) {
      m_enrichmentMethods.push_back(
          EnrichmentMethodMapper::GetEnrichmentMethodForName(enrichmentMethodsJsonList[enrichmentMethodsIndex].AsString()));
    }
    m_enrichmentMethodsHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeInferenceSettings::Jsonize() const {
  JsonValue payload;

  if (m_feedArnHasBeenSet) {
    payload.WithString("feedArn", m_feedArn);
  }

  if (m_audioFeedInputsHasBeenSet) {
    Aws::Utils::Array<JsonValue> audioFeedInputsJsonList(m_audioFeedInputs.size());
    for (unsigned audioFeedInputsIndex = 0; audioFeedInputsIndex < audioFeedInputsJsonList.GetLength(); ++audioFeedInputsIndex) {
      audioFeedInputsJsonList[audioFeedInputsIndex].AsObject(m_audioFeedInputs[audioFeedInputsIndex].Jsonize());
    }
    payload.WithArray("audioFeedInputs", std::move(audioFeedInputsJsonList));
  }

  if (m_enrichmentMethodsHasBeenSet) {
    Aws::Utils::Array<JsonValue> enrichmentMethodsJsonList(m_enrichmentMethods.size());
    for (unsigned enrichmentMethodsIndex = 0; enrichmentMethodsIndex < enrichmentMethodsJsonList.GetLength(); ++enrichmentMethodsIndex) {
      enrichmentMethodsJsonList[enrichmentMethodsIndex].AsString(
          EnrichmentMethodMapper::GetNameForEnrichmentMethod(m_enrichmentMethods[enrichmentMethodsIndex]));
    }
    payload.WithArray("enrichmentMethods", std::move(enrichmentMethodsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
