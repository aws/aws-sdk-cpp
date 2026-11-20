/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/PaymentMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace PaymentMethodMapper {

static const int CARD_HASH = HashingUtils::HashString("CARD");
static const int US_ACH_BANK_ACCOUNT_HASH = HashingUtils::HashString("US_ACH_BANK_ACCOUNT");
static const int SEPA_BANK_ACCOUNT_HASH = HashingUtils::HashString("SEPA_BANK_ACCOUNT");
static const int UK_BACS_BANK_ACCOUNT_HASH = HashingUtils::HashString("UK_BACS_BANK_ACCOUNT");
static const int IN_NET_BANKING_HASH = HashingUtils::HashString("IN_NET_BANKING");
static const int CN_BANK_REDIRECT_HASH = HashingUtils::HashString("CN_BANK_REDIRECT");
static const int UPI_HASH = HashingUtils::HashString("UPI");
static const int PIX_HASH = HashingUtils::HashString("PIX");
static const int PAY_BY_INVOICE_HASH = HashingUtils::HashString("PAY_BY_INVOICE");

PaymentMethod GetPaymentMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CARD_HASH) {
    return PaymentMethod::CARD;
  } else if (hashCode == US_ACH_BANK_ACCOUNT_HASH) {
    return PaymentMethod::US_ACH_BANK_ACCOUNT;
  } else if (hashCode == SEPA_BANK_ACCOUNT_HASH) {
    return PaymentMethod::SEPA_BANK_ACCOUNT;
  } else if (hashCode == UK_BACS_BANK_ACCOUNT_HASH) {
    return PaymentMethod::UK_BACS_BANK_ACCOUNT;
  } else if (hashCode == IN_NET_BANKING_HASH) {
    return PaymentMethod::IN_NET_BANKING;
  } else if (hashCode == CN_BANK_REDIRECT_HASH) {
    return PaymentMethod::CN_BANK_REDIRECT;
  } else if (hashCode == UPI_HASH) {
    return PaymentMethod::UPI;
  } else if (hashCode == PIX_HASH) {
    return PaymentMethod::PIX;
  } else if (hashCode == PAY_BY_INVOICE_HASH) {
    return PaymentMethod::PAY_BY_INVOICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentMethod>(hashCode);
  }

  return PaymentMethod::NOT_SET;
}

Aws::String GetNameForPaymentMethod(PaymentMethod enumValue) {
  switch (enumValue) {
    case PaymentMethod::NOT_SET:
      return {};
    case PaymentMethod::CARD:
      return "CARD";
    case PaymentMethod::US_ACH_BANK_ACCOUNT:
      return "US_ACH_BANK_ACCOUNT";
    case PaymentMethod::SEPA_BANK_ACCOUNT:
      return "SEPA_BANK_ACCOUNT";
    case PaymentMethod::UK_BACS_BANK_ACCOUNT:
      return "UK_BACS_BANK_ACCOUNT";
    case PaymentMethod::IN_NET_BANKING:
      return "IN_NET_BANKING";
    case PaymentMethod::CN_BANK_REDIRECT:
      return "CN_BANK_REDIRECT";
    case PaymentMethod::UPI:
      return "UPI";
    case PaymentMethod::PIX:
      return "PIX";
    case PaymentMethod::PAY_BY_INVOICE:
      return "PAY_BY_INVOICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentMethodMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
