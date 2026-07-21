/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/PricingAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

PricingAttributes::PricingAttributes(JsonView jsonValue) { *this = jsonValue; }

PricingAttributes& PricingAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentPlan")) {
    m_currentPlan = PricingPlanMapper::GetPricingPlanForName(jsonValue.GetString("CurrentPlan"));
    m_currentPlanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextPlan")) {
    m_nextPlan = PricingPlanMapper::GetPricingPlanForName(jsonValue.GetString("NextPlan"));
    m_nextPlanHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingAttributes::Jsonize() const {
  JsonValue payload;

  if (m_currentPlanHasBeenSet) {
    payload.WithString("CurrentPlan", PricingPlanMapper::GetNameForPricingPlan(m_currentPlan));
  }

  if (m_nextPlanHasBeenSet) {
    payload.WithString("NextPlan", PricingPlanMapper::GetNameForPricingPlan(m_nextPlan));
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
