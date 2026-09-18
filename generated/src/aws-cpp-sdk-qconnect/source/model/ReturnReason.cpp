/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/ReturnReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace ReturnReasonMapper {

static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int COMPLETE_WITH_ERROR_HASH = HashingUtils::HashString("COMPLETE_WITH_ERROR");
static const int ESCALATE_HASH = HashingUtils::HashString("ESCALATE");
static const int OUT_OF_DOMAIN_HASH = HashingUtils::HashString("OUT_OF_DOMAIN");

ReturnReason GetReturnReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETE_HASH) {
    return ReturnReason::COMPLETE;
  } else if (hashCode == COMPLETE_WITH_ERROR_HASH) {
    return ReturnReason::COMPLETE_WITH_ERROR;
  } else if (hashCode == ESCALATE_HASH) {
    return ReturnReason::ESCALATE;
  } else if (hashCode == OUT_OF_DOMAIN_HASH) {
    return ReturnReason::OUT_OF_DOMAIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReturnReason>(hashCode);
  }

  return ReturnReason::NOT_SET;
}

Aws::String GetNameForReturnReason(ReturnReason enumValue) {
  switch (enumValue) {
    case ReturnReason::NOT_SET:
      return {};
    case ReturnReason::COMPLETE:
      return "COMPLETE";
    case ReturnReason::COMPLETE_WITH_ERROR:
      return "COMPLETE_WITH_ERROR";
    case ReturnReason::ESCALATE:
      return "ESCALATE";
    case ReturnReason::OUT_OF_DOMAIN:
      return "OUT_OF_DOMAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReturnReasonMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
