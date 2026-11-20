/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class PaymentMethod {
  NOT_SET,
  CARD,
  US_ACH_BANK_ACCOUNT,
  SEPA_BANK_ACCOUNT,
  UK_BACS_BANK_ACCOUNT,
  IN_NET_BANKING,
  CN_BANK_REDIRECT,
  UPI,
  PIX,
  PAY_BY_INVOICE
};

namespace PaymentMethodMapper {
AWS_PAYMENTS_API PaymentMethod GetPaymentMethodForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForPaymentMethod(PaymentMethod value);
}  // namespace PaymentMethodMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
