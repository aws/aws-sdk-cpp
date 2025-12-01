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
enum class InvitationStatus { NOT_SET, PENDING, ACCEPTED, REJECTED, CANCELED, EXPIRED };

namespace InvitationStatusMapper {
AWS_PARTNERCENTRALACCOUNT_API InvitationStatus GetInvitationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForInvitationStatus(InvitationStatus value);
}  // namespace InvitationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
