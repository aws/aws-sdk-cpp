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
enum class NamespaceFilterName { NOT_SET, TYPE, NAME, HTTP_NAME, RESOURCE_OWNER };

namespace NamespaceFilterNameMapper {
AWS_SERVICEDISCOVERY_API NamespaceFilterName GetNamespaceFilterNameForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForNamespaceFilterName(NamespaceFilterName value);
}  // namespace NamespaceFilterNameMapper
}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
