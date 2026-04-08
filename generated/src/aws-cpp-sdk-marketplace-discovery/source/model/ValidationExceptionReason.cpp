/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("INVALID_PAGINATION_TOKEN");
static const int MALFORMED_REQUEST_PARAMETERS_HASH = HashingUtils::HashString("MALFORMED_REQUEST_PARAMETERS");
static const int PAGINATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("PAGINATION_LIMIT_EXCEEDED");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_PAGINATION_TOKEN_HASH) {
    return ValidationExceptionReason::INVALID_PAGINATION_TOKEN;
  } else if (hashCode == MALFORMED_REQUEST_PARAMETERS_HASH) {
    return ValidationExceptionReason::MALFORMED_REQUEST_PARAMETERS;
  } else if (hashCode == PAGINATION_LIMIT_EXCEEDED_HASH) {
    return ValidationExceptionReason::PAGINATION_LIMIT_EXCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationExceptionReason>(hashCode);
  }

  return ValidationExceptionReason::NOT_SET;
}

Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue) {
  switch (enumValue) {
    case ValidationExceptionReason::NOT_SET:
      return {};
    case ValidationExceptionReason::INVALID_PAGINATION_TOKEN:
      return "INVALID_PAGINATION_TOKEN";
    case ValidationExceptionReason::MALFORMED_REQUEST_PARAMETERS:
      return "MALFORMED_REQUEST_PARAMETERS";
    case ValidationExceptionReason::PAGINATION_LIMIT_EXCEEDED:
      return "PAGINATION_LIMIT_EXCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
