/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/SpanStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace SpanStatusMapper {

static const int OK_HASH = HashingUtils::HashString("OK");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");

SpanStatus GetSpanStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OK_HASH) {
    return SpanStatus::OK;
  } else if (hashCode == ERROR__HASH) {
    return SpanStatus::ERROR_;
  } else if (hashCode == TIMEOUT_HASH) {
    return SpanStatus::TIMEOUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpanStatus>(hashCode);
  }

  return SpanStatus::NOT_SET;
}

Aws::String GetNameForSpanStatus(SpanStatus enumValue) {
  switch (enumValue) {
    case SpanStatus::NOT_SET:
      return {};
    case SpanStatus::OK:
      return "OK";
    case SpanStatus::ERROR_:
      return "ERROR";
    case SpanStatus::TIMEOUT:
      return "TIMEOUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpanStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
