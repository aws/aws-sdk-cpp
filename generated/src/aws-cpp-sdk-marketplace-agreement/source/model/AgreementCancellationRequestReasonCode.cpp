/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementCancellationRequestReasonCodeMapper {

static const int INCORRECT_TERMS_ACCEPTED_HASH = HashingUtils::HashString("INCORRECT_TERMS_ACCEPTED");
static const int REPLACING_AGREEMENT_HASH = HashingUtils::HashString("REPLACING_AGREEMENT");
static const int TEST_AGREEMENT_HASH = HashingUtils::HashString("TEST_AGREEMENT");
static const int ALTERNATIVE_PROCUREMENT_CHANNEL_HASH = HashingUtils::HashString("ALTERNATIVE_PROCUREMENT_CHANNEL");
static const int PRODUCT_DISCONTINUED_HASH = HashingUtils::HashString("PRODUCT_DISCONTINUED");
static const int UNINTENDED_RENEWAL_HASH = HashingUtils::HashString("UNINTENDED_RENEWAL");
static const int BUYER_DISSATISFACTION_HASH = HashingUtils::HashString("BUYER_DISSATISFACTION");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

AgreementCancellationRequestReasonCode GetAgreementCancellationRequestReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INCORRECT_TERMS_ACCEPTED_HASH) {
    return AgreementCancellationRequestReasonCode::INCORRECT_TERMS_ACCEPTED;
  } else if (hashCode == REPLACING_AGREEMENT_HASH) {
    return AgreementCancellationRequestReasonCode::REPLACING_AGREEMENT;
  } else if (hashCode == TEST_AGREEMENT_HASH) {
    return AgreementCancellationRequestReasonCode::TEST_AGREEMENT;
  } else if (hashCode == ALTERNATIVE_PROCUREMENT_CHANNEL_HASH) {
    return AgreementCancellationRequestReasonCode::ALTERNATIVE_PROCUREMENT_CHANNEL;
  } else if (hashCode == PRODUCT_DISCONTINUED_HASH) {
    return AgreementCancellationRequestReasonCode::PRODUCT_DISCONTINUED;
  } else if (hashCode == UNINTENDED_RENEWAL_HASH) {
    return AgreementCancellationRequestReasonCode::UNINTENDED_RENEWAL;
  } else if (hashCode == BUYER_DISSATISFACTION_HASH) {
    return AgreementCancellationRequestReasonCode::BUYER_DISSATISFACTION;
  } else if (hashCode == OTHER_HASH) {
    return AgreementCancellationRequestReasonCode::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementCancellationRequestReasonCode>(hashCode);
  }

  return AgreementCancellationRequestReasonCode::NOT_SET;
}

Aws::String GetNameForAgreementCancellationRequestReasonCode(AgreementCancellationRequestReasonCode enumValue) {
  switch (enumValue) {
    case AgreementCancellationRequestReasonCode::NOT_SET:
      return {};
    case AgreementCancellationRequestReasonCode::INCORRECT_TERMS_ACCEPTED:
      return "INCORRECT_TERMS_ACCEPTED";
    case AgreementCancellationRequestReasonCode::REPLACING_AGREEMENT:
      return "REPLACING_AGREEMENT";
    case AgreementCancellationRequestReasonCode::TEST_AGREEMENT:
      return "TEST_AGREEMENT";
    case AgreementCancellationRequestReasonCode::ALTERNATIVE_PROCUREMENT_CHANNEL:
      return "ALTERNATIVE_PROCUREMENT_CHANNEL";
    case AgreementCancellationRequestReasonCode::PRODUCT_DISCONTINUED:
      return "PRODUCT_DISCONTINUED";
    case AgreementCancellationRequestReasonCode::UNINTENDED_RENEWAL:
      return "UNINTENDED_RENEWAL";
    case AgreementCancellationRequestReasonCode::BUYER_DISSATISFACTION:
      return "BUYER_DISSATISFACTION";
    case AgreementCancellationRequestReasonCode::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementCancellationRequestReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
