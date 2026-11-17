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
enum class AgreementApprovalType { NOT_SET, BUYER_AGREEMENT_APPROVAL };

namespace AgreementApprovalTypeMapper {
AWS_AGREEMENTSERVICE_API AgreementApprovalType GetAgreementApprovalTypeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementApprovalType(AgreementApprovalType value);
}  // namespace AgreementApprovalTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
