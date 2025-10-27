/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Model {
enum class ResourceStatus { NOT_SET, ok, warning, error };

namespace ResourceStatusMapper {
AWS_TRUSTEDADVISOR_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForResourceStatus(ResourceStatus value);
}  // namespace ResourceStatusMapper
}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
