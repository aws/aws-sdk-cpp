/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/CardBrand.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace CardBrandMapper {

static const int VISA_HASH = HashingUtils::HashString("VISA");
static const int MASTERCARD_HASH = HashingUtils::HashString("MASTERCARD");
static const int AMEX_HASH = HashingUtils::HashString("AMEX");
static const int DISCOVER_HASH = HashingUtils::HashString("DISCOVER");
static const int JCB_HASH = HashingUtils::HashString("JCB");
static const int RUPAY_HASH = HashingUtils::HashString("RUPAY");
static const int CHINA_UNIONPAY_HASH = HashingUtils::HashString("CHINA_UNIONPAY");

CardBrand GetCardBrandForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VISA_HASH) {
    return CardBrand::VISA;
  } else if (hashCode == MASTERCARD_HASH) {
    return CardBrand::MASTERCARD;
  } else if (hashCode == AMEX_HASH) {
    return CardBrand::AMEX;
  } else if (hashCode == DISCOVER_HASH) {
    return CardBrand::DISCOVER;
  } else if (hashCode == JCB_HASH) {
    return CardBrand::JCB;
  } else if (hashCode == RUPAY_HASH) {
    return CardBrand::RUPAY;
  } else if (hashCode == CHINA_UNIONPAY_HASH) {
    return CardBrand::CHINA_UNIONPAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CardBrand>(hashCode);
  }

  return CardBrand::NOT_SET;
}

Aws::String GetNameForCardBrand(CardBrand enumValue) {
  switch (enumValue) {
    case CardBrand::NOT_SET:
      return {};
    case CardBrand::VISA:
      return "VISA";
    case CardBrand::MASTERCARD:
      return "MASTERCARD";
    case CardBrand::AMEX:
      return "AMEX";
    case CardBrand::DISCOVER:
      return "DISCOVER";
    case CardBrand::JCB:
      return "JCB";
    case CardBrand::RUPAY:
      return "RUPAY";
    case CardBrand::CHINA_UNIONPAY:
      return "CHINA_UNIONPAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CardBrandMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
