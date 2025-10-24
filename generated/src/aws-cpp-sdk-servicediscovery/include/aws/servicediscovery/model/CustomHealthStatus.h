/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Model {
enum class CustomHealthStatus { NOT_SET, HEALTHY, UNHEALTHY };

namespace CustomHealthStatusMapper {
AWS_SERVICEDISCOVERY_API CustomHealthStatus GetCustomHealthStatusForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForCustomHealthStatus(CustomHealthStatus value);
}  // namespace CustomHealthStatusMapper
}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
