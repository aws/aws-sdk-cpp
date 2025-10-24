﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Model {
enum class ServiceFilterName { NOT_SET, NAMESPACE_ID, RESOURCE_OWNER };

namespace ServiceFilterNameMapper {
AWS_SERVICEDISCOVERY_API ServiceFilterName GetServiceFilterNameForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForServiceFilterName(ServiceFilterName value);
}  // namespace ServiceFilterNameMapper
}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
