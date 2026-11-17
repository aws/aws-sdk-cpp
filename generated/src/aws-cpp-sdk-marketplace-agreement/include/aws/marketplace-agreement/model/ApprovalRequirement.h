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
enum class ApprovalRequirement { NOT_SET, REQUIRED, NOT_REQUIRED };

namespace ApprovalRequirementMapper {
AWS_AGREEMENTSERVICE_API ApprovalRequirement GetApprovalRequirementForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForApprovalRequirement(ApprovalRequirement value);
}  // namespace ApprovalRequirementMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
