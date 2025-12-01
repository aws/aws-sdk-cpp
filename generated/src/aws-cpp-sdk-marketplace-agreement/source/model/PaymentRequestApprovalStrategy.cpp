/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/PaymentRequestApprovalStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace PaymentRequestApprovalStrategyMapper {

static const int AUTO_APPROVE_ON_EXPIRATION_HASH = HashingUtils::HashString("AUTO_APPROVE_ON_EXPIRATION");
static const int WAIT_FOR_APPROVAL_HASH = HashingUtils::HashString("WAIT_FOR_APPROVAL");

PaymentRequestApprovalStrategy GetPaymentRequestApprovalStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_APPROVE_ON_EXPIRATION_HASH) {
    return PaymentRequestApprovalStrategy::AUTO_APPROVE_ON_EXPIRATION;
  } else if (hashCode == WAIT_FOR_APPROVAL_HASH) {
    return PaymentRequestApprovalStrategy::WAIT_FOR_APPROVAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentRequestApprovalStrategy>(hashCode);
  }

  return PaymentRequestApprovalStrategy::NOT_SET;
}

Aws::String GetNameForPaymentRequestApprovalStrategy(PaymentRequestApprovalStrategy enumValue) {
  switch (enumValue) {
    case PaymentRequestApprovalStrategy::NOT_SET:
      return {};
    case PaymentRequestApprovalStrategy::AUTO_APPROVE_ON_EXPIRATION:
      return "AUTO_APPROVE_ON_EXPIRATION";
    case PaymentRequestApprovalStrategy::WAIT_FOR_APPROVAL:
      return "WAIT_FOR_APPROVAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentRequestApprovalStrategyMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
