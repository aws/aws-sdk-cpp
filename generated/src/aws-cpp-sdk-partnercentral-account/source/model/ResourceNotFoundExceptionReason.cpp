/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/ResourceNotFoundExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace ResourceNotFoundExceptionReasonMapper {

static const int PARTNER_NOT_FOUND_HASH = HashingUtils::HashString("PARTNER_NOT_FOUND");
static const int PARTNER_PROFILE_NOT_FOUND_HASH = HashingUtils::HashString("PARTNER_PROFILE_NOT_FOUND");
static const int PARTNER_PROFILE_TASK_NOT_FOUND_HASH = HashingUtils::HashString("PARTNER_PROFILE_TASK_NOT_FOUND");
static const int PARTNER_DOMAIN_NOT_FOUND_HASH = HashingUtils::HashString("PARTNER_DOMAIN_NOT_FOUND");
static const int SENDER_PROFILE_NOT_FOUND_HASH = HashingUtils::HashString("SENDER_PROFILE_NOT_FOUND");
static const int RECEIVER_PROFILE_NOT_FOUND_HASH = HashingUtils::HashString("RECEIVER_PROFILE_NOT_FOUND");
static const int CONNECTION_INVITATION_NOT_FOUND_HASH = HashingUtils::HashString("CONNECTION_INVITATION_NOT_FOUND");
static const int CONNECTION_NOT_FOUND_HASH = HashingUtils::HashString("CONNECTION_NOT_FOUND");
static const int VERIFICATION_NOT_FOUND_HASH = HashingUtils::HashString("VERIFICATION_NOT_FOUND");

ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PARTNER_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::PARTNER_NOT_FOUND;
  } else if (hashCode == PARTNER_PROFILE_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::PARTNER_PROFILE_NOT_FOUND;
  } else if (hashCode == PARTNER_PROFILE_TASK_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::PARTNER_PROFILE_TASK_NOT_FOUND;
  } else if (hashCode == PARTNER_DOMAIN_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::PARTNER_DOMAIN_NOT_FOUND;
  } else if (hashCode == SENDER_PROFILE_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::SENDER_PROFILE_NOT_FOUND;
  } else if (hashCode == RECEIVER_PROFILE_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::RECEIVER_PROFILE_NOT_FOUND;
  } else if (hashCode == CONNECTION_INVITATION_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::CONNECTION_INVITATION_NOT_FOUND;
  } else if (hashCode == CONNECTION_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::CONNECTION_NOT_FOUND;
  } else if (hashCode == VERIFICATION_NOT_FOUND_HASH) {
    return ResourceNotFoundExceptionReason::VERIFICATION_NOT_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceNotFoundExceptionReason>(hashCode);
  }

  return ResourceNotFoundExceptionReason::NOT_SET;
}

Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason enumValue) {
  switch (enumValue) {
    case ResourceNotFoundExceptionReason::NOT_SET:
      return {};
    case ResourceNotFoundExceptionReason::PARTNER_NOT_FOUND:
      return "PARTNER_NOT_FOUND";
    case ResourceNotFoundExceptionReason::PARTNER_PROFILE_NOT_FOUND:
      return "PARTNER_PROFILE_NOT_FOUND";
    case ResourceNotFoundExceptionReason::PARTNER_PROFILE_TASK_NOT_FOUND:
      return "PARTNER_PROFILE_TASK_NOT_FOUND";
    case ResourceNotFoundExceptionReason::PARTNER_DOMAIN_NOT_FOUND:
      return "PARTNER_DOMAIN_NOT_FOUND";
    case ResourceNotFoundExceptionReason::SENDER_PROFILE_NOT_FOUND:
      return "SENDER_PROFILE_NOT_FOUND";
    case ResourceNotFoundExceptionReason::RECEIVER_PROFILE_NOT_FOUND:
      return "RECEIVER_PROFILE_NOT_FOUND";
    case ResourceNotFoundExceptionReason::CONNECTION_INVITATION_NOT_FOUND:
      return "CONNECTION_INVITATION_NOT_FOUND";
    case ResourceNotFoundExceptionReason::CONNECTION_NOT_FOUND:
      return "CONNECTION_NOT_FOUND";
    case ResourceNotFoundExceptionReason::VERIFICATION_NOT_FOUND:
      return "VERIFICATION_NOT_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceNotFoundExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
