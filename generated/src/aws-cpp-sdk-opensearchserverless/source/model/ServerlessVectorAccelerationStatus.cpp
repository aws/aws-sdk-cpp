/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/ServerlessVectorAccelerationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace ServerlessVectorAccelerationStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");

ServerlessVectorAccelerationStatus GetServerlessVectorAccelerationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ServerlessVectorAccelerationStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ServerlessVectorAccelerationStatus::DISABLED;
  } else if (hashCode == ALLOWED_HASH) {
    return ServerlessVectorAccelerationStatus::ALLOWED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServerlessVectorAccelerationStatus>(hashCode);
  }

  return ServerlessVectorAccelerationStatus::NOT_SET;
}

Aws::String GetNameForServerlessVectorAccelerationStatus(ServerlessVectorAccelerationStatus enumValue) {
  switch (enumValue) {
    case ServerlessVectorAccelerationStatus::NOT_SET:
      return {};
    case ServerlessVectorAccelerationStatus::ENABLED:
      return "ENABLED";
    case ServerlessVectorAccelerationStatus::DISABLED:
      return "DISABLED";
    case ServerlessVectorAccelerationStatus::ALLOWED:
      return "ALLOWED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServerlessVectorAccelerationStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
