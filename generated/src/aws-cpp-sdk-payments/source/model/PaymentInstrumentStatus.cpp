/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/PaymentInstrumentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace PaymentInstrumentStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PENDING_SETUP_HASH = HashingUtils::HashString("PENDING_SETUP");
static const int SETUP_IN_PROGRESS_HASH = HashingUtils::HashString("SETUP_IN_PROGRESS");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");

PaymentInstrumentStatus GetPaymentInstrumentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return PaymentInstrumentStatus::ACTIVE;
  } else if (hashCode == PENDING_SETUP_HASH) {
    return PaymentInstrumentStatus::PENDING_SETUP;
  } else if (hashCode == SETUP_IN_PROGRESS_HASH) {
    return PaymentInstrumentStatus::SETUP_IN_PROGRESS;
  } else if (hashCode == INVALID_HASH) {
    return PaymentInstrumentStatus::INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentInstrumentStatus>(hashCode);
  }

  return PaymentInstrumentStatus::NOT_SET;
}

Aws::String GetNameForPaymentInstrumentStatus(PaymentInstrumentStatus enumValue) {
  switch (enumValue) {
    case PaymentInstrumentStatus::NOT_SET:
      return {};
    case PaymentInstrumentStatus::ACTIVE:
      return "ACTIVE";
    case PaymentInstrumentStatus::PENDING_SETUP:
      return "PENDING_SETUP";
    case PaymentInstrumentStatus::SETUP_IN_PROGRESS:
      return "SETUP_IN_PROGRESS";
    case PaymentInstrumentStatus::INVALID:
      return "INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentInstrumentStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
