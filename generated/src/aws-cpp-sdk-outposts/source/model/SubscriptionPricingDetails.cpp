/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/SubscriptionPricingDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

SubscriptionPricingDetails::SubscriptionPricingDetails(JsonView jsonValue) { *this = jsonValue; }

SubscriptionPricingDetails& SubscriptionPricingDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PaymentOption")) {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("PaymentOption"));
    m_paymentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PaymentTerm")) {
    m_paymentTerm = PaymentTermMapper::GetPaymentTermForName(jsonValue.GetString("PaymentTerm"));
    m_paymentTermHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpfrontPrice")) {
    m_upfrontPrice = jsonValue.GetDouble("UpfrontPrice");
    m_upfrontPriceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MonthlyRecurringPrice")) {
    m_monthlyRecurringPrice = jsonValue.GetDouble("MonthlyRecurringPrice");
    m_monthlyRecurringPriceHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionPricingDetails::Jsonize() const {
  JsonValue payload;

  if (m_paymentOptionHasBeenSet) {
    payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if (m_paymentTermHasBeenSet) {
    payload.WithString("PaymentTerm", PaymentTermMapper::GetNameForPaymentTerm(m_paymentTerm));
  }

  if (m_upfrontPriceHasBeenSet) {
    payload.WithDouble("UpfrontPrice", m_upfrontPrice);
  }

  if (m_monthlyRecurringPriceHasBeenSet) {
    payload.WithDouble("MonthlyRecurringPrice", m_monthlyRecurringPrice);
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
