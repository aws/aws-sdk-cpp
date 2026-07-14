/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class DiscoveryType { NOT_SET, Managed, SelfHosted };

namespace DiscoveryTypeMapper {
AWS_SECURITYHUB_API DiscoveryType GetDiscoveryTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForDiscoveryType(DiscoveryType value);
}  // namespace DiscoveryTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
