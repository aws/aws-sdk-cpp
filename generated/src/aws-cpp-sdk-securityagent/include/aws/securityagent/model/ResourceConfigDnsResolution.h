/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class ResourceConfigDnsResolution { NOT_SET, PUBLIC_, IN_VPC };

namespace ResourceConfigDnsResolutionMapper {
AWS_SECURITYAGENT_API ResourceConfigDnsResolution GetResourceConfigDnsResolutionForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForResourceConfigDnsResolution(ResourceConfigDnsResolution value);
}  // namespace ResourceConfigDnsResolutionMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
