/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/BillingAdjustmentReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace BillingAdjustmentReasonCodeMapper {

static const int INCORRECT_TERMS_ACCEPTED_HASH = HashingUtils::HashString("INCORRECT_TERMS_ACCEPTED");
static const int INCORRECT_METERING_HASH = HashingUtils::HashString("INCORRECT_METERING");
static const int TEST_ENVIRONMENT_CHARGES_HASH = HashingUtils::HashString("TEST_ENVIRONMENT_CHARGES");
static const int ALTERNATIVE_PROCUREMENT_CHANNEL_HASH = HashingUtils::HashString("ALTERNATIVE_PROCUREMENT_CHANNEL");
static const int UNINTENDED_RENEWAL_HASH = HashingUtils::HashString("UNINTENDED_RENEWAL");
static const int BUYER_DISSATISFACTION_HASH = HashingUtils::HashString("BUYER_DISSATISFACTION");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

BillingAdjustmentReasonCode GetBillingAdjustmentReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCORRECT_TERMS_ACCEPTED_HASH) {
    return BillingAdjustmentReasonCode::INCORRECT_TERMS_ACCEPTED;
  } else if (hashCode == INCORRECT_METERING_HASH) {
    return BillingAdjustmentReasonCode::INCORRECT_METERING;
  } else if (hashCode == TEST_ENVIRONMENT_CHARGES_HASH) {
    return BillingAdjustmentReasonCode::TEST_ENVIRONMENT_CHARGES;
  } else if (hashCode == ALTERNATIVE_PROCUREMENT_CHANNEL_HASH) {
    return BillingAdjustmentReasonCode::ALTERNATIVE_PROCUREMENT_CHANNEL;
  } else if (hashCode == UNINTENDED_RENEWAL_HASH) {
    return BillingAdjustmentReasonCode::UNINTENDED_RENEWAL;
  } else if (hashCode == BUYER_DISSATISFACTION_HASH) {
    return BillingAdjustmentReasonCode::BUYER_DISSATISFACTION;
  } else if (hashCode == OTHER_HASH) {
    return BillingAdjustmentReasonCode::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillingAdjustmentReasonCode>(hashCode);
  }

  return BillingAdjustmentReasonCode::NOT_SET;
}

Aws::String GetNameForBillingAdjustmentReasonCode(BillingAdjustmentReasonCode enumValue) {
  switch (enumValue) {
    case BillingAdjustmentReasonCode::NOT_SET:
      return {};
    case BillingAdjustmentReasonCode::INCORRECT_TERMS_ACCEPTED:
      return "INCORRECT_TERMS_ACCEPTED";
    case BillingAdjustmentReasonCode::INCORRECT_METERING:
      return "INCORRECT_METERING";
    case BillingAdjustmentReasonCode::TEST_ENVIRONMENT_CHARGES:
      return "TEST_ENVIRONMENT_CHARGES";
    case BillingAdjustmentReasonCode::ALTERNATIVE_PROCUREMENT_CHANNEL:
      return "ALTERNATIVE_PROCUREMENT_CHANNEL";
    case BillingAdjustmentReasonCode::UNINTENDED_RENEWAL:
      return "UNINTENDED_RENEWAL";
    case BillingAdjustmentReasonCode::BUYER_DISSATISFACTION:
      return "BUYER_DISSATISFACTION";
    case BillingAdjustmentReasonCode::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillingAdjustmentReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
