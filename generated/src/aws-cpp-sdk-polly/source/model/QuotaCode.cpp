/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/QuotaCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace QuotaCodeMapper {

static const int input_stream_inbound_event_timeout_HASH = HashingUtils::HashString("input-stream-inbound-event-timeout");
static const int input_stream_timeout_HASH = HashingUtils::HashString("input-stream-timeout");

QuotaCode GetQuotaCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == input_stream_inbound_event_timeout_HASH) {
    return QuotaCode::input_stream_inbound_event_timeout;
  } else if (hashCode == input_stream_timeout_HASH) {
    return QuotaCode::input_stream_timeout;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotaCode>(hashCode);
  }

  return QuotaCode::NOT_SET;
}

Aws::String GetNameForQuotaCode(QuotaCode enumValue) {
  switch (enumValue) {
    case QuotaCode::NOT_SET:
      return {};
    case QuotaCode::input_stream_inbound_event_timeout:
      return "input-stream-inbound-event-timeout";
    case QuotaCode::input_stream_timeout:
      return "input-stream-timeout";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotaCodeMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
