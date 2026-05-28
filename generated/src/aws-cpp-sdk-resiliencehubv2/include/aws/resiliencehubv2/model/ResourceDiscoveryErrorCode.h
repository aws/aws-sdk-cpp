/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class ResourceDiscoveryErrorCode {
  NOT_SET,
  INVALID_PERMISSIONS,
  STACK_NOT_FOUND,
  CLUSTER_NOT_FOUND,
  STATE_FILE_NOT_FOUND,
  ACCESS_DENIED,
  UNSUPPORTED_CLUSTER,
  INTERNAL_ERROR
};

namespace ResourceDiscoveryErrorCodeMapper {
AWS_RESILIENCEHUBV2_API ResourceDiscoveryErrorCode GetResourceDiscoveryErrorCodeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForResourceDiscoveryErrorCode(ResourceDiscoveryErrorCode value);
}  // namespace ResourceDiscoveryErrorCodeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
