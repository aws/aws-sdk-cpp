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
enum class ResourceDiscoveryRunStatus { NOT_SET, RUNNING, SUCCEEDED, FAILED, COMPLETED_WITH_FAILURES, NOT_STARTED };

namespace ResourceDiscoveryRunStatusMapper {
AWS_RESILIENCEHUBV2_API ResourceDiscoveryRunStatus GetResourceDiscoveryRunStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForResourceDiscoveryRunStatus(ResourceDiscoveryRunStatus value);
}  // namespace ResourceDiscoveryRunStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
