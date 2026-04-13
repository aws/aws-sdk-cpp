/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/PricingOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

PricingOption::PricingOption(JsonView jsonValue) { *this = jsonValue; }

PricingOption& PricingOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PricingType")) {
    m_pricingType = QuotePricingTypeMapper::GetQuotePricingTypeForName(jsonValue.GetString("PricingType"));
    m_pricingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscriptionPricingDetails")) {
    m_subscriptionPricingDetails = jsonValue.GetObject("SubscriptionPricingDetails");
    m_subscriptionPricingDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingOption::Jsonize() const {
  JsonValue payload;

  if (m_pricingTypeHasBeenSet) {
    payload.WithString("PricingType", QuotePricingTypeMapper::GetNameForQuotePricingType(m_pricingType));
  }

  if (m_subscriptionPricingDetailsHasBeenSet) {
    payload.WithObject("SubscriptionPricingDetails", m_subscriptionPricingDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
