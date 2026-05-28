/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ResourceDiscoveryErrorCodeMapper {

static const int INVALID_PERMISSIONS_HASH = HashingUtils::HashString("INVALID_PERMISSIONS");
static const int STACK_NOT_FOUND_HASH = HashingUtils::HashString("STACK_NOT_FOUND");
static const int CLUSTER_NOT_FOUND_HASH = HashingUtils::HashString("CLUSTER_NOT_FOUND");
static const int STATE_FILE_NOT_FOUND_HASH = HashingUtils::HashString("STATE_FILE_NOT_FOUND");
static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int UNSUPPORTED_CLUSTER_HASH = HashingUtils::HashString("UNSUPPORTED_CLUSTER");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

ResourceDiscoveryErrorCode GetResourceDiscoveryErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_PERMISSIONS_HASH) {
    return ResourceDiscoveryErrorCode::INVALID_PERMISSIONS;
  } else if (hashCode == STACK_NOT_FOUND_HASH) {
    return ResourceDiscoveryErrorCode::STACK_NOT_FOUND;
  } else if (hashCode == CLUSTER_NOT_FOUND_HASH) {
    return ResourceDiscoveryErrorCode::CLUSTER_NOT_FOUND;
  } else if (hashCode == STATE_FILE_NOT_FOUND_HASH) {
    return ResourceDiscoveryErrorCode::STATE_FILE_NOT_FOUND;
  } else if (hashCode == ACCESS_DENIED_HASH) {
    return ResourceDiscoveryErrorCode::ACCESS_DENIED;
  } else if (hashCode == UNSUPPORTED_CLUSTER_HASH) {
    return ResourceDiscoveryErrorCode::UNSUPPORTED_CLUSTER;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ResourceDiscoveryErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceDiscoveryErrorCode>(hashCode);
  }

  return ResourceDiscoveryErrorCode::NOT_SET;
}

Aws::String GetNameForResourceDiscoveryErrorCode(ResourceDiscoveryErrorCode enumValue) {
  switch (enumValue) {
    case ResourceDiscoveryErrorCode::NOT_SET:
      return {};
    case ResourceDiscoveryErrorCode::INVALID_PERMISSIONS:
      return "INVALID_PERMISSIONS";
    case ResourceDiscoveryErrorCode::STACK_NOT_FOUND:
      return "STACK_NOT_FOUND";
    case ResourceDiscoveryErrorCode::CLUSTER_NOT_FOUND:
      return "CLUSTER_NOT_FOUND";
    case ResourceDiscoveryErrorCode::STATE_FILE_NOT_FOUND:
      return "STATE_FILE_NOT_FOUND";
    case ResourceDiscoveryErrorCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case ResourceDiscoveryErrorCode::UNSUPPORTED_CLUSTER:
      return "UNSUPPORTED_CLUSTER";
    case ResourceDiscoveryErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceDiscoveryErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
