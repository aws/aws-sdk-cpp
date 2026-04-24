/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/WAFLogType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace WAFLogTypeMapper {

static const int WAF_LOGS_HASH = HashingUtils::HashString("WAF_LOGS");

WAFLogType GetWAFLogTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WAF_LOGS_HASH) {
    return WAFLogType::WAF_LOGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WAFLogType>(hashCode);
  }

  return WAFLogType::NOT_SET;
}

Aws::String GetNameForWAFLogType(WAFLogType enumValue) {
  switch (enumValue) {
    case WAFLogType::NOT_SET:
      return {};
    case WAFLogType::WAF_LOGS:
      return "WAF_LOGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WAFLogTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
