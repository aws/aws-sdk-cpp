/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qconnect/model/GlobalResiliencyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {
namespace GlobalResiliencyStatusMapper {

static const int SUPPORTED_HASH = HashingUtils::HashString("SUPPORTED");
static const int UNSUPPORTED_HASH = HashingUtils::HashString("UNSUPPORTED");

GlobalResiliencyStatus GetGlobalResiliencyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUPPORTED_HASH) {
    return GlobalResiliencyStatus::SUPPORTED;
  } else if (hashCode == UNSUPPORTED_HASH) {
    return GlobalResiliencyStatus::UNSUPPORTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlobalResiliencyStatus>(hashCode);
  }

  return GlobalResiliencyStatus::NOT_SET;
}

Aws::String GetNameForGlobalResiliencyStatus(GlobalResiliencyStatus enumValue) {
  switch (enumValue) {
    case GlobalResiliencyStatus::NOT_SET:
      return {};
    case GlobalResiliencyStatus::SUPPORTED:
      return "SUPPORTED";
    case GlobalResiliencyStatus::UNSUPPORTED:
      return "UNSUPPORTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlobalResiliencyStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
