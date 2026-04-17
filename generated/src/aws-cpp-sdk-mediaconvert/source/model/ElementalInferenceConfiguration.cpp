/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/ElementalInferenceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

ElementalInferenceConfiguration::ElementalInferenceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ElementalInferenceConfiguration& ElementalInferenceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("features")) {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      m_features.push_back(
          ElementalInferenceFeatureMapper::GetElementalInferenceFeatureForName(featuresJsonList[featuresIndex].AsString()));
    }
    m_featuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("feeds")) {
    Aws::Utils::Array<JsonView> feedsJsonList = jsonValue.GetArray("feeds");
    for (unsigned feedsIndex = 0; feedsIndex < feedsJsonList.GetLength(); ++feedsIndex) {
      m_feeds.push_back(feedsJsonList[feedsIndex].AsObject());
    }
    m_feedsHasBeenSet = true;
  }
  return *this;
}

JsonValue ElementalInferenceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_featuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      featuresJsonList[featuresIndex].AsString(
          ElementalInferenceFeatureMapper::GetNameForElementalInferenceFeature(m_features[featuresIndex]));
    }
    payload.WithArray("features", std::move(featuresJsonList));
  }

  if (m_feedsHasBeenSet) {
    Aws::Utils::Array<JsonValue> feedsJsonList(m_feeds.size());
    for (unsigned feedsIndex = 0; feedsIndex < feedsJsonList.GetLength(); ++feedsIndex) {
      feedsJsonList[feedsIndex].AsObject(m_feeds[feedsIndex].Jsonize());
    }
    payload.WithArray("feeds", std::move(feedsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
