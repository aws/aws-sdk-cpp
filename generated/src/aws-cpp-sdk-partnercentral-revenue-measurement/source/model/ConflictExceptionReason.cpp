/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/ConflictExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace ConflictExceptionReasonMapper {

static const int CONFLICT_CLIENT_TOKEN_HASH = HashingUtils::HashString("CONFLICT_CLIENT_TOKEN");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("CONCURRENT_MODIFICATION");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("RESOURCE_ALREADY_EXISTS");
static const int REVISION_MISMATCH_HASH = HashingUtils::HashString("REVISION_MISMATCH");

ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFLICT_CLIENT_TOKEN_HASH) {
    return ConflictExceptionReason::CONFLICT_CLIENT_TOKEN;
  } else if (hashCode == CONCURRENT_MODIFICATION_HASH) {
    return ConflictExceptionReason::CONCURRENT_MODIFICATION;
  } else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH) {
    return ConflictExceptionReason::RESOURCE_ALREADY_EXISTS;
  } else if (hashCode == REVISION_MISMATCH_HASH) {
    return ConflictExceptionReason::REVISION_MISMATCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConflictExceptionReason>(hashCode);
  }

  return ConflictExceptionReason::NOT_SET;
}

Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue) {
  switch (enumValue) {
    case ConflictExceptionReason::NOT_SET:
      return {};
    case ConflictExceptionReason::CONFLICT_CLIENT_TOKEN:
      return "CONFLICT_CLIENT_TOKEN";
    case ConflictExceptionReason::CONCURRENT_MODIFICATION:
      return "CONCURRENT_MODIFICATION";
    case ConflictExceptionReason::RESOURCE_ALREADY_EXISTS:
      return "RESOURCE_ALREADY_EXISTS";
    case ConflictExceptionReason::REVISION_MISMATCH:
      return "REVISION_MISMATCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConflictExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
