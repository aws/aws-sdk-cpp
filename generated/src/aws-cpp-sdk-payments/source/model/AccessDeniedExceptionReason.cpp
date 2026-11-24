/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/AccessDeniedExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace AccessDeniedExceptionReasonMapper {

static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NOT_AUTHORIZED");
static const int INVALID_ACCOUNT_STATE_HASH = HashingUtils::HashString("INVALID_ACCOUNT_STATE");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_AUTHORIZED_HASH) {
    return AccessDeniedExceptionReason::NOT_AUTHORIZED;
  } else if (hashCode == INVALID_ACCOUNT_STATE_HASH) {
    return AccessDeniedExceptionReason::INVALID_ACCOUNT_STATE;
  } else if (hashCode == OTHER_HASH) {
    return AccessDeniedExceptionReason::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessDeniedExceptionReason>(hashCode);
  }

  return AccessDeniedExceptionReason::NOT_SET;
}

Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue) {
  switch (enumValue) {
    case AccessDeniedExceptionReason::NOT_SET:
      return {};
    case AccessDeniedExceptionReason::NOT_AUTHORIZED:
      return "NOT_AUTHORIZED";
    case AccessDeniedExceptionReason::INVALID_ACCOUNT_STATE:
      return "INVALID_ACCOUNT_STATE";
    case AccessDeniedExceptionReason::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
