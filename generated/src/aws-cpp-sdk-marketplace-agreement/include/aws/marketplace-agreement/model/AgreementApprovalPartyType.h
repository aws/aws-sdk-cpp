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
enum class AgreementApprovalPartyType { NOT_SET, REQUESTER, AWS_ORGANIZATION_ADMIN };

namespace AgreementApprovalPartyTypeMapper {
AWS_AGREEMENTSERVICE_API AgreementApprovalPartyType GetAgreementApprovalPartyTypeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementApprovalPartyType(AgreementApprovalPartyType value);
}  // namespace AgreementApprovalPartyTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
