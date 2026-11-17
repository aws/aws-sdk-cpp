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
enum class AgreementApprovalStatus { NOT_SET, PENDING_APPROVAL, APPROVED, REJECTED, EXPIRED, CANCELLED };

namespace AgreementApprovalStatusMapper {
AWS_AGREEMENTSERVICE_API AgreementApprovalStatus GetAgreementApprovalStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementApprovalStatus(AgreementApprovalStatus value);
}  // namespace AgreementApprovalStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
