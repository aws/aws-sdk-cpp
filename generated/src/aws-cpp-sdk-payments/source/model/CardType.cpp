/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/CardType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace CardTypeMapper {

static const int CREDIT_HASH = HashingUtils::HashString("CREDIT");
static const int DEBIT_HASH = HashingUtils::HashString("DEBIT");

CardType GetCardTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREDIT_HASH) {
    return CardType::CREDIT;
  } else if (hashCode == DEBIT_HASH) {
    return CardType::DEBIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CardType>(hashCode);
  }

  return CardType::NOT_SET;
}

Aws::String GetNameForCardType(CardType enumValue) {
  switch (enumValue) {
    case CardType::NOT_SET:
      return {};
    case CardType::CREDIT:
      return "CREDIT";
    case CardType::DEBIT:
      return "DEBIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CardTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
