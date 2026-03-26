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
enum class PaymentRequestStatus { NOT_SET, VALIDATING, VALIDATION_FAILED, PENDING_APPROVAL, APPROVED, REJECTED, CANCELLED };

namespace PaymentRequestStatusMapper {
AWS_AGREEMENTSERVICE_API PaymentRequestStatus GetPaymentRequestStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForPaymentRequestStatus(PaymentRequestStatus value);
}  // namespace PaymentRequestStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
