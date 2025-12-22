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
enum class ResourceNotFoundExceptionReason {
  NOT_SET,
  PARTNER_NOT_FOUND,
  PARTNER_PROFILE_NOT_FOUND,
  PARTNER_PROFILE_TASK_NOT_FOUND,
  PARTNER_DOMAIN_NOT_FOUND,
  SENDER_PROFILE_NOT_FOUND,
  RECEIVER_PROFILE_NOT_FOUND,
  CONNECTION_INVITATION_NOT_FOUND,
  CONNECTION_NOT_FOUND,
  VERIFICATION_NOT_FOUND
};

namespace ResourceNotFoundExceptionReasonMapper {
AWS_PARTNERCENTRALACCOUNT_API ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason value);
}  // namespace ResourceNotFoundExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
