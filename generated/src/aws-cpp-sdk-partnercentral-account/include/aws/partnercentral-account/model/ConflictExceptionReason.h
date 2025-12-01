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
enum class ConflictExceptionReason {
  NOT_SET,
  CONFLICT_CLIENT_TOKEN,
  DUPLICATE_PARTNER,
  INCOMPATIBLE_PROFILE_STATE,
  INCOMPATIBLE_PARTNER_PROFILE_TASK_STATE,
  DUPLICATE_CONNECTION_INVITATION,
  INCOMPATIBLE_CONNECTION_INVITATION_STATE,
  INCOMPATIBLE_CONNECTION_INVITATION_RECEIVER,
  DUPLICATE_CONNECTION,
  INCOMPATIBLE_CONNECTION_STATE,
  INCOMPATIBLE_CONNECTION_PREFERENCES_REVISION
};

namespace ConflictExceptionReasonMapper {
AWS_PARTNERCENTRALACCOUNT_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
}  // namespace ConflictExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
