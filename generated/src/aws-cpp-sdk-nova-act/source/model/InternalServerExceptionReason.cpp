/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/nova-act/model/InternalServerExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {
namespace InternalServerExceptionReasonMapper {

static const int InvalidModelGeneration_HASH = HashingUtils::HashString("InvalidModelGeneration");
static const int RequestTokenLimitExceeded_HASH = HashingUtils::HashString("RequestTokenLimitExceeded");

InternalServerExceptionReason GetInternalServerExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == InvalidModelGeneration_HASH) {
    return InternalServerExceptionReason::InvalidModelGeneration;
  } else if (hashCode == RequestTokenLimitExceeded_HASH) {
    return InternalServerExceptionReason::RequestTokenLimitExceeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InternalServerExceptionReason>(hashCode);
  }

  return InternalServerExceptionReason::NOT_SET;
}

Aws::String GetNameForInternalServerExceptionReason(InternalServerExceptionReason enumValue) {
  switch (enumValue) {
    case InternalServerExceptionReason::NOT_SET:
      return {};
    case InternalServerExceptionReason::InvalidModelGeneration:
      return "InvalidModelGeneration";
    case InternalServerExceptionReason::RequestTokenLimitExceeded:
      return "RequestTokenLimitExceeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InternalServerExceptionReasonMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
