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
enum class PaymentRequestApprovalStrategy { NOT_SET, AUTO_APPROVE_ON_EXPIRATION, WAIT_FOR_APPROVAL };

namespace PaymentRequestApprovalStrategyMapper {
AWS_AGREEMENTSERVICE_API PaymentRequestApprovalStrategy GetPaymentRequestApprovalStrategyForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForPaymentRequestApprovalStrategy(PaymentRequestApprovalStrategy value);
}  // namespace PaymentRequestApprovalStrategyMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
