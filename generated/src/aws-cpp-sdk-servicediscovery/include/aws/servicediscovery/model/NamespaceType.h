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
enum class NamespaceType { NOT_SET, DNS_PUBLIC, DNS_PRIVATE, HTTP };

namespace NamespaceTypeMapper {
AWS_SERVICEDISCOVERY_API NamespaceType GetNamespaceTypeForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForNamespaceType(NamespaceType value);
}  // namespace NamespaceTypeMapper
}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
