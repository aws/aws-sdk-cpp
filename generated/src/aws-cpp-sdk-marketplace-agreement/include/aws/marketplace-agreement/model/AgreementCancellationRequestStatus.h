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
enum class AgreementCancellationRequestStatus { NOT_SET, PENDING_APPROVAL, APPROVED, REJECTED, CANCELLED, VALIDATION_FAILED };

namespace AgreementCancellationRequestStatusMapper {
AWS_AGREEMENTSERVICE_API AgreementCancellationRequestStatus GetAgreementCancellationRequestStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementCancellationRequestStatus(AgreementCancellationRequestStatus value);
}  // namespace AgreementCancellationRequestStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
