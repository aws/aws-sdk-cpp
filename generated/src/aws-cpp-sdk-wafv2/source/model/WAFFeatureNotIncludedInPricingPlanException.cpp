/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/WAFFeatureNotIncludedInPricingPlanException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

WAFFeatureNotIncludedInPricingPlanException::WAFFeatureNotIncludedInPricingPlanException(JsonView jsonValue) { *this = jsonValue; }

WAFFeatureNotIncludedInPricingPlanException& WAFFeatureNotIncludedInPricingPlanException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisallowedFeatures")) {
    Aws::Utils::Array<JsonView> disallowedFeaturesJsonList = jsonValue.GetArray("DisallowedFeatures");
    for (unsigned disallowedFeaturesIndex = 0; disallowedFeaturesIndex < disallowedFeaturesJsonList.GetLength();
         ++disallowedFeaturesIndex) {
      m_disallowedFeatures.push_back(disallowedFeaturesJsonList[disallowedFeaturesIndex].AsObject());
    }
    m_disallowedFeaturesHasBeenSet = true;
  }
  return *this;
}

JsonValue WAFFeatureNotIncludedInPricingPlanException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_disallowedFeaturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> disallowedFeaturesJsonList(m_disallowedFeatures.size());
    for (unsigned disallowedFeaturesIndex = 0; disallowedFeaturesIndex < disallowedFeaturesJsonList.GetLength();
         ++disallowedFeaturesIndex) {
      disallowedFeaturesJsonList[disallowedFeaturesIndex].AsObject(m_disallowedFeatures[disallowedFeaturesIndex].Jsonize());
    }
    payload.WithArray("DisallowedFeatures", std::move(disallowedFeaturesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
