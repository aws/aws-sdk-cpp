/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/DisallowedFeature.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

DisallowedFeature::DisallowedFeature(JsonView jsonValue) { *this = jsonValue; }

DisallowedFeature& DisallowedFeature::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Feature")) {
    m_feature = jsonValue.GetString("Feature");
    m_featureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequiredPricingPlan")) {
    m_requiredPricingPlan = jsonValue.GetString("RequiredPricingPlan");
    m_requiredPricingPlanHasBeenSet = true;
  }
  return *this;
}

JsonValue DisallowedFeature::Jsonize() const {
  JsonValue payload;

  if (m_featureHasBeenSet) {
    payload.WithString("Feature", m_feature);
  }

  if (m_requiredPricingPlanHasBeenSet) {
    payload.WithString("RequiredPricingPlan", m_requiredPricingPlan);
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
