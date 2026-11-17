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
enum class AgreementRequestStatus { NOT_SET, DRAFT, PENDING_APPROVAL, APPROVED, ACCEPTED, REJECTED, CANCELLED };

namespace AgreementRequestStatusMapper {
AWS_AGREEMENTSERVICE_API AgreementRequestStatus GetAgreementRequestStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementRequestStatus(AgreementRequestStatus value);
}  // namespace AgreementRequestStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
