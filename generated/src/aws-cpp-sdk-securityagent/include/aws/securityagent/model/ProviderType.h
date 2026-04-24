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
enum class ProviderType { NOT_SET, SOURCE_CODE, DOCUMENTATION };

namespace ProviderTypeMapper {
AWS_SECURITYAGENT_API ProviderType GetProviderTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForProviderType(ProviderType value);
}  // namespace ProviderTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
