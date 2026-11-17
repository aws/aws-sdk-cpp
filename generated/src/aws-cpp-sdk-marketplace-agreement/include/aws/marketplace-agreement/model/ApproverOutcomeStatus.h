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
enum class ApproverOutcomeStatus { NOT_SET, QUEUED, PENDING_APPROVAL, APPROVED, REJECTED, EXPIRED, SKIPPED };

namespace ApproverOutcomeStatusMapper {
AWS_AGREEMENTSERVICE_API ApproverOutcomeStatus GetApproverOutcomeStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForApproverOutcomeStatus(ApproverOutcomeStatus value);
}  // namespace ApproverOutcomeStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
