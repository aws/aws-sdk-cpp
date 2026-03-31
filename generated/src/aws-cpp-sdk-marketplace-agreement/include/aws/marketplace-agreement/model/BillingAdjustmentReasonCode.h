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
enum class BillingAdjustmentReasonCode {
  NOT_SET,
  INCORRECT_TERMS_ACCEPTED,
  INCORRECT_METERING,
  TEST_ENVIRONMENT_CHARGES,
  ALTERNATIVE_PROCUREMENT_CHANNEL,
  UNINTENDED_RENEWAL,
  BUYER_DISSATISFACTION,
  OTHER
};

namespace BillingAdjustmentReasonCodeMapper {
AWS_AGREEMENTSERVICE_API BillingAdjustmentReasonCode GetBillingAdjustmentReasonCodeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForBillingAdjustmentReasonCode(BillingAdjustmentReasonCode value);
}  // namespace BillingAdjustmentReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
