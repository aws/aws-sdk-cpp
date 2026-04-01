/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class AgreementCancellationRequestReasonCode {
  NOT_SET,
  INCORRECT_TERMS_ACCEPTED,
  REPLACING_AGREEMENT,
  TEST_AGREEMENT,
  ALTERNATIVE_PROCUREMENT_CHANNEL,
  PRODUCT_DISCONTINUED,
  UNINTENDED_RENEWAL,
  BUYER_DISSATISFACTION,
  OTHER
};

namespace AgreementCancellationRequestReasonCodeMapper {
AWS_AGREEMENTSERVICE_API AgreementCancellationRequestReasonCode GetAgreementCancellationRequestReasonCodeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementCancellationRequestReasonCode(AgreementCancellationRequestReasonCode value);
}  // namespace AgreementCancellationRequestReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
