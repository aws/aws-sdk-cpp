/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class VerificationType { NOT_SET, BUSINESS_VERIFICATION, REGISTRANT_VERIFICATION };

namespace VerificationTypeMapper {
AWS_PARTNERCENTRALACCOUNT_API VerificationType GetVerificationTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForVerificationType(VerificationType value);
}  // namespace VerificationTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
