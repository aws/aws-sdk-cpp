﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/PaymentTerm.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace PaymentTermMapper {

static const int THREE_YEARS_HASH = HashingUtils::HashString("THREE_YEARS");
static const int ONE_YEAR_HASH = HashingUtils::HashString("ONE_YEAR");
static const int FIVE_YEARS_HASH = HashingUtils::HashString("FIVE_YEARS");

PaymentTerm GetPaymentTermForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THREE_YEARS_HASH) {
    return PaymentTerm::THREE_YEARS;
  } else if (hashCode == ONE_YEAR_HASH) {
    return PaymentTerm::ONE_YEAR;
  } else if (hashCode == FIVE_YEARS_HASH) {
    return PaymentTerm::FIVE_YEARS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentTerm>(hashCode);
  }

  return PaymentTerm::NOT_SET;
}

Aws::String GetNameForPaymentTerm(PaymentTerm enumValue) {
  switch (enumValue) {
    case PaymentTerm::NOT_SET:
      return {};
    case PaymentTerm::THREE_YEARS:
      return "THREE_YEARS";
    case PaymentTerm::ONE_YEAR:
      return "ONE_YEAR";
    case PaymentTerm::FIVE_YEARS:
      return "FIVE_YEARS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentTermMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
