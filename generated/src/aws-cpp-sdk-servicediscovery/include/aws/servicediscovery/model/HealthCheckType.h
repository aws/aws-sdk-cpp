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
enum class HealthCheckType { NOT_SET, HTTP, HTTPS, TCP };

namespace HealthCheckTypeMapper {
AWS_SERVICEDISCOVERY_API HealthCheckType GetHealthCheckTypeForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForHealthCheckType(HealthCheckType value);
}  // namespace HealthCheckTypeMapper
}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
