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
enum class VerificationStatus { NOT_SET, PENDING_CUSTOMER_ACTION, IN_PROGRESS, FAILED, SUCCEEDED, REJECTED };

namespace VerificationStatusMapper {
AWS_PARTNERCENTRALACCOUNT_API VerificationStatus GetVerificationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForVerificationStatus(VerificationStatus value);
}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
