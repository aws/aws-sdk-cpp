/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/InitialScan.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace InitialScanMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

InitialScan GetInitialScanForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return InitialScan::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return InitialScan::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InitialScan>(hashCode);
  }

  return InitialScan::NOT_SET;
}

Aws::String GetNameForInitialScan(InitialScan enumValue) {
  switch (enumValue) {
    case InitialScan::NOT_SET:
      return {};
    case InitialScan::ENABLED:
      return "ENABLED";
    case InitialScan::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InitialScanMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
